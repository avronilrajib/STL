#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; //vector print
    }
    cout<<endl;



    cout<<v.front()<<endl;   //1st element print



    cout<<v.back()<<endl;    //last element print


     v.clear();   //vector clear

    cout<<v.size()<<endl;  //output is 0



    if(v.empty())
    {
        cout<<"empty"<<endl;
    }else
    cout<<"NOt empty"<<endl;

      v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    v.pop_back();  //last element delete
      for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; //vector print
    }
   cout<<endl;
    v.erase(v.begin()+1,v.begin()+4); //delete element
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; //vector print
    }



}
