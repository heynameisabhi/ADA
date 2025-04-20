#include<stdio.h>
void readgraph(int n,int a[10][10])
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
}

void find_indegre(int n, int a[10][10],int indegre[])
{
int i,j,sum;
for(j=0;j<n;j++)
{
sum=0;
for(i=0;i<n;i++)
sum+=a[i][j];
indegre[j]=sum;
}
}
void topological_sort(int n,int a[10][10])
{
int i,k=0,u,v,top,indegre[10],s[10];
int t[10];
find_indegre(n,a,indegre);
top=-1;
for(i=0;i<n;i++)
{
if(indegre[i] == 0)
s[++top] =i;
}

while(top!=-1)
{
u=s[top--];

t[k++]=u;
for(v=0;v<n;v++)
{
if(a[u][v]==1)
{
indegre[v]--;
if(indegre[v]==0)
{
 s[++top]=v;
}
}
}
}
printf("The topological sort sequence is :\n");
for(i=0;i<n;i++)
printf("%d\t",t[i]);
}

int main()
{
int n,a[10][10];
printf("\n Enter the number of values:\n");
scanf("%d",&n);
printf("\n Enter adjacency matrix: \n");
readgraph(n,a);
topological_sort(n,a);
}

