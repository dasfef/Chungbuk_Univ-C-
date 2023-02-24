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
//	printf("test1 호출 후 x = %d\n", x);
//
//	test2(&x);
//	printf("test2 호출 후 x = %d\n", x);
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



// ===== 1번 연습문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#define SIZE 10
//#include <stdio.h>
//int main(void)
//{
//	int i;
//	float data[SIZE] = {};
//	float* p = &data[0];
//
//	printf("실수 입력(10개) : ");
//	for (i = 0; i < SIZE; i++)
//		scanf("%f", &data[i]);
//
//	for (i = 0; i < SIZE; i++, p++)
//		printf("%1.2f ", *p);
//}


// ===== 2번 연습문제 =====
//#include <stdio.h>
//#define SIZE 3
//int main(void)
//{
//	int i;
//	double x[SIZE] = {};
//
//	for (i = 0; i < SIZE; i++)
//		printf("x[%d]의 주소 : %8p\n", i, &x[i]);
//}


// ===== 3번 연습문제 =====
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
//	printf("계산할 정수 값 입력 : ");
//	scanf("%d", &num);
//
//	for (i = 0; i < SIZE; i++, p++) {
//		*p += num;
//		printf("%d ", *p);
//	}
//}


// ===== 4번 연습문제 =====
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
//	printf("실수 5개를 입력하세요 : ");
//
//	for (i = 0; i < SIZE; i++)
//		scanf("%f", &data[i]);
//
//	for (i = 0; i < SIZE; i++, p++)
//		sum += *p;
//	printf("합계 : %f", sum);
//
//}



// ===== 5번 연습문제 =====
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
//		index_min = i;
//		for (j = i + 1; j < SIZE; j++) {
//			if (data[index_min] > data[j])
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
//		index_max = i;
//		for (j = i + 1; j < SIZE; j++) {
//			if (data[index_max] < data[j]) {
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


// ===== 6번 연습문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int x, y, round, paint;
//	int* px = &x;
//	int* py = &y;
//
//	printf("가로 길이 : ");
//	scanf("%d", &x);
//
//	printf("세로 길이 : ");
//	scanf("%d", &y);
//
//	round = (*px * 2) + (*py * 2);
//	paint = (*px * *py);
//	printf("둘레 : %d\n", round);
//	printf("넓이 : %d", paint);
//}


// ===== 7번 연습문제 =====
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>

int swap_array(int a[], int b[]);
int main(void)
{
	int a[SIZE] = {};
	int b[SIZE] = {};
	int i;

	printf("a 배열 : ");
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &a[i]);
	}

	printf("b 배열 : ");
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &b[i]);
	}
	swap_array(a, b);

}

int swap_array(int a[], int b[])
{
	int i;
	for (i = 0; i < SIZE; i++) {

	}
}