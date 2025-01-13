#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],r1,c1;
    printf(" Enter first matrix row and colam element:\n");

    scanf("%d %d",&r1,&c1);

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){

            scanf("%d",&a[i][j]);
        }
         printf("\n");

    }

    printf(" Enter first matrix row and colam element:\n");

    scanf("%d %d",&r1,&c1);

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){

            scanf("%d",&b[i][j]);
        }
         printf("\n");

    }
    printf("\n");


    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){

            c[i][j]=a[i][j]-b[i][j];
        }
         printf("\n");

    }
    printf("A+B=\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){

            printf("%d ",c[i][j]);
        }
         printf("\n");

    }
    printf("\n");
    return 0;
}

