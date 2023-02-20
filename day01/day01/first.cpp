/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	float height;
	float weight;

	printf("나이, 키, 몸무게를 입력하세요 : ");
	scanf("%d %f %f", &age, &height, &weight);

	printf("나이 : %5d\n", age);
	printf("키 : %5.1f\n", height);
	printf("몸무게 : %5.1f\n", weight);
}*/


/*
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


int main(void)
{
	char ch, prev_ch, next_ch;

	printf("문자? ");
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

	printf("usage입력: ");
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


// ===== 2번문제(난이도 : ★) =====
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int price = 190;
	int result, usage;

	printf("월 사용량(kwh) :");
	scanf("%d", &usage);

	result = usage * price;
	printf("전기 요금 : %d", result);
}
*/

// ===== 3번 문제(난이도 : ★) =====
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int price, usage, result;

	printf("기본 요금 : ");
	scanf("%d", &price);

	printf("월 사용량(kwh) : ");
	scanf("%d", &usage);

	result = price * usage;

	printf("전기 요금 : %d", result);
}
*/


// ===== 8번 문제(난이도 : ★) =====
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int playTime, hour, min, sec;

	printf("재생 시간(초) : ");
	scanf("%d", &playTime);

	hour = playTime / 3600;
	min = (playTime % 3600) / 60;
	sec = playTime % 60;

	printf("재생 시간은 %d시간 %d분 %d초 입니다", hour, min, sec);
}
*/


// ===== 5번 문제(난이도 : ★★) =====
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float hwaC, result;

	printf("화씨온도 : ");
	scanf("%f", &hwaC);

	result = ((hwaC - 32) * 5) / 9;
	printf("%2.0f F = %2.2f C", hwaC, result);
}
*/


// ===== 7번 문제(난이도 : ★★) =====
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	float result;

	printf("용매(g) 입력 : ");
	scanf("%d", &x);

	printf("용질(g) 입력 : ");
	scanf("%d", &y);

	result = (y / (float)(x + y)) * 100;
	printf("농도 : %2.2f %%", result);
}
*/

// ===== 11번 문제(난이도 : ★★★) =====
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int red, green, blue;

	red = 256;
	green = 256;
	blue = 256;

	printf("red값 입력 : ");
	scanf("%d", &red);

	printf("green값 입력 : ");
	scanf("%d", &green);

	printf("blue값 입력 : ");
	scanf("%d", &blue);

	printf("%0x%0x%0x", red, green, blue);

}