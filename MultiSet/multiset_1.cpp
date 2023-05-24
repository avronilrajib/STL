#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ml;
    ml.insert(2);
    ml.insert(2);
    ml.insert(2);
    ml.insert(3);
    ml.insert(5);
    ml.insert(8);
    ml.insert(1);
    ml.insert(1);
    ml.insert(4);
    ml.insert(4);

    for(auto it:ml) cout<<it<<" ";
    cout<<endl;
    cout<<ml.size()<<endl;
    multiset<int>::iterator it;
    for(it=ml.begin();it!=ml.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<ml.count(2)<<endl;


    ///lower bound function
    it=ml.lower_bound(6);

    if(it==ml.end())
    {
        cout<<"the element is larger"<<endl;
    }else
     cout<<"the lower bound is: "<<*it<<endl;


     it=ml.upper_bound(2);

    if(it==ml.end())
    {
        cout<<"the element is larger"<<endl;
    }else
     cout<<"the lower bound is: "<<*it<<endl;



}
