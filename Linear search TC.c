#include<stdio.h>
void main(){
int n, a[10],key,i;
int flag=0;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the elements in the array\n"); 
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the key\n");
scanf("%d",&key);
for(i=0;i<n;i++){
if(a[i]==key){
printf("%d is found\n",key);
flag=1;
}
}
if(flag==0){
printf("The Key is not found\n");
}
}
