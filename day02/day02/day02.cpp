//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	double x, y;
//	char op;
//	double result = 0;
//
//	printf("���� �Է� : ");
//	scanf("%lf %c %lf", &x, &op, &y);
//
//	if (op == '+')
//		result = x + y;
//
//	else if (op == '-')
//		result = x - y;
//
//	else if (op == '*')
//		result = x * y;
//
//	else if (op == '/')
//		result = x / y;
//
//	else {
//		printf("�߸��� �����Դϴ�\n");
//		return 1;
//	}
//
//	printf("%f %c %f = %f\n", x, op, y, result);
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int menu;
//
//	printf("1.���� ����\n");
//	printf("2.���� ����\n");
//	printf("3.���� ����\n");
//	printf("���� : ");
//
//	scanf("%d", &menu);
//
//	switch (menu) {
//	case 1:
//		printf("���� ����\n"); break;
//
//	case 2:
//		printf("���� ����\n");
//		break;
//
//	case 3 :
//		printf("���� ����\n");
//		break;
//
//	default :
//		printf("�߸��� �����Դϴ�");
//		break;
//	}
//}


// ===== ���������� ���� =====
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//int main(void)
//{
//	int coin;
//	srand(time(NULL));
//	coin = rand() % 10;
//
//	printf("���� ������ ����\n");
//	printf("���� : %d\n", coin);
//	
//	if (coin % 2 == 0)
//		printf("�ո� �Դϴ�\n");
//	else
//		printf("�޸� �Դϴ�\n");
//
//	return 0;
//}


// ===== 3���� ���� �� ���� ū �� ã�� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{	
//	int a, b, c;
//	
//	printf("3���� ���� �Է� : \n");
//	scanf("%d %d %d", &a, &b, &c);
//	
//	switch (a) {
//
//	}
//}


// ===== �� ������ ���ϱ� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int cup;
//
//	printf("���� ������ �Է� : \n");
//	scanf("%d", &cup);
//
//	if (cup < 100)
//		printf("SMALL SIZE\n");
//
//	else if (cup >= 100 && cup < 200)
//		printf("MEDIUM SIZE\n");
//
//	else
//		printf("LARGE SIZE");
//}


// ===== ���� �־����� �� ���� �ϼ� ���ϱ� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int moon;
//
//	printf("�ϼ��� �˰� ���� ���� �Է��ϼ��� : ");
//	scanf("%d", &moon);
//
//	switch (moon) {
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		printf("%d���� �ϼ��� 31���Դϴ�", moon);
//		break;
//	case 2:
//		printf("%d���� �ϼ��� 28���Դϴ�", moon);
//		break;
//	case 4: case 6: case 9: case 11:
//		printf("%d���� �ϼ��� 30���Դϴ�", moon);
//		break;
//	}
//}


// ===== ���� ���� �� ���� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	int random, user;
//
//	srand(time(NULL));
//	random = rand() % 3;
//	++random;
//
//	printf("1.(����) 2.(����) 3.(��) : ");
//	scanf("%d", &user);
//
//	printf("��ǻ�� : %d", random);
//	
//
//	switch (random) {
//
//	}
//}

// ===== 2�� ���� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float score, users, result;
//
//	printf("����� �Է��ϼ��� : ");
//	scanf("%d", &score);
//
//	printf("��ü �ο� ���� �Է��ϼ��� : ");
//	scanf("%d", &users);
//
//	result = (score / users) * (float)100;
//
//	if (result <= 10)
//		printf("���� : A");
//	else if (result <= 30 && result > 10)
//		printf("���� : B");
//	else if (result <= 60 && result > 30)
//		printf("���� : C");
//	else if (result <= 90 && result > 60)
//		printf("���� : D");
//	else
//		printf("���� : F");
//}


