#include<stdio.h>
#include<math.h>
int main()
{
	int n,p,rev=0;
	printf("enter first number");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		int d=n%10;
		rev=(rev*10)+d;
		n=n/10;
	}
	if(p==rev)
	printf("Yes");
	else
	printf("not");

}
