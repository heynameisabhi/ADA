#include<stdio.h>

void main(){
int n,a[10],i,j;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the elements of the array\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
bb_s(a           ,n);
}
int bb_s(int a[],int n){
int i,j,temp;
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("The sorted array are\n");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
}
