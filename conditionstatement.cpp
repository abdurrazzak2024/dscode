#include<iostream>
using namespace std;
void ascending(int array[],int size){
   for(int i=0;i<size-1;i++){
    for(int j=i+1;j<size;j++){
        if(array[i]<array[j]){
            int tmp = array[i];
            array[i]=array[j];
            array[j]=tmp;

        }
    }
   }

}

int main(){
    int n;
    cout<<"Enter element of array:";
    cin>>n;
    int array[n];
    cout<<"Enter "<<n<<" element"<<endl;

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
     ascending(array,n);
     cout<<"ascending array:";

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

}
