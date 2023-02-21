//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	double x, y;
//	char op;
//	double result = 0;
//
//	printf("수식 입력 : ");
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
//		printf("잘못된 수식입니다\n");
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
//	printf("1.파일 열기\n");
//	printf("2.파일 편집\n");
//	printf("3.파일 저장\n");
//	printf("선택 : ");
//
//	scanf("%d", &menu);
//
//	switch (menu) {
//	case 1:
//		printf("파일 열기\n"); break;
//
//	case 2:
//		printf("파일 편집\n");
//		break;
//
//	case 3 :
//		printf("파일 저장\n");
//		break;
//
//	default :
//		printf("잘못된 선택입니다");
//		break;
//	}
//}


// ===== 동전던지기 게임 =====
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
//	printf("동전 던지기 게임\n");
//	printf("난수 : %d\n", coin);
//	
//	if (coin % 2 == 0)
//		printf("앞면 입니다\n");
//	else
//		printf("뒷면 입니다\n");
//
//	return 0;
//}


// ===== 3개의 정수 중 가장 큰 값 찾기 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{	
//	int a, b, c;
//	
//	printf("3개의 정수 입력 : \n");
//	scanf("%d %d %d", &a, &b, &c);
//	
//	switch (a) {
//
//	}
//}


// ===== 컵 사이즈 구하기 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int cup;
//
//	printf("컵의 사이즈 입력 : \n");
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


// ===== 달이 주어지면 그 달의 일수 구하기 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int moon;
//
//	printf("일수를 알고 싶은 달을 입력하세요 : ");
//	scanf("%d", &moon);
//
//	switch (moon) {
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		printf("%d월의 일수는 31일입니다", moon);
//		break;
//	case 2:
//		printf("%d월의 일수는 28일입니다", moon);
//		break;
//	case 4: case 6: case 9: case 11:
//		printf("%d월의 일수는 30일입니다", moon);
//		break;
//	}
//}


// ===== 가위 바위 보 게임 =====
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
//	printf("1.(가위) 2.(바위) 3.(보) : ");
//	scanf("%d", &user);
//
//	printf("컴퓨터 : %d", random);
//	
//
//	switch (random) {
//
//	}
//}

// ===== 2번 문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float score, users, result;
//
//	printf("등수를 입력하세요 : ");
//	scanf("%d", &score);
//
//	printf("전체 인원 수를 입력하세요 : ");
//	scanf("%d", &users);
//
//	result = (score / users) * (float)100;
//
//	if (result <= 10)
//		printf("학점 : A");
//	else if (result <= 30 && result > 10)
//		printf("학점 : B");
//	else if (result <= 60 && result > 30)
//		printf("학점 : C");
//	else if (result <= 90 && result > 60)
//		printf("학점 : D");
//	else
//		printf("학점 : F");
//}


// ===== 3번 문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int x, y;
//
//	printf("x, y의 좌표값을 입력하세요 : ");
//	scanf("%d %d", &x, &y);
//
//	if (x < 0 && y > 0)
//		printf("2사분면");
//
//	else if (x > 0 && y > 0)
//		printf("1사분면");
//
//	else if (x < 0 && y < 0)
//		printf("3사분면");
//
//	else
//		printf("4사분면");
//}


// ===== 4번 문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int year;
//
//	printf("년도를 입력하세요 : ");
//	scanf("%d", &year);
//
//	if (year % 100 == 0 && year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//		printf("%d년은 윤년입니다", year);
//	else
//		printf("%d년은 윤년이 아닙니다", year);
//}


// ===== 5번 문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	float value, result;
//	char ch_value;
//
//	printf("온도를 입력하세요 : ");
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


