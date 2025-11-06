/*write a C program to caluculate distance travelled by an object*/
#include<stdio.h>
int main()
{
	float acc,vel,dist;
	int time;
	
	
	printf("enter value for acceleration");
	scanf("%f",&acc);
	
	printf("enter value for velocity");
	scanf("%f",&vel);
	
	printf("enter value for time");
	scanf("%d",&time);
	
	dist=(vel*time)+(acc*time*time)/2;
	
	printf("\nThe distance is %f",dist);
}
