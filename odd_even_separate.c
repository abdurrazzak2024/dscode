#include<stdio.h>
int main(){
    int size;
    printf("Enter of array size :");
    scanf("%d",&size);
    int array[size];
    printf("Enter of array element:");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }

    printf("Even number:\n");
    for(int i=0;i<size;i++){
        if(array[i]>=0){
            if(array[i]%2==0){
                printf("%d\n",array[i]);
            }
        }
    }
    printf("odd number:\n");
    for(int i=0;i<size;i++){
        if(array[i]>=0){
            if(array[i]%2!=0){
                printf("%d\n",array[i]);
            }
        }
    }
    return 0;

}
