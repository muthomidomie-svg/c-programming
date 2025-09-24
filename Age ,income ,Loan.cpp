//single C program 
/*
Name : Dominic Muthomi
Reg No :CT1101/G/26556/25
Date: 16/9/2025
Description: variables and data type
*/
#include<stdio.h> 
int main()
{
int age;
double income;

printf("enter user's age: ");
scanf("%d",&age);

printf("enter user's annual income:");
scanf("%lf",&income);
//check loan qualification
if (age >= 21 && income >= 21000){
  printf("congratulation you qualify for a loan:\n");
}else{
 printf("unfortunatly,we are unable to offer you a loan at this time: ");
}
return 0;	
}