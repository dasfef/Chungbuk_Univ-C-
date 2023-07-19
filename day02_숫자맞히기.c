#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int cnt = 0;
	srand(time(NULL));

	for(int i=0; i<10; i++){
		int com = rand() % 5 + 1;
		int user;
		printf("%d\n", com);
		printf("input: ");
		scanf("%d", &user);
		cnt ++;

		if(com == user){
			printf("CORRECT!\n");
			printf("Count: %d\n", cnt);
			break;
		}
		else {
			printf("WRONG..\n");
			continue;}
	}
	printf("-- Program Exit --");
	return 0;
}


