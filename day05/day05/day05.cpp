//#include <stdio.h>
//
//int main(void)
//{
//	int* pi;
//	double* pd;
//	char* pc;
//
//	printf("sizeof(pi) = %d\n", sizeof(pi));
//	printf("sizeof(pd) = %d\n", sizeof(pd));
//	printf("sizeof(pc) = %d\n", sizeof(pc));
//
//	printf("sizeof(int*) = %d\n", sizeof(int*));
//	printf("sizeof(double*) = %d\n", sizeof(double*));
//	printf("sizeof(char*) = %d\n", sizeof(char*));
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	int* p = &a;
//	printf(" a = %d\n", a);
//	printf("&a = %p\n", &a);
//	printf(" p = %p\n", p);
//	printf("*p = %d\n", *p);
//	printf("&p = %p\n", &p);
//
//	*p = 20;
//	printf("*p = %d\n", *p);
//}


//#include <stdio.h>
//
//void test1(int x)
//{
//	x = 20;
//}
//
//void test2(int* p)
//{
//	*p = 20;
//}
//
//int main(void)
//{
//	int x = 10;
//	test1(x);
//	printf("test1 ȣ�� �� x = %d\n", x);
//
//	test2(&x);
//	printf("test2 ȣ�� �� x = %d\n", x);
//}

/*
#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];
	int i;

	for (i = 0; i < 5; i++, p++)
	{
		printf("p = %p ", p);
		printf("*p = %d\n", *p);
	}
}
*/

/*
#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr;
	int i;

	for (i = 0; i < 5; i++)
		printf("p[%d] = %d\n", i, p[i]);
}
*/



//#include <stdio.h>
//
//void swap(int* px, int* py);
//
//int main(void)
//{
//	int a = 1, b = 2;
//	printf("a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//}
//
//void swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}


//#include <stdio.h>
//
//void get_sum_product(int x, int y, int* psum, int* pproduct);
//
//int main(void)
//{
//	int sum, product;
//	get_sum_product(123, 456, &sum, &product);
//	printf("sum = %d, product = %d\n", sum, product);
//}
//
//void get_sum_product(int x, int y, int* psum, int* pproduct)
//{
//	*psum = x + y;
//	*pproduct = x * y;
//}


//#include <stdio.h>
//#define SIZE 5
//
//void copy_array(const int* source, int* target, int size);
//void print_array(const int* arr, int size);
//
//int main(void)
//{
//	int x[SIZE] = { 10, 20, 30, 40, 50 };
//	int y[SIZE] = { 0 };
//
//	printf("x = ");
//	print_array(x, SIZE);
//	copy_array(x, y, SIZE);
//	printf("y = ");
//	print_array(y, SIZE);
//}
//
//void copy_array(const int* source, int* target, int size)
//{
//	int i;
//	for (i = 0; i < SIZE; i++)
//		target[i] = source[i];
//}
//
//void print_array(const int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}



// ===== 1�� �������� =====
//#define _CRT_SECURE_NO_WARNINGS
//#define SIZE 10
//#include <stdio.h>
//int main(void)
//{
//	int i;
//	float data[SIZE] = {};
//	float* p = &data[0];
//
//	printf("�Ǽ� �Է�(10��) : ");
//	for (i = 0; i < SIZE; i++)
//		scanf("%f", &data[i]);
//
//	for (i = 0; i < SIZE; i++, p++)
//		printf("%1.2f ", *p);
//}


// ===== 2�� �������� =====
//#include <stdio.h>
//#define SIZE 3
//int main(void)
//{
//	int i;
//	double x[SIZE] = {};
//
//	for (i = 0; i < SIZE; i++)
//		printf("x[%d]�� �ּ� : %8p\n", i, &x[i]);
//}


// ===== 3�� �������� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define SIZE 10
//int main(void)
//{
//	int i, num, result;
//	int data[SIZE] = {12, 54, 23, 43, 87, 31, 67, 92, 79, 7};
//	int* p = &data[0];
//
//	for (i = 0; i < SIZE; i++)
//		printf("%d ", data[i]);
//	printf("\n");
//
//	printf("����� ���� �� �Է� : ");
//	scanf("%d", &num);
//
//	for (i = 0; i < SIZE; i++, p++) {
//		*p += num;
//		printf("%d ", *p);
//	}
//}


