#include<iostream>
#include<vector>
using namespace std;
void primegenerate(int n){
   if(n<2){

    cout<<"prime number is not possible:";
    return;
   }

   vector<bool>isprime(n+1,true);
   isprime[0]=isprime[1]=false;
   for(int i=2;i*i<=n;i++){
    if(isprime[i]){
        for(int j=i*i;j<=n;j+=i){
            isprime[j]=false;
        }
    }
   }
   cout<<"prime number up to"<<n<<endl;
   for(int i=2;i<=n;i++){
       if(isprime[i]){
        cout<<i<<" ";
       }
   }
   cout<<endl;


}
int main(){
 int n;cout<<"Enter value of n:";
 cin>>n;
 primegenerate(n);
 return 0;

}
