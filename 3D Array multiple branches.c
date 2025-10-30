/*
Name : Dominic Muthomi
REG NO : CT101/G/26556/25
Date : 29/10/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int chain[3][5][10];
	int branch,floor,room,totaloccupied = 0;
	srand(time(0));
	
	for(branch = 0; branch < 3; branch++){
		for(floor = 0;floor < 5; floor++);
	}
for(room = 0; room < 10; room++){
	chain[branch][floor][room] = rand() % 2;
	if (chain[branch][floor][room]== 1)
		totaloccupied++;
     }
  }
} 
printf("totaloccupied rooms across all branches: %d\n" ,totaloccupied);
}
return 0;
}