// ===== 4�� �������� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define SIZE 5
//
//int main(void)
//{
//	int i;
//	float sum = 0;
//	float data[SIZE] = {};
//	float* p = &data[0];
//
//	printf("�Ǽ� 5���� �Է��ϼ��� : ");
//
//	for (i = 0; i < SIZE; i++)
//		scanf("%f", &data[i]);
//
//	for (i = 0; i < SIZE; i++, p++)
//		sum += *p;
//	printf("�հ� : %f", sum);
//
//}



// ===== 5�� �������� =====
//#include <stdio.h>
//#define SIZE 10
//
//int get_min_max(int data[], int* min, int* max);
//
//int main(void)
//{
//	int min, max, i;
//	int data[SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
//
//	printf("배열 : ");
//	for (i = 0; i < SIZE; i++) {
//		printf("%d ", data[i]);
//	}
//	printf("\n");
//	get_min_max(data, &min, &max);
//	printf("최소값 : %d\n", min);
//	printf("최대값 : %d", max);
//}
//
//int get_min_max(int data[], int *min, int *max)
//{
//	int i, j, temp, index_min, index_max;
//	for (i = 0; i < SIZE-1; i++) {
//		//index_min = i;
//		for (j = i + 1; j < SIZE; j++) {
//			if (data[i] > data[j])
//				index_min = j;
//		}
//		if (i != index_min) {
//			temp = data[i];
//			data[i] = data[index_min];
//			data[index_min] = temp;
//		}
//		
//	}*min = data[0];
//	for (i = 0; i < SIZE-1; i++) {
//		//index_max = i;
//		for (j = i + 1; j < SIZE; j++) {
//			if (data[i] < data[j]) {
//				index_max = j;
//			}
//		}
//		if (index_max != i) {
//			temp = data[i];
//			data[i] = data[index_max];
//			data[index_max] = temp;
//		}
//		
//	}*max = data[0];
//	return 0;
//}


// ===== 6�� �������� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int x, y, round, paint;
//	int* px = &x;
//	int* py = &y;
//
//	printf("���� ���� : ");
//	scanf("%d", &x);
//
//	printf("���� ���� : ");
//	scanf("%d", &y);
//
//	round = (*px * 2) + (*py * 2);
//	paint = (*px * *py);
//	printf("�ѷ� : %d\n", round);
//	printf("���� : %d", paint);
//}


 // ===== 7�� �������� =====
//#define _CRT_SECURE_NO_WARNINGS
//#define SIZE 5
//#include <stdio.h>
//
//int swap_array(int a[], int b[]);
//int print_array(int a[], int b[]);
//int main(void)
//{
//	int a[SIZE] = {1, 3, 5, 7, 9};
//	int b[SIZE] = {0, 2, 4, 6, 8};
//	int* pa = &a[0];
//	int* pb = &b[0];
//	int i;
//
//	printf("a 배열 : ");
//	for (i = 0; i < SIZE; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	printf("b 배열 : ");
//	for (i = 0; i < SIZE; i++) {
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	printf("<< swap_array 호출 후 >>\n");
//	swap_array(&a[0], &b[0]);
//	print_array(a, b);
//
//}
//
//int swap_array(int a[], int b[])
//{
//	int i, j, index_array, temp;
//	for (i = 0; i < SIZE - 1; i++) {
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	return 1;
//}
//
//int print_array(int a[], int b[])
//{
//	int i;
//	printf("a 배열 : ");
//	for (i = 0; i < SIZE; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//
//	printf("b 배열 : ");
//	for (i = 0; i < SIZE; i++)
//		printf("%d ", b[i]);
//	return 0;
//}



// ===== 8번 연습문제 =====
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define SIZE 10
//
//int createRandom(int x[]);
//int print_array(int x[]);
//
//int main(void)
//{
//	int random[SIZE] = {};
//	int* p = &random[0];
//	srand(time(NULL));
//
//	createRandom(p);
//	print_array(random);
//
//}
//
//int createRandom(int x[])
//{
//	int i;
//	for (i = 0; i < SIZE; i++) {
//		x[i] = rand() % 100;
//	}
//	return 1;
//}
//
//int print_array(int random[])
//{
//	int i;
//	for (i = 0; i < SIZE; i++)
//		printf("%d ", random[i]);
//	return 0;
//}


