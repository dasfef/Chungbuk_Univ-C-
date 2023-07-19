#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int dice1, dice2, dice3;
	int cnt = 0;
	while (true) {
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		dice3 = rand() % 6 + 1;
		
		printf("dice1: %d / dice2: %d / dice3: %d\n" ,dice1, dice2, dice3);
		cnt++;
		if((dice1 == dice2) && (dice2 == dice3)) {
			printf("count: %d", cnt);
			break;
		}
	}
}


		
