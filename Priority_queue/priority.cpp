#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    if(pq.empty())
    {
        cout<<"empty"<<endl;
    }else
    {
        cout<<"Not empty"<<endl;
    }
    cout<<"Size "<<pq.size()<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
     pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
     while(pq.size()>0)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    ///small to big

    priority_queue<int,vector<int>,greater<int>>p,p1;
     p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
    p.push(5);
     while(p.size()>0)
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;
    p1.push(10);
    p1.push(20);
    p1.push(30);
    p1.push(40);
    p1.push(50);
    p.swap(p1);
     while(p.size()>0)
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;

}
