#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,grest;
    cin>>a>>b>>c;
     grest = (a+b+abs(a-b))/2;
     grest = (grest+c+abs(grest-c))/2;
    cout<<grest<<" eh o maior"<<endl;

}
