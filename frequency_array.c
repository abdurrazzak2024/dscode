#include<stdio.h>
int main(){
 int a[100],f[100],size;
 printf("Enter the array size :");
 scanf("%d",&size);
 for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
    f[i]=1;
 }

 for(int i=0;i<size;i++){
    if(f[i]==0)
        continue;
    for(int j=i+1;j<size;j++){
        if(f[j]==0)
            continue;
        if(a[i]==a[j]){
            f[i]++;
            f[j]=0;
        }
    }
 }
 printf("\n frequencs are\n");
 for(int i=0;i<size;i++){
    if(f[i]!=0){
        printf("\n %d occurs %d times\n",a[i],f[i]);
    }
 }


}
