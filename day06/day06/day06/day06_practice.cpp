// 연습문제 1번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char file[40] = "";
	char exe[40] = "";

	printf("파일명 입력 : ");
	scanf("%s", &file);

	printf("확장자 입력 : ");
	scanf("%s", &exe);

	printf("전체 파일명 : %s.%s", file, exe);
}