#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float S,a,b,c,s;
cout<<"a=";cin>>a;
cout<<"b=";cin>>b;
cout<<"c=";cin>>c;
 s=(a+b+c)/2;
S=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<setprecision(3);
cout<<"S="<<S<<endl;
    return 0;
}
