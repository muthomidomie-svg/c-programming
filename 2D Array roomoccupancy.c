/*
Name : Dominic Muthomi
REG NO : CT101/G/26556/25
Date : 28/10/2025
Description:2D Array room occupancy
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int occupancy[5][10];
	int floor,room,occupied,vacant;
	
	srand(time(0));
	
	for(floor = 0; floor < 5;floor++){
		occupied = vacant = 0;
		for(room = 0; room < 10; room++){
			occupancy[floor][room] = rand()% 2;
			// random 0 or 1
			if(occupancy[floor][room] == 1)
			occupied++;
		 else vacant++;
		}
	printf("floor %d -> occupied: %d,vacant : %d\n",floor+1,occupied,vacant);
	}
	return 0; 
}