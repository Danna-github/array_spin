#include<stdio.h>

int main() {
	int array[5][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	int arrSize = 5;

	//same code for array size 10 * 10
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < arrSize; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

	printf("\n회전 시킨 후\n\n");

	for (int j = 0; j < arrSize; j++) {
		for (int i = arrSize-1; i >= 0; i--) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}
