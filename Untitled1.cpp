#include<stdio.h>
int main()
{
	char ch;
	int num;
	float f;
	printf("enter any character");
	scanf("%c",&ch);
	
	printf("enter any integer");
	scanf("%d",num);
	
	printf("enter any real number");
	scanf("%f",&f);
	
	printf("character is:%c\nInteger number is:%d\nReal number is:%f",ch,num,f);	
}

