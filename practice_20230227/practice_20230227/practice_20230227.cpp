// �� �������� 1��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct login_info {
//	char ID[10] = "";
//	char PW[10] = "";
//}info;
//
//int main(void)
//{
//	int i, size;
//	printf("ID �Է� : ");
//	scanf("%s", &info.ID);
//	printf("PW �Է� : ");
//	scanf("%s", &info.PW);
//	printf("\n");
//
//	size = strlen(info.PW);
//	printf("ID : %s\n", info.ID);
//	printf("PW : ");
//	for (i = 0; i < size; i++) {
//		printf("*");
//	}
//}


// �� �������� 2��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void get_lower(struct login_info* ptr, int IDsize, int PWsize);
void print_struct(struct login_info ptr, int PWsize);

struct login_info {
	char ID[10] = "";
	char PW[10] = "";
}info;

int main(void)
{
	int IDsize, PWsize;
	printf("ID �Է� : ");
	scanf("%s", &info.ID);
	printf("PW �Է� : ");
	scanf("%s", &info.PW);
	printf("\n");

	PWsize = strlen(info.PW);
	IDsize = strlen(info.ID);
	
	get_lower(&info, IDsize, PWsize);
	print_struct(info, PWsize);
}

void get_lower(struct login_info *ptr, int IDsize, int PWsize)
{
	int i;
	for (i = 0; i < IDsize; i++) {
		ptr->ID[i] += 32;
	}
	for (i = 0; i < PWsize; i++) {
		ptr->PW[i] += 32;
	}
}

void print_struct(struct login_info ptr, int PWsize)
{
	int i;
	printf("%s\n", ptr.ID);
	for (i = 0; i < PWsize; i++)
		printf("*");
}

// �� �������� 3��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct date {
//	int year;
//	int month;
//	int day;
//};
//
//int main(void)
//{
//	int year, month, day;
//	printf("�⵵ �Է� : ");
//	scanf("%d", &year);
//
//	printf("�� �Է� : ");
//	scanf("%d", &month);
//
//	printf("�� �Է� : ");
//	scanf("%d", &day);
//
//	struct date info = { year, month, day };
//	printf("%d/%d/%d", info.year, info.month, info.day);
//}