#include<stdio.h>
int main()
{
	int n,f=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		f++;
	}
	printf("%d",f);
}
