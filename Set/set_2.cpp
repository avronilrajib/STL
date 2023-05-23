#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);
   for(auto it:s)
    cout<<it<<" ";
    cout<<endl;

    set<int>::iterator it;
    ///lower bound function
    it=s.lower_bound(9);

    if(it==s.end())
    {
        cout<<"the element is larger"<<endl;
    }else
     cout<<"the lower bound is: "<<*it<<endl;

     ///upper bound function

     it=s.upper_bound(2);

    if(it==s.end())
    {
        cout<<"the element is larger"<<endl;
    }else
     cout<<"the lower bound is: "<<*it<<endl;
     ///swap funtion

     set<int>s1;
     s.swap(s1);
      for(auto it:s1)
    cout<<it<<" ";
    cout<<endl;

    ///= equal operator

    set<int>r={0,9,8,6,5,4};
    set<int>a;
    a=r;
    for(auto it:a)
    {
        cout<<it<<" ";
    }


}
