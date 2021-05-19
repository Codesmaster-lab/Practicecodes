
#include<stdio.h>
int main()
{
	int a=0,b=1,c;
	int n=2;
	printf("%d %d",a,b);
	while(n!=6)
	{c=a+b;n++;
		printf(" %d",c);
		a=b;
		b=c;
	}
	return 0;
}
