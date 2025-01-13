#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t--){
        long long n,m;
        std::cin>>n>>m;
        long long ans=std::max(n,m)+1;
        std::cout<<ans<<std::endl;

    }
    return 0;
}
