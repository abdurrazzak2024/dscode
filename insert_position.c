#include<stdio.h>
int main(){
    int position,size,valu;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int array[size];

    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter position where you wish to insert an element\n");
    scanf("%d",&position);

    printf("Enter the value of insert\n");

    scanf("%d",&valu);

    for(int i=size;i>=position;i--){
        array[i]=array[i-1];
    }
    array[position]=valu;

    printf("Result array\n");

    for(int i=0;i<=size;i++){
        printf("%d  ",array[i]);
    }
    printf("\n");
    return 0;
}
