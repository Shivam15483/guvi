#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n>=1 && n<=100000){
	if(n%2==0)
	printf("even");
	else
	printf("odd");
	}
}
