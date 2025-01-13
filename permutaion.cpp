#include<iostream>
using namespace std;
int fac(int n){
   int fac=1;
   for(int i=1;i<=n;i++){
    fac =fac*i;
   }
   return fac;

}
int pr(int n,int r){


   int nCr=fac(n)/(fac(r)*fac(n-r));
   return nCr;
}
int cm(int n,int r){

  int nPr=fac(n)/fac(n-r);
  return nPr;
}
int main(){
   int n,r;
   cout<<"Enter n and  r value:";
   cin>>n>>r;
   cout<<"factorial:"<<fac(n)<<endl<<"permutation:"<<pr(n,r)<<endl<<"combination:"<<cm(n,r)<<endl;
   return 0;

}
