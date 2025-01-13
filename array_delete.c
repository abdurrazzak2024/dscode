#include<stdio.h>
int main(){
    int position,size,valu;

    printf("Enter the size of an array:");

    scanf("%d",&size);

    int array[size];

    for(int i=0;i<size;i++){

        scanf("%d",&array[i]);
    }
    printf("Enter position where you wish to delete an element\n");

    scanf("%d",&position);

    for(int i=position-1;i<=size-2;i++){

        array[i]=array[i+1];
    }
     array[size-1]=0;

     printf("after the delete of an array\n");
     for(int i=0;i<size;i++){
        printf("%d ",array[i]);
     }

    return 0;
}
