#include<iostream>
using namespace std;
void fun(int array[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++)
        {
            if(array[i]<array[j]){
                int tmp=array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
        }
    }

}
int main()
{
    int siz;
    cout<<"Enter array size:";
    cin>>siz;
    int array[siz];
    cout<<"Enter "<<siz<<" element:"<<endl;

    for(int i=0;i<siz;i++) {  
         cin>>array[i];
    }
    fun(array,siz);
    cout<<"Element of ascending :";
    for(int i=0;i<siz;i++)
    {
        cout<<array[i]<<" ";
    }


}