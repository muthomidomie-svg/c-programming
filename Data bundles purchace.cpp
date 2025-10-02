/*
Name : Dominic Muthomi
REG NO : CT101/G/26556/25
DATE : 1/10/2025
Description : mobile Data Purchase
*/

#include<stdio.h>
int main()
{
	//display data bundles purchase menu
	printf( "1.100 MB = 50 KES:\n");
	printf("2.500 MB =200 KES:\n");
	printf("3.1GB =350 KES:\n");
	printf("4.2 GB =600 KES:\n");
	
	int choice,cost;
	printf("enter your choice (1-4):");
	scanf("%d",&choice);
	
	
	
	if (choice ==1)
		cost = 50;
		 else if (choice ==2)
		cost = 200;
		else if (choice ==3)
		cost = 350;
        else if (choice ==4)
		cost = 600;
		
		else
			printf("invalid choice:");
		
		printf("cost is kes . %d",cost);
		return 0;
		
		
}
