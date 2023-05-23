#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///set declaration
    set<int>s;
    /// insert
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(3);

    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
     set<int,greater<int> >s1;
    /// insert
    s1.insert(1);
    s1.insert(2);
    s1.insert(2);
    s1.insert(4);
    s1.insert(3);
    for(auto i:s1) cout<<i<<" ";
    cout<<endl;

    ///clear();
    ///erase(3);

    set<int>::iterator r;
    r=s1.begin();
    advance(r,2);
    s1.erase(r);

    for(auto r:s1) cout<<r<<" ";
    cout<<endl;
    ///find function
    auto ra=s1.find(1);
    if(ra!=s1.end())
    {
        cout<<"find";
    }else
     cout<<"Not find";

     cout<<endl;

     ///count function

     int c=s1.count(4);
     cout<<c<<endl;




}
