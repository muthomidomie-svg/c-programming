/*
Name : Dominic Muthomi
REG NO : CT101/G/26556/25
Date : 28/10/2025
Description: 1D Array weekly  Revenue Tracker
*/

#include <stdio.h>
int main(){
	float revenue[7],total = 0,average;
	int i;
	
	printf("enter revenue for 7 days:\n");
	for(i = 0; i < 7;i++){
		printf("day %: ", i+1);
		scanf("%f", &revenue[i]);
		total += revenue[i];
	}
	
	average = total / 7;
	
	printf("\ntotal weekly revenue:%.2f\n",total);
	printf("average daily revenue: %.2f\n",average);
	return 0;
}