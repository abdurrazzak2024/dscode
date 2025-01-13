#include<stdio.h>
long long maxcoin(long long n){
   if(n<=3)
    return 1;

    long long coin = 1;
    while(n>3){
        n/=4;
        coin*=2;
    }
    return coin;

   }
   int main(){

      int t;
      scanf("%d",&t);
      while(t--){
        long long n;
        scanf("%lld",&n);
        printf("%lld",maxcoin);

      }
      return 0;

   }





