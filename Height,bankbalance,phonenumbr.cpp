//single C comment
/*
Name:Dominic Muthomi
Reg No:CT101/G/26556/25
Date :20/9/2025
Description :Variables and Data types
*/
#include<stdio.h>
int main()
{
	int height;
	double bankbalance;
	char phonenumber[30];
	printf("enter your height:");
	scanf("%d",&height);
	printf("enter your bankbalance:");
	scanf("%lf",&bankbalance);
	printf("enter your phonenumber:");
	scanf("%s",phonenumber);
	//display all of them together
	printf("your height is %dmeters\n",height);
	printf("your bankbalance is ksh %lf\n",bankbalance);
	printf("your phonenumber is %s\n",phonenumber);
	return 0;
}	