// ===== 9번 연습문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#define ROW 3
//#define COL 5
//#include <stdio.h>
//
//int create_array(int (*arr)[COL], int num);
//int print_array(int arr[][COL]);
//
//int main(void)
//{
//	int num;
//	int arr[ROW][COL] = {};
//	printf("배열의 원소에 저장할 값 : ");
//	scanf("%d", &num);
//	
//	create_array(&arr[0], num);
//	print_array(arr);
//}
//
//int create_array(int (*arr)[COL], int num)
//{
//	int i, j;
//	for (i = 0; i < ROW; i++) {
//		for (j = 0; j < COL; j++) {
//			arr[i][j] = num;
//		}
//	}
//	return 1;
//}
//
//int print_array(int (*arr)[COL])
//{
//	int i, j;
//	for (i = 0; i < ROW; i++) {
//		for (j = 0; j < COL; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// ===== 10번 연습문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#define SIZE 10
//#include <stdio.h>
//
//int calculate(int* x, int start, int num);
//int print_array(int arr[]);
//
//int main(void)
//{
//	int start, num;
//	int arr[SIZE] = {};
//
//	printf("첫 번째 항 : ");
//	scanf("%d", &start);
//	
//	printf("공차 : ");
//	scanf("%d", &num);
//
//	calculate(&arr[0], start, num);
//	print_array(arr);
//}
//
//int print_array(int arr[])
//{
//	int i;
//	for (i = 0; i < SIZE; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//
//int calculate(int* x, int start, int num)
//{
//	int i;
//	x[0] = start;
//	for (i = 0; i < SIZE; i++) {
//		x[i + 1] = x[i] + num;
//	}
//	return 1;
//}


// ===== 11번 연습문제 =====
//#include <stdio.h>
//#define SIZE 10
//
//int print_array(int *arr, int size);
//int swap_array(int *arr, int size);
//
//int main(void)
//{
//	int arr[SIZE] = { 92, 34, 76, 32, 15, 28, 41, 55, 89, 62 };
//
//	print_array(&arr[0], SIZE);
//	swap_array(&arr[0], SIZE);
//
//	print_array(arr, SIZE);
//}
//
//int swap_array(int *arr, int size)
//{
//	int i, j, temp, index;
//	for (i = 0; i < size - 1; i++) {
//		index = i;
//		for (j = i + 1; j < size; j++) {
//			if (arr[index] > arr[j])
//				index = j;
//
//		}
//		if (i != index) {
//			temp = arr[i];
//			arr[i] = arr[index];
//			arr[index] = temp;
//		}
//	}
//	return 0;
//}
//
//int print_array(int *arr, int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	return 1;
//}



// ===== 12번 연습문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define SIZE 10
//
//int print_array(int data[]);
//int key_array(int data[],int *index, int num);
//int main(void)
//{
//	int data[SIZE] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
//	int index[SIZE] = {};
//	int i, num, cnt;
//	print_array(data);
//	printf("찾을 값 : ");
//	scanf("%d", &num);
//	
//	cnt = key_array(&data[0], index, num);
//	
//	printf("찾은 항목은 모두 %d개 입니다\n", cnt);
//	printf("찾은 항목의 인덱스 : ");
//
//	if (cnt > 0) {
//		for (i = 0; i < cnt; i++) {
//			printf("%d ", index[i]);
//		}
//	}
//	else
//		printf("찾는 값이 없습니다");
//}
//
//int print_array(int data[])
//{
//	int i;
//	for (i = 0; i < SIZE; i++) {
//		printf("%d ", data[i]);
//	}
//	printf("\n");
//	return 1;
//}
//
//int key_array(int data[], int *index, int num)
//{
//	int i;
//	int cnt = 0;
//	for (i = 0; i < SIZE; i++){
//		if (data[i] == num) {
//			index[cnt] = i;
//			cnt += 1;
//		}
//	}
//
//	return cnt;
//}


//#define SIZE 5
//#include <stdio.h>

//int main(void)
//{
//	int data[5] = { 1, 2, 3, 4, 5 };
//	int* p = &data[0];
//
//	printf("%p\n", *p);
//	printf("%p\n", &data);
//	printf("%d\n", *p);
//	printf("%d", &data);
//}


//int main(void)
//{
//	int data[5] = { 1, 3, 5, 7, 9 };
//	int* p = &data[0];
//
//	printf("%d\n", *p + 1);
//	printf("%d\n", *(p + 1));
//	printf("%d\n", (*p + 1) + 2);
//	printf("%d", *(p)+1);
//}


//int swap(int *arr)
//{
//	int temp;
//	temp = arr[0];
//	arr[0] = arr[1];
//	arr[1] = temp;
//
//	return 1;
//}
//
//int main(void)
//{
//	int i;
//	int data[SIZE] = { 1, 3, 5, 7, 9 };
//	swap(&data[0]);
//
//	for (i = 0; i < SIZE; i++)
//		printf("%d ", data[i]);
//}