// ===== 3�� ���� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int x, y;
//
//	printf("x, y�� ��ǥ���� �Է��ϼ��� : ");
//	scanf("%d %d", &x, &y);
//
//	if (x < 0 && y > 0)
//		printf("2��и�");
//
//	else if (x > 0 && y > 0)
//		printf("1��и�");
//
//	else if (x < 0 && y < 0)
//		printf("3��и�");
//
//	else
//		printf("4��и�");
//}


// ===== 4�� ���� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int year;
//
//	printf("�⵵�� �Է��ϼ��� : ");
//	scanf("%d", &year);
//
//	if (year % 100 == 0 && year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//		printf("%d���� �����Դϴ�", year);
//	else
//		printf("%d���� ������ �ƴմϴ�", year);
//}


// ===== 5�� ���� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float value, result;
//	char ch_value;
//
//	printf("�µ��� �Է��ϼ��� : ");
//	scanf("%f %c", &value, &ch_value);
//
//	switch (ch_value) {
//	case 'C' :
//		result = (value * (9.0 / 5.0)) + 32.0;
//		printf("%2.2f C == %2.2f F", value, result);
//		break;
//	case 'F' :
//		result = (value - 32.0) * (5.0 / 9.0);
//		printf("%2.2f F == %2.2f C", value, result);
//		break;
//
//	}
//
//	/*if (ch_value == 'C')
//		result = (value * (9.0 / 5.0)) + 32.0;
//		printf("%2.2f C == %2.2f F", value, result);
//
//	if (ch_value == 'F')
//		result = (value - 32.0) * (5.0 / 9.0);
//		printf("%2.2f F == %2.2f C", value, result);*/
//
//}


// ===== 6�� ���� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int power, usage, price, base, result;
//
//	printf("�� ��뷮(kwh) : ");
//	scanf("%d", &usage);
//
//	if (usage <= 300) {
//		base = 1000;
//		price = 100;
//		result = (usage * price) + base;
//
//		printf("������ �հ� : %d\n", result);
//		printf("- �⺻��� : %d\n", base);
//		printf("- ���·���� : %d", (usage * price));
//	}
//	if (usage > 300) {
//		power = 300 * 100;								// 300��ŭ�� ���
//		base = 5000;
//		price = 200;
//		result = ((usage-300) * price) + base + power;
//
//		printf("������ �հ� : %d\n", result);
//		printf("- �⺻��� : %d\n", base);
//		printf("- ���·���� : %d", (result - base));
//	}
//	return 0;
//	
//}


