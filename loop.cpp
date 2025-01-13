#include<iostream>
using namespace std;
 int fac(int n){
  int s=1;
  for(int i=1;i<=n;i++){
    s*=i;
  }
  return s;
 }
 int dow(int m){
   int sm=1;
   for(int i=1;i<=m;i++){
    sm*=i;
   }
   return sm;
 }
 int main(){

   int x,y;
   cout<<"Enter x and y value :";
   cin>>x;
   cin>>y;
   cout<<"factorial of x is :"<<fac(x)<<endl<<"factorial of y is :"<<dow(y)<<endl;

 }
