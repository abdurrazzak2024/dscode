#include<iostream>
using namespace std;
int main(){
   int a[4][4] ,b[4][4];
   int r1,c1,r2,c2;

   cout<<"enter first matrix row and colom:";
   cin>>r1>>c1;
   for(int i=0;i<r1;i++){

    for(int j=0;j<c1;j++){
            cout<<" ";
        cin>>a[i][j];
    }
    cout<<endl;
   }
   cout<<"A="<<endl;

   for(int i=0;i<r1;i++){

    for(int j=0;j<c1;j++){
        cout<<" ";

     cout<<a[i][j];


     }
     cout<<endl;
   }
   cout<<"enter second matrix row and colom:";
   cin>>r2>>c2;
   for(int i=0;i<r2;i++){

    for(int j=0;j<c2;j++){
            cout<<" ";
        cin>>b[i][j];
    }
    cout<<endl;
   }
   cout<<"B="<<endl;

   for(int i=0;i<r2;i++){

    for(int j=0;j<c2;j++){
        cout<<" ";

     cout<<b[i][j];
     }
     cout<<endl;
   }
   cout<<endl;

   if(c1==r2){
    int m[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
             m[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                m[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

   cout<<"multiplication"<<endl;
   for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
            cout<<" "<<" ";
        cout<<m[i][j];
    }
    cout<<endl;
   }


}
   else{
    cout<<"matrix is not multiplication";
   }

}
