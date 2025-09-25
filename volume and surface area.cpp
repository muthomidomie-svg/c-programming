//single C program
/*
Name : Dominic Muthomi
Reg NO : CT101/G/26556/25
Date : 18/9/2025
Description : program to calculate volume and surface area of a cylinder
*/
#include<stdio.h>
#include<math.h>
#define pi 3.142

int main()
{
	int radius,height,volume,surfacearea;
	
	printf("enter radius of the cylinder:\n");
	scanf("%d",&radius);
	
	printf("enter height of the cylinder:\n");
	scanf("%d",&height);
	
	volume= pi*radius*radius*height;
	surfacearea=2*pi *radius*radius*height + (2*pi*radius*height);
	
	printf("volume is %.3d cubic metres\n",volume);
	printf("surfacearea is %.3d  metres squared\n",surfacearea);
	return 0;
}
