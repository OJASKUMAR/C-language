#include<stdio.h>
#define Pi 3.14
int main()
{
	float radius,area;
	printf("Enter the radius");
	scanf("%d",&radius);
	area=Pi*radius*radius;
	printf(".2%f",&area);
	return 0;
	
	
}
