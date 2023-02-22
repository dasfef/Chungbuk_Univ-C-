//#include <stdio.h>
//
//int get_max(int x, int y, int z)
//{
//	int max = x > y ? x : y;
//	max = z > max ? z : max;
//	return max;
//
//}
//int main(void)
//{
//	double max;
//	max = get_max(12.34, 0.5, 7.9);
//	printf("max = %f\n", max);
//}


//#include <stdio.h>
//
//double get_area(double radius)
//{
//	const double pi = 3.14;
//	return pi * radius * radius;
//}
//
//int main(void)
//{
//	int r;
//	for (r = 1; r <= 5; r++) {
//		printf("%f\n", get_area(r));
//	}
//}


// ===== 실습예제 1번 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//float add(float x, float y)
//{
//	double result;
//	result = (1.5 * x) + (3.0 * y);
//
//	return result;
//	
//}
//
//int main(void)
//{
//	float x, y;
//
//	printf("x 값 : ");
//	scanf("%f", &x);
//
//	printf("y 값 : ");
//	scanf("%f", &y);
//
//	printf("f(x,y) = %f", add(x, y));
//}


// ===== 실습예제 2번 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//float get_bigger(float a, float b)
//{
//	float result;
//
//	if (a > b)
//		return a;
//	if (a < b)
//		return b;
//}
//
//int main(void)
//{
//	float x, y;
//
//	printf("실수 x 입력 : ");
//	scanf("%f", &x);
//
//	printf("실수 y 입력 : ");
//	scanf("%f", &y);
//
//	printf("더 큰 수는 %f 입니다", get_bigger(x, y));
//
//}


// ===== 실습예제 3번 =====
//#include <stdio.h>
//
//void draw_stars(void)
//{
//	printf("============\n");
//	printf("Hello World!\n");
//	printf("============");
//}
//
//int main(void)
//{
//	draw_stars();
//}


// ===== 실습예제 4번 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int find(int x)
//{
//	int i;
//	int result = 0;
//
//	for (i = 1; i <= x; i++)
//	{
//		if (x % i == 0)
//			return result;
//	}
//
//}
//
//int main(void)
//{
//	int num, x;
//
//	printf("정수를 입력하세요 : ");
//	scanf("%d", &num);
//
//	x = find(num);
//	printf("%d의 약수 = ", num);
//	printf("%d", x);
//}


// ===== 실습예제 5번 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int find(int num)
//{
//	int i;
//	int sum = 0;
//
//	for (i = 1; i <= num; i++)
//	{
//		sum += (i * i * i);
//	}
//	return sum;
//}
//
//int main(void)
//{
//	int num;
//
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	printf("3제곱들의 합 : %d", find(num));
//
//}


// ===== 1번 연습문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int calculate(int x, int y)
//{
//	int i;
//	int result = 1;
//
//	for (i = 1; i <= y; i++)
//	{
//		result = (x * i);
//	}
//	return result;
//	
//}
//
//int main(void)
//{
//	int num, i;
//	int y = 20;
//
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	for (i = 1; i <= y; i++)
//	{
//		printf("%d", calculate(num, i));
//	}
//}


// ===== 2번 연습문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int calculate(int x, int y)
//{
//	int length, height;
//
//	length = 2 * x;
//	height = 2 * y;
//
//	return (length + height);
//}
//
//int main(void)
//{
//	int length, height;
//
//	printf("가로 길이 : ");
//	scanf("%d", &length);
//
//	printf("세로 길이 : ");
//	scanf("%d", &height);
//
//	printf("직사각형의 둘레 길이 : %d", calculate(length, height));
//}


// ===== 3번 연습문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int calculate(int x1, int x2, int y1, int y2)
//{
//	int length, height;
//	double sum;
//
//	length = (x2 - x1) * (x2 - x1);
//	height = (y2 - y1) * (y2 - y1);
//	sum = (double) sqrt(length + height);
//
//	return sum;
//}
//
//int main(void)
//{
//	int x1, x2, y1, y2;
//
//	printf("직선의 시작점 좌표 : ");
//	scanf("%d %d", &x1, &y1);
//
//	printf("끝점 좌표 : ");
//	scanf("%d %d", &x2, &y2);
//
//	printf("(%d, %d)~(%d, %d) 직선 길이 : %d", x1, y1, x2, y2, calculate(x1, x2, y1, y2));
//}


// ===== 4번 연습문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int calculate(float x, float y)
//{
//	int result;
//
//	result = y - (y * (x / 100));
//	return result;
//}
//
//int main(void)
//{
//	int discount, price;
//
//	while (1)
//	{
//		printf("할인율(%%) : ");
//		scanf("%d", &discount);
//
//		printf("제품 가격 : ");
//		scanf("%d", &price);
//
//		printf("할인가 : %d원\n\n", calculate(discount, price));
//	}
//}


// ===== 5번 연습문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int execute(int choice)
//{
//	switch (choice) {
//	case 1:
//		printf("파일 열기를 수행합니다\n");
//		break;
//
//	case 2:
//		printf("파일 저장을 수행합니다\n");
//		break;
//
//	case 3:
//		printf("인쇄를 수행합니다\n");
//		break;
//
//	case 0:
//		printf("프로그램 종료\n");
//		break;
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int choice;
//
//	while (1)
//	{
//		printf("[1.파일 열기 2.파일 저장 3.인쇄 0.종료] 선택 : ");
//		scanf("%d", &choice);
//
//		execute(choice);
//
//		if (choice == 0)
//			break;
//			
//
//	}
//	return 0;
//	
//}


// ===== 6번 문제 =====
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//unsigned int calculate(int x)
//{
//	int i;
//
//	for (i = 0; i == '\0'; i += 2)
//	{
//
//	}
//}

int main(void)
{
	int color;

	printf("RGB 색상 입력 : ");
	scanf("%x", &color);

	printf("%d",color);

}