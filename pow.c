#include<stdio.h>
#include<math.h>
int main()
{
	int n,p,res;
	printf("enter first number");
	scanf("%d",&n);
	printf("number for power");
	scanf("%d",&p);
	res=pow(n,p);
	printf("%d",res);
}
