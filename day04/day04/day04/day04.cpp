//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5];
//	int size = 0;
//	int i;
//
//	printf("�迭�� ����Ʈ ũ�� : %d\n", sizeof(arr));
//
//	size = sizeof(arr) / sizeof(arr[0]);
//	printf("�迭�� ũ�� : %d\n", size);
//
//	for (i = 0; i < size; i++)
//		arr[i] = 0;
//
//	for (i = 0; i < size; i++)
//		printf("%d", arr[i]);
//	
//	printf("\n");
//}


//#include <stdio.h>
//#define ARR_SIZE 5
//
//int main(void)
//{
//	int arr[ARR_SIZE] = { 1, 2, 3, 4, 5 };
//	int x[ARR_SIZE] = { 1, 2, 3 };
//	int y[ARR_SIZE] = { 0 };
//	int z[] = { -1, 0, 1 };
//	int i, size;
//
//	printf("arr = ");
//	for (i = 0; i < ARR_SIZE; i++)
//		printf("%3d", arr[i]);
//	printf("\n");
//
//	printf("x = ");
//	for (i = 0; i < ARR_SIZE; i++)
//		printf("%3d", x[i]);
//	printf("\n");
//
//	printf("y = ");
//	for (i = 0; i < ARR_SIZE; i++)
//		printf("%3d", y[i]);
//	printf("\n");
//
//	printf("z = ");
//	size = sizeof(z) / sizeof(z[0]);
//	for (i = 0; i < size; i++)
//		printf("%3d", z[i]);
//	printf("\n");
//}


//#include <stdio.h>
//#define ARR_SIZE 5
//
//unsigned int absolute(int x)
//{
//	return x > 0 ? x : -x;
//}
//
//int main(void)
//{
//	int x[ARR_SIZE] = { -4, 0, 28, 3, -12 };
//	unsigned int y[ARR_SIZE] = { 0 };
//	int i;
//
//	for (i = 0; i < ARR_SIZE; i++)
//		y[i] = absolute(x[i]);
//
//	for (i = 0; i < ARR_SIZE; i++)
//		printf("%d", y[i]);
//	printf("\n");
//
//
//}


//#include <stdio.h>
//#define ARR_SIZE 10
//
//int main(void)
//{
//	int arr[ARR_SIZE]{ 1,1 };
//	int i;
//	
//	for (i = 2; i < ARR_SIZE; i++)
//		arr[i] = arr[i - 2] + arr[i - 1];
//
//	for (i = 0; i < ARR_SIZE; i++)
//		printf("%d", arr[i]);
//	printf("\n");
//
//	printf("arr[10] = %d/n", arr[10]);
//	 
//
//}


//#include <stdio.h>
//#define ARR_SIZE 5
//
//int main(void)
//{
//	int x[ARR_SIZE] = { 10, 20, 30, 40, 50 };
//	int y[ARR_SIZE] = { 0 };
//	int i;
//
//	for (i = ARR_SIZE-1; i >= 0; i--)
//		y[i] = x[i];
//
//	for (i = 0; i < ARR_SIZE; i++)
//		printf("%d", y[i]);
//	printf("\n");
//}

//#include <stdio.h>
//#define ROW 3
//#define COL 2
//
//int main(void)
//{
//	int data[ROW][COL];
//	int i, j, k;
//
//	for (i = 0, k = 0; i < ROW; i++)
//		for (j = 0; j < COL; j++)
//			data[i][j] = ++k;
//
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//			printf("data[%d][%d] : %3d\t", i, j, data[i][j]);
//		printf("\n");
//	}
//}


//#include <stdio.h>
//#define COL 2
//
//int main(void)
//{
//	int data[][COL] = {
//		{10, 20}, {30, 40}, {50, 60}
//	};
//	int row_size = sizeof(data) / sizeof(data[0]);
//	int i, j;
//	for (i = 0; i < row_size; i++) {
//		for (j = 0; j < COL; j++)
//			printf("%3d ", data[i][j]);
//		printf("\n");
//	}
//}


//#include <stdio.h>
//
//void print_array(int arr[], int size);
//
//int main(void)
//{
//	int data[3] = { 10, 20, 30 };
//	int x[] = { 1, 2, 3, 4, 5 };
//	int size = sizeof(x) / sizeof(x[0]);
//
//	printf("data = ");
//	print_array(data, 3);
//
//	printf("x    = ");
//	print_array(x, size);
//
//	printf("x    = ");
//	print_array(x, 3);
//
//}
//
//void print_array(int arr[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void print_array(int arr[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//int main(void)
//{
//	int data[] = { 12, 34, 51, 22, 91, 12, 15 };
//	int size, i;
//	int key;
//
//	size = sizeof(data) / sizeof(data[0]);
//	printf("data = ");
//	print_array(data, size);
//
//	printf("ã�� ��(Ű) ?");
//	scanf("%d", &key);
//	for (i = 0; i < size; i++) {
//		if (data[i] == key)
//			printf("ã�� ������ �ε��� : %d\n", i);
//	}
//}

//#include <stdio.h>
//int main(void)
//{
//	int x[4][3] = { {1, 2, 3}, {4, 5}, {6} };
//	int i, j;
//
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			x[3][j] += x[i][j];
//
//	for (i = 0; i < 4; i++)
//		for (j = 0; j < 3; j++)
//			printf("%2d ", x[i][j]);
//	printf("\n");
//}



// ===== 1�� �������� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int num, dif, i, x;
//	
//	printf("ù ��° �� : ");
//	scanf("%d", &num);
//
//	int data[10] = { num };
//
//	printf("���� : ");
//	scanf("%d", &dif);
//
//	for (i = 0; i < 9; i++) {
//		data[i + 1] = data[i] + dif;
//	}
//	for (i = 0; i <= 9; i++) {
//		printf("data[%d] = %d ", i, data[i]);
//	}
//}



// ===== 2�� �������� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int num, dif, i;
//	printf("ù ��° �� : ");
//	scanf("%d", &num);
//
//	printf("���� : ");
//	scanf("%d", &dif);
//
//	int data[10] = { num };
//
//	for (i = 0; i < 9; i++)
//		data[i + 1] = data[i] * dif;
//	for (i = 0; i <= 9; i++)
//		printf("data[%d] = %d ", i, data[i]);
//}



// ===== 3�� �������� =====
#define ARR_SIZE 10
#include <stdio.h>

void print_array(int data[], int x)
{
	int i, min;

	for (i = 0; i < x; i++) {
		printf("%d ", data[i]);
	}
	

	min = data[x - 1];
	printf("�ּҰ� : %d", min);
	printf("\n");
}

int main(void)
{
	int data[] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int size = sizeof(data) / sizeof(data[0]);
	int min, temp, i, j;

	for (i = 0; i < size-1; i++) {
		min = i;
		for (j = i + 1; j < size; j++) {
			if (data[min] < data[j]) {
				min = j;
			}
		}
		if (i != min) {
			temp = data[i];
			data[i] = data[min];
			data[min] = temp;
		}
		printf("i = %d �϶� ���� ��� : ", i);
		print_array(data, size);
	}
	printf("�ּҰ� : %d", data[size - 1]);
			

}