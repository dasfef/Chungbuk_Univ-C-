// �������� 1��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char file[40] = "";
	char exe[40] = "";

	printf("���ϸ� �Է� : ");
	scanf("%s", &file);

	printf("Ȯ���� �Է� : ");
	scanf("%s", &exe);

	printf("��ü ���ϸ� : %s.%s", file, exe);
}