// ===== 6번 문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int power, usage, price, base, result;
//
//	printf("월 사용량(kwh) : ");
//	scanf("%d", &usage);
//
//	if (usage <= 300) {
//		base = 1000;
//		price = 100;
//		result = (usage * price) + base;
//
//		printf("전기요금 합계 : %d\n", result);
//		printf("- 기본요금 : %d\n", base);
//		printf("- 전력량요금 : %d", (usage * price));
//	}
//	if (usage > 300) {
//		power = 300 * 100;								// 300만큼의 사용
//		base = 5000;
//		price = 200;
//		result = ((usage-300) * price) + base + power;
//
//		printf("전기요금 합계 : %d\n", result);
//		printf("- 기본요금 : %d\n", base);
//		printf("- 전력량요금 : %d", (result - base));
//	}
//	return 0;
//	
//}


// ===== 7번 문제 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int a, b;
//	char sense;
//
//	printf("비트 연산식 입력 : ");
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
//	printf("정수 5개 입력 : ");
//	
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &num);
//		sum += num;
//	}
//	printf("합계 : %d", sum);
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
//	printf("직사각형의 폭과 높이 : ");
//	scanf("%d %d", &width, &height);
//	printf("직사각형을 그릴 문자 : ");
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
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	while (i <= num) {
//		printf("%d ", i);
//		i += 2;
//	}
//	printf("\n");
//}


// 반복 수행 계산기
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
//		printf("수식 : ");
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
//			printf("잘못된 수식입니다");
//			return 1;
//
//		}
//		printf("%f %c %f = %f\n", x, op, y, result);
//
//		printf("계속 하실래요?");
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
//	printf("정수? ");
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
//		printf("정수?(음수 입력시 종료) : ");
//		scanf("%d", &num);
//
//		if (num < 0)
//			break;
//
//		if (num % 2 == 0)
//			continue;
//		sum += num;
//	}
//	printf("홀수의 합계 : %d\n", sum);
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


// ===== 실습 1번 =====
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
//	printf("1 ~ 12345 까지의 합 : %d", sum);
//}


// ===== 실습 2번 =====
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
//	printf("1 ~ 100 까지의 3의 배수의 합 : %d", sum);
//}


// ===== 실습 3번 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int start, stop, increase;
//	int sum = 0;
//
//	printf("시작값, 끝값, 증가값을 입력하세요 : ");
//	scanf("%d %d %d", &start, &stop, &increase);
//
//	for (i = start; i < stop; i += increase)
//		sum += i;
//	printf("%d에서 %d까지 %d씩 증가한 값의 합 : %d", start, stop, increase, sum);
//
//}


// ===== 실습 4번 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int start, stop, inc, i;
//	int sum = 0;
//
//	printf("합계의 시작값 : ");
//	scanf("%d", &start);
//
//	printf("합계의 끝값 : ");
//	scanf("%d", &stop);
//
//	printf("원하는 배수 : ");
//	scanf("%d", &inc);
//
//	for (i = start; i <= stop; i++) {
//		if (i % inc == 0)
//			sum += i;
//	}
//	printf("%d에서 %d까지 %d배수의 합계 : %d", start, stop, inc, sum);
//}


// ===== 실습 5번 =====
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
//		printf("정답을 맞춰보세요 : ");
//		scanf("%d", &user);
//
//		if (random > user)
//			printf("조금 더 ↑↑↑↑↑\n");
//		else if (random < user)
//			printf("조금 더 ↓↓↓↓↓\n");
//		else {
//			printf("정답입니다 :)");
//			break;
//		}
//	}
//
//
//}


// ===== 실습 6번 =====
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int user, i;
//	int sum = 1;
//
//	printf("정수를 입력하세요 : ");
//	scanf("%d", &user);
//
//	for (i = 1; i <= user; i++) {
//		sum *= i;
//	}
//	printf("정수 %d의 팩토리얼은 : %d입니다", user, sum);
//}


// ===== 실습 7번 =====
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int thousand, hundered, ten, one, user, i;

	printf("숫자대로 별 출력 : ");

	while (1) {
		scanf("%1d", &user);
		for (i = 1; i < user; i++) {
			printf("*");
		}
		printf("\n");
	}
	
}