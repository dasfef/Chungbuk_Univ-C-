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


// ===== �ǽ����� 1�� =====
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
//	printf("x �� : ");
//	scanf("%f", &x);
//
//	printf("y �� : ");
//	scanf("%f", &y);
//
//	printf("f(x,y) = %f", add(x, y));
//}


// ===== �ǽ����� 2�� =====
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
//	printf("�Ǽ� x �Է� : ");
//	scanf("%f", &x);
//
//	printf("�Ǽ� y �Է� : ");
//	scanf("%f", &y);
//
//	printf("�� ū ���� %f �Դϴ�", get_bigger(x, y));
//
//}


// ===== �ǽ����� 3�� =====
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


// ===== �ǽ����� 4�� =====
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
//	printf("������ �Է��ϼ��� : ");
//	scanf("%d", &num);
//
//	x = find(num);
//	printf("%d�� ��� = ", num);
//	printf("%d", x);
//}


// ===== �ǽ����� 5�� =====
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
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	printf("3�������� �� : %d", find(num));
//
//}


// ===== 1�� �������� =====
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
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	for (i = 1; i <= y; i++)
//	{
//		printf("%d", calculate(num, i));
//	}
//}


// ===== 2�� �������� =====
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
//	printf("���� ���� : ");
//	scanf("%d", &length);
//
//	printf("���� ���� : ");
//	scanf("%d", &height);
//
//	printf("���簢���� �ѷ� ���� : %d", calculate(length, height));
//}


// ===== 3�� �������� =====
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
//	printf("������ ������ ��ǥ : ");
//	scanf("%d %d", &x1, &y1);
//
//	printf("���� ��ǥ : ");
//	scanf("%d %d", &x2, &y2);
//
//	printf("(%d, %d)~(%d, %d) ���� ���� : %d", x1, y1, x2, y2, calculate(x1, x2, y1, y2));
//}


// ===== 4�� �������� =====
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
//		printf("������(%%) : ");
//		scanf("%d", &discount);
//
//		printf("��ǰ ���� : ");
//		scanf("%d", &price);
//
//		printf("���ΰ� : %d��\n\n", calculate(discount, price));
//	}
//}


// ===== 5�� �������� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int execute(int choice)
//{
//	switch (choice) {
//	case 1:
//		printf("���� ���⸦ �����մϴ�\n");
//		break;
//
//	case 2:
//		printf("���� ������ �����մϴ�\n");
//		break;
//
//	case 3:
//		printf("�μ⸦ �����մϴ�\n");
//		break;
//
//	case 0:
//		printf("���α׷� ����\n");
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
//		printf("[1.���� ���� 2.���� ���� 3.�μ� 0.����] ���� : ");
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


// ===== 6�� ���� =====
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

	printf("RGB ���� �Է� : ");
	scanf("%x", &color);

	printf("%d",color);

}