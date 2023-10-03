#include<bits/stdc++.h>
using namespace std;
int main()
{
    float t,tv,ro;
    int d;
    cin>>t>>d;
    float factor = pow(10.0,d);
    tv=int (t*factor)/factor;
    ro=int(t*factor+0.5)/factor;
    cout<<t<<" "<<tv<<" "<<ro;
}