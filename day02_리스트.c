#include <stdio.h>

int main() {
	int score[5] = {};
	int result = 0;
	int size = sizeof(score) / sizeof(int);
	for (int i=0; i<size; i++){
		int temp = 0;
		printf("Input scores: ");
		scanf("%d", &temp);
		score[i] = temp;
	}
	
	for (int i=0; i<size; i++){
		result += score[i];
	}

	printf("Result: %1.2f", (float)(result / 5));
}


