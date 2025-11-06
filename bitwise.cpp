/*write a c program to perform bitwise operations*/
#include <stdio.h>
int main()
{
	int a,b;
	printf("enter any two integer numbers");
	scanf("%d%d,&a,&b");
	printf("in bit wise operation of %d&%d is %d",a,b,a&b);
	printf("in bit wise operations of %d|%d is %d",a,b,a|b);
	printf("in bit wise operations of %d^%d is %d",a,b,a^b);
	printf("in bit wise operations of %d<<%d is %d",a,b,a>>b);
	printf("in bit wise operations of %d>>%d is %d",a,b,a>>b);
		}
