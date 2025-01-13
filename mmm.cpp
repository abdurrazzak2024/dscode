#include<iostream>
using namespace std;
int main(){
   int a[3][3],b[3][3];int d[4][4],m[3][3],n[4][4];int i,j;
   int r,c;
   cout<<"Enter fist matrix row and coluam:"<<endl;
   cin>>r>>c;


    for(i=0;i<r;i++){

        for(j=0;j<c;j++){

            cin>>a[i][j];
        }

    }
    cout<<"A="<<endl;

    for( i=0;i<r;i++){

        for( j=0;j<c;j++){
                cout<<" ";

            cout<<a[i][j];
        }
        cout<<endl;

    }


   cout<<"Enter second matrix row and coluam:"<<endl;
   cin>>r>>c;


    for(i=0;i<r;i++){

        for(j=0;j<c;j++){

            cin>>b[i][j];
        }

    }
    cout<<"B="<<endl;

    for( i=0;i<r;i++){

        for( j=0;j<c;j++){
                cout<<" ";

            cout<<b[i][j];
        }
        cout<<endl;

    }

     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            d[i][j] = a[i][j]+b[i][j];
        }
     }
     cout<<"A+B="<<endl;

     for(i=0;i<r;i++){
             cout<<" "<<" "<<endl;
        for(j=0;j<c;j++)
            cout<<d[i][j];
     }
     cout<<endl;

     for( i=0;i<r;i++){

        for( j=0;j<c;j++){
                cout<<" "<<" ";
                m[i][j]=a[i][j]-b[i][j];

        }
        cout<<endl;

    }

     cout<<"A-B="<<endl;

     for(i=0;i<r;i++){
             cout<<" "<<" "<<endl<<endl;
        for(j=0;j<c;j++)
            cout<<m[i][j];
     }

     for(i=0;i<r;i++){
        cout<<" "<<endl;
        for(j=0;j<c;j++){
            if(r==c){
               n[i][j] = a[i][j]*b[i][j];
            }
            else{
                cout<<"matrix invalid"<<endl;
            }
        }
     }
     cout<<"multiply"<<endl;
     for(i=0;i<r;i++){
         cout<<" "<<endl;
         for(j=0;j<c;j++){
            cout<<n[i][j]<<endl;
         }

     }

}




