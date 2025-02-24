#include<stdio.h>
#include<time.h>
void main(){

int i,j,n;

printf("Enter the size array\n");
scanf("%d",&n);
int temp,a[n],k;
srand(time(NULL));
for(i=0;i<n;i++){
 a[i]=rand()%25000;
}
clock_t start = clock();
for(i=0;i<n;i++){
j=i;
 for(k=i+1;k<n;k++){
    if(a[k]<a[j]){
       j=k;
      }
}
  temp = a[i];
  a[i]=a[j];
  a[j]=temp;
}
clock_t end = clock();
double timetaken = (double)(end-start)/CLOCKS_PER_SEC;
printf("the time taken = %F in sec",timetaken);
/*for(i=0;i<n;i++){
 printf("%d ",a[i]);
}*/
printf("\n");
}