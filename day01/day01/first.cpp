/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	float height;
	float weight;

	printf("����, Ű, �����Ը� �Է��ϼ��� : ");
	scanf("%d %f %f", &age, &height, &weight);

	printf("���� : %5d\n", age);
	printf("Ű : %5.1f\n", height);
	printf("������ : %5.1f\n", weight);
}*/


/*
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


int main(void)
{
	char ch, prev_ch, next_ch;

	printf("����? ");
	scanf("%c", &ch);

	prev_ch = ch - 1;
	next_ch = ch + 1;

	printf("prev_ch = %c, %d, %#02x\n", prev_ch, prev_ch, prev_ch);
	printf("ch      = %c, %d, %#02x\n", ch, ch, ch);
	printf("next_ch = %c, %d, %#02x", next_ch, next_ch, next_ch);
}*/


/*
#include <stdio.h>

int main(void)
{
	printf("sizeof(\'x\') = %d\n", sizeof('x'));
}
*/

/*
#include <stdio.h>

int main(void)
{
	int stock1 = 10, stock2 = 10;
	int current;

	current = --stock1;
	printf("current = %d, stock1 = %d\n", current, stock1);

	current = stock2--;
	printf("current = %d, stock2 = %d", current, stock2);
}*/

/*
#include <stdio.h>

int main()
{
	int w = 10, x = 20, y = 10, z = 7;
	int result = 0;

	result += w;
	printf("result = %d\n", result);

	result *= x;
	printf("result = %d\n", result);

	result /= y;
	printf("result = %d\n", result);

	result %= z;
	printf("result = %d\n", result);

	result *= 2 + 1;
	printf("result = %d", result);
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int usage;

	printf("usage�Է�: ");
	scanf("%d", &usage);

	if (usage >= 1000 && usage <= 2000)
		printf("usage in range\n");

	if (usage < 1000 || usage > 2000)
		printf("out or range\n");
}*/

/*
#include <stdio.h>

int main(void)
{
	unsigned int x = 0xab;
	unsigned int z;

	printf("x = %#08x, %d\n", x, x);

	z = x >> 2;
	printf("z = %#08x, %d\n", z, z);

	z = x << 2;
	printf("z = %#08x, %d\n", z, z);
}*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	int abs, min, max;

	printf("Input two numbers : ");
	scanf("%d %d", &x, &y);

	abs = x > 0 ? x : -x;
	printf("absolute value of x = %d\n", abs);

	abs = y > 0 ? y : -y;
	printf("absolute value of y = %d\n", abs);

	min = x < y ? x : y;
	printf("minimum value of x, y = %d\n", min);

	max = x > y ? x : y;
	printf("maximum value of x, y = %d", max);
}*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	double ave;

	printf("Input two numbers :");
	scanf("%d %d", &x, &y);

	ave = (x + y) / 2;
	printf("average = %f\n", ave);

	ave = (double)(x + y) / 2;
	printf("average = %f", ave);
}*/

/*#include <stdio.h>

int main(void)
{
	int x = 5, y = 1, z = 15;
	int result;

	result = ++x * 2;
	printf("result = %d\n", result);

	result = x + 1 > 0;
	printf("result = %d\n", result);

	result = x << y;
	printf("result = %d\n", result);

	result = (x + y) / 2;
	printf("result = %d\n", result);

	result = x = y;
	printf("result = %d", y);
}*/


// ===== 2������(���̵� : ��) =====
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int price = 190;
	int result, usage;

	printf("�� ��뷮(kwh) :");
	scanf("%d", &usage);

	result = usage * price;
	printf("���� ��� : %d", result);
}
*/

// ===== 3�� ����(���̵� : ��) =====
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int price, usage, result;

	printf("�⺻ ��� : ");
	scanf("%d", &price);

	printf("�� ��뷮(kwh) : ");
	scanf("%d", &usage);

	result = price * usage;

	printf("���� ��� : %d", result);
}
*/


// ===== 8�� ����(���̵� : ��) =====
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int playTime, hour, min, sec;

	printf("��� �ð�(��) : ");
	scanf("%d", &playTime);

	hour = playTime / 3600;
	min = (playTime % 3600) / 60;
	sec = playTime % 60;

	printf("��� �ð��� %d�ð� %d�� %d�� �Դϴ�", hour, min, sec);
}
*/


// ===== 5�� ����(���̵� : �ڡ�) =====
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float hwaC, result;

	printf("ȭ���µ� : ");
	scanf("%f", &hwaC);

	result = ((hwaC - 32) * 5) / 9;
	printf("%2.0f F = %2.2f C", hwaC, result);
}
*/


// ===== 7�� ����(���̵� : �ڡ�) =====
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	float result;

	printf("���(g) �Է� : ");
	scanf("%d", &x);

	printf("����(g) �Է� : ");
	scanf("%d", &y);

	result = (y / (float)(x + y)) * 100;
	printf("�� : %2.2f %%", result);
}
*/

// ===== 11�� ����(���̵� : �ڡڡ�) =====
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int red, green, blue;

	red = 256;
	green = 256;
	blue = 256;

	printf("red�� �Է� : ");
	scanf("%d", &red);

	printf("green�� �Է� : ");
	scanf("%d", &green);

	printf("blue�� �Է� : ");
	scanf("%d", &blue);

	printf("%0x%0x%0x", red, green, blue);

}