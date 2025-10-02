/*
Name : Dominic Muthomi
Reg NO : CT101/G/26556/25
Date : 1/10/2025
Description : water bill calculator
*/
#include<stdio.h>
int main()
{
	int water_units;
	float total_bills;
	
	//prompt the user to enter the number of water units consumed
	printf("enter the number of water units consumed:");
	scanf("%d",&water_units);
	
	if(water_units<=30){
		total_bills = water_units * 20;
	}else if(water_units >=31&&water_units<=60){
		total_bills = water_units * 25; 
	}else if(water_units >= 60){
		total_bills = water_units * 30;
	}
	printf("water units is %d\n",water_units);
	printf("total_bills is %.2f kes\n",total_bills);

	return 0;
}