/*
Name : Dominic Muthomi
REG NO : CT101/G/26556/25
Date : 7/10/2025
Description : Do ehile loop
*/
#include <stdio.h>
int main ()
{
	int password;
	do {
		printf("enter password:");
		scanf("%d",&password);
		if (password !=1234){
			printf("incorrect password. try again.\n");
		}
	} while ( password !=1234);
	printf("access granted.\n");
	return 0;
}