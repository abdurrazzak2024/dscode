#include<iostream>
using namespace std;
void ascending(int arr[],int size){
   for(int i=0;i<size-1;i++){
      for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){

        int tmp = arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;


        }
      }
   }
}
int main(){
  int n;
  cout<<"Enter the size of  array and element:";
  cin>>n;
  int arr[n];


  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  ascending(arr,n);
  cout<<"Descending of array element:";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}
