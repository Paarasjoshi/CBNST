#include<bits/stdc++.h>
using namespace std;
int main()
{
    float t,a,e,r,p;
    cout<<"Enter True Value: ";
    cin>>t;
    cout<<"Enter Approximate Value: ";
    cin>>a;
    e=t-a;
    r=e/t;
    p=r*100;
    cout<<e<<" "<<r<<" "<<p;

}