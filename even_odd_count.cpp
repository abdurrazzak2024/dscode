#include<iostream>
using namespace std;
int main(){
     int arr[100],size;
     cout<<"Enter array size:";
     cin>>size;
     cout<<"Enter array element:";
     for(int i=0;i<size;i++){
        cin>>arr[i];
     }
     cout<<"Even number:\n";
     for(int i=0;i<size;i++){
        if(arr[i]>=0){
            if(arr[i]%2==0){
                cout<<arr[i]<<endl;
            }
       }
     }
     cout<<"odd number:\n";
     for(int i=0;i<size;i++){
        if(arr[i]>=0){
            if(arr[i]%2!=0){
                cout<<arr[i]<<endl;
            }
        }
     }


}
