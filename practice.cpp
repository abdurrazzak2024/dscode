#include<iostream>
using namespace std;
int fa(int t){
    int fac=1,n;
   for(int i=1;i<=t;i++){
       fac=fac*i;
   }
     return fac;
}
int sum(int m){
      int i,sum=0;
      for(i=1;i<=m;i++){
          sum+=i;
      }
      return sum;
}
int mt(int r1,int c1){
    int a[5][5],b[5][5],m[5][5];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
                cout<<" ";
            cin>>a[i][j];
        }
        cout<<endl;
    }


    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
                cout<<" ";
             cin>>b[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
                cout<<" ";
            m[i][j]=a[i][j]+b[i][j];
        }
        cout<<endl;
    }
    cout<<"A+B:"<<endl;


    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
                cout<<" ";
                cout<<m[i][j];
        }
        cout<<endl;

    }

}
int main(){
   int t,n,r1,c1;
   cout<<"Enter t m value:"<<endl;
   cin>>t>>n;
   cout<<"factorial:"<<fa(t)<<endl<<"sum:"<<sum(n)<<endl;
   cout<<"Enter matrix a and b row and culom:";
   cin>>r1>>c1;
   cout<<mt(r1,c1)<<endl;



}
