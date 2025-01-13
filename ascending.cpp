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
  cout<<"enter the element of  array:";
  cin>>n;
  int arr[n];
  cout<<"enter  "<<n<<" element"<<endl;

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  ascending(arr,n);
  cout<<"ascending of array element:";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}
