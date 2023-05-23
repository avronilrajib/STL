#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li;//list Declaration
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    li.push_front(9);
     for(auto it:li)
     {
         cout<<it<<" ";
     }
     cout<<endl;
     cout<<li.front()<<endl;
     cout<<li.back()<<endl;


     li.pop_front();
     li.pop_back();

     for(auto it:li)
     {
         cout<<it<<" ";
     }
     cout<<endl;
     cout<<li.size()<<endl;

}