// ===== 7�� ���� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int a, b;
//	char sense;
//
//	printf("��Ʈ ����� �Է� : ");
//	scanf("%X %c %X", &a, &sense, &b);
//
//	switch (sense) {
//	case '&' :
//		printf("%X & %X = %X", a, b, a & b);
//		break;
//
//	case '|' :
//		printf("%X | %X = %X", a, b, a | b);
//		break;
//
//	case '^' :
//		printf("%X ^ %X = %X", a, b, a ^ b);
//		break;
//	}
//	
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int num = 0;
//	int sum = 0;
//
//	printf("���� 5�� �Է� : ");
//	
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &num);
//		sum += num;
//	}
//	printf("�հ� : %d", sum);
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int width, height;
//	char ch;
//	int i, j;
//
//	printf("���簢���� ���� ���� : ");
//	scanf("%d %d", &width, &height);
//	printf("���簢���� �׸� ���� : ");
//	scanf(" %c" , &ch);
//
//	for (i = 0; i < height; i++) {
//		for (j = 0; j < width; j++)
//			printf("%c", ch);
//		printf("\n");
//	}
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;
//	int num;
//
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	while (i <= num) {
//		printf("%d ", i);
//		i += 2;
//	}
//	printf("\n");
//}


// �ݺ� ���� ����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//
//	double x, y;
//	char op;
//	double result = 0;
//	char yesno = 'Y';
//
//	while (yesno == 'Y' || yesno == 'y') {
//		printf("���� : ");
//		scanf("%lf %c %lf", &x, &op, &y);
//
//		if (op == '+')
//			result = x + y;
//
//		else if (op == '-')
//			result = x - y;
//		else if (op == '*')
//			result = x * y;
//		else if (op == '/')
//			result = x / y;
//		else {
//			printf("�߸��� �����Դϴ�");
//			return 1;
//
//		}
//		printf("%f %c %f = %f\n", x, op, y, result);
//
//		printf("��� �ϽǷ���?");
//		scanf(" %c", &yesno);
//
//	}
//
//	
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int x;
//
//	printf("����? ");
//	scanf("%d", &x);
//
//	do {
//		printf("%d ", x);
//		x /= 2;
//
//	} while (x > 0);
//	printf("\n");
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main(void)
//{
//	int num = 0;
//	int sum = 0;
//
//	while (1) {
//		printf("����?(���� �Է½� ����) : ");
//		scanf("%d", &num);
//
//		if (num < 0)
//			break;
//
//		if (num % 2 == 0)
//			continue;
//		sum += num;
//	}
//	printf("Ȧ���� �հ� : %d\n", sum);
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//
//	for (i = 10; i > 0; i--) {
//		if (i % 3 == 0)
//			goto quit;
//		printf("%d ", i);
//
//
//	}
//quit :
//	printf("\n");
//}


// ===== �ǽ� 1�� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int sum = 0;
//
//	for (i = 1; i < 12346; i++) {
//		sum += i;
//		
//	}
//	printf("1 ~ 12345 ������ �� : %d", sum);
//}


// ===== �ǽ� 2�� =====
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int sum = 0;
//
//	for (i = 1; i < 101; i++) {
//		if (i % 3 == 0)
//			sum += i;
//	}
//	printf("1 ~ 100 ������ 3�� ����� �� : %d", sum);
//}


// ===== �ǽ� 3�� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int start, stop, increase;
//	int sum = 0;
//
//	printf("���۰�, ����, �������� �Է��ϼ��� : ");
//	scanf("%d %d %d", &start, &stop, &increase);
//
//	for (i = start; i < stop; i += increase)
//		sum += i;
//	printf("%d���� %d���� %d�� ������ ���� �� : %d", start, stop, increase, sum);
//
//}


// ===== �ǽ� 4�� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int start, stop, inc, i;
//	int sum = 0;
//
//	printf("�հ��� ���۰� : ");
//	scanf("%d", &start);
//
//	printf("�հ��� ���� : ");
//	scanf("%d", &stop);
//
//	printf("���ϴ� ��� : ");
//	scanf("%d", &inc);
//
//	for (i = start; i <= stop; i++) {
//		if (i % inc == 0)
//			sum += i;
//	}
//	printf("%d���� %d���� %d����� �հ� : %d", start, stop, inc, sum);
//}


// ===== �ǽ� 5�� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	int random, user;
//	srand(time(NULL));
//	random = rand() % 100;
//
//	while (1) {
//		printf("������ ���纸���� : ");
//		scanf("%d", &user);
//
//		if (random > user)
//			printf("���� �� ������\n");
//		else if (random < user)
//			printf("���� �� ������\n");
//		else {
//			printf("�����Դϴ� :)");
//			break;
//		}
//	}
//
//
//}


// ===== �ǽ� 6�� =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int user, i;
//	int sum = 1;
//
//	printf("������ �Է��ϼ��� : ");
//	scanf("%d", &user);
//
//	for (i = 1; i <= user; i++) {
//		sum *= i;
//	}
//	printf("���� %d�� ���丮���� : %d�Դϴ�", user, sum);
//}


// ===== �ǽ� 7�� =====
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int thousand, hundered, ten, one, user, i;

	printf("���ڴ�� �� ��� : ");

	while (1) {
		scanf("%1d", &user);
		for (i = 1; i < user; i++) {
			printf("*");
		}
		printf("\n");
	}
	
}