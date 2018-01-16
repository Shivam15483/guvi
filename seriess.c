#include<stdio.h>
int main()
{
	int i,n,k,a[100],sum=0,j;
printf("enter 2 number");
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=0;j<=k;j++)
sum=sum+j;
printf("%d",sum);


}
