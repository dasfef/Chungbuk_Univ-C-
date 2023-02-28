// ▣ 연습문제 1번
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
//	printf("ID 입력 : ");
//	scanf("%s", &info.ID);
//	printf("PW 입력 : ");
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


// ▣ 연습문제 2번
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//void get_lower(struct login_info* ptr, int IDsize, int PWsize);
//void print_struct(struct login_info ptr, int PWsize);
//
//struct login_info {
//	char ID[10] = "";
//	char PW[10] = "";
//}info;
//
//int main(void)
//{
//	int IDsize, PWsize;
//	printf("ID 입력 : ");
//	scanf("%s", &info.ID);
//	printf("PW 입력 : ");
//	scanf("%s", &info.PW);
//	printf("\n");
//
//	PWsize = strlen(info.PW);
//	IDsize = strlen(info.ID);
//	
//	get_lower(&info, IDsize, PWsize);
//	print_struct(info, PWsize);
//}
//
//void get_lower(struct login_info *ptr, int IDsize, int PWsize)
//{
//	int i;
//	for (i = 0; i < IDsize; i++) {
//		ptr->ID[i] += 32;
//	}
//	for (i = 0; i < PWsize; i++) {
//		ptr->PW[i] += 32;
//	}
//}
//
//void print_struct(struct login_info ptr, int PWsize)
//{
//	int i;
//	printf("ID : %s\n", ptr.ID);
//	printf("PW : ");
//	for (i = 0; i < PWsize; i++)
//		printf("*");
//}

// ▣ 연습문제 3번
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
//	printf("년도 입력 : ");
//	scanf("%d", &year);
//
//	printf("월 입력 : ");
//	scanf("%d", &month);
//
//	printf("일 입력 : ");
//	scanf("%d", &day);
//
//	struct date info = { year, month, day };
//	printf("%d/%d/%d", info.year, info.month, info.day);
//}


// ▣ 연습문제 4번
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct dateInput {
//	int year, month, day;
//};
//
//struct offdays {
//	int offMonth;
//	int offDay;
//};
//
//int main(void)
//{
//	struct dateInput date;
//	struct offdays off[] = { {1, 1}, {3, 1}, {5, 5}, {6, 6}, {8, 15}, {10, 3}, {10, 9}, {12, 25} };
//	int i, check;
//	int size = sizeof(off) / sizeof(off[0]);
//	
//	while (1) {
//		printf("년도 입력 : ");
//		scanf("%d", &date.year);
//
//		printf("월 입력 : ");
//		scanf("%d", &date.month);
//
//		printf("일 입력 : ");
//		scanf("%d", &date.day);
//
//		check = 0;
//		for (i = 0; i < size; i++) {
//			if (date.month == off[i].offMonth && date.day == off[i].offDay) {
//				check = 1;
//				break;
//			}
//
//			if (date.year == 0 && date.month == 0 && date.day == 0)
//				return 0;
//		}
//		if (check == 1)
//			printf("%d/%d/%d는 공휴일입니다\n", date.year, date.month, date.day);
//		else
//			printf("%d/%d/%d는 공휴일이 아닙니다\n", date.year, date.month, date.day);
//	}
//	return 0;
//}


// ▣ 연습문제 5번
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct product {
//	char product[40];
//	int price;
//	int sample;
//};
//
//int main(void)
//{
//	struct product result;
//	printf("제품명 : ");
//	scanf("%s", &result.product);
//
//	printf("가격 : ");
//	scanf("%d", &result.price);
//
//	printf("재고 : ");
//	scanf("%d", &result.sample);
//
//	printf("[ %s %d원 재고 : %d ]", result.product, result.price, result.sample);
//}


// ▣ 연습문제 6번
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void print_product(struct product* result, int cnt);
//
//struct product {
//	char product[40];
//	int price;
//	int sample;
//};
//
//int main(void)
//{
//	struct product result[5] = {};
//	int i, size;
//	int cnt = 0;
//	size = sizeof(result) / sizeof(result[0]);
//	for (i = 0; i < size; i++) {
//		printf("제품명 : ");
//		scanf("%s", result[i].product);
//		
//
//		if (strcmp(result[i].product, ".") == 0)
//			break;
//
//		printf("가격 및 재고 : ");
//		scanf("%d %d", &result[i].price, &result[i].sample);
//		cnt++;
//	}
//
//	for (i = 0; i < cnt; i++) {
//		print_product(&result[i], cnt);
//	}
//	return 0;
//}

//void print_product(struct product *result, int cnt)
//{
//	printf("[ %s %d원 재고 : %d ]", \
//		result->product, result->price, result->sample);
//}


// ▣ 연습문제 7번
//#include <stdio.h>
//
//int print_array(struct coordinate* cod);
//
//struct coordinate {
//	int x, y;
//};
//
//int main(void)
//{
//	struct coordinate cod[10] = { {7, 4}, {12, 93}, {22, 31}, {1, 20}, {34, 53}, {41, 2}, {32, 9},\
//	{21, 31}, { 8, 2 }, { 3, 5 } };
//	int i;
//	int size = sizeof(cod) / sizeof(cod[0]);
//	printf("<< 정렬 전 >>\n");
//	for (i = 0; i < size; i++) {
//		print_array(&cod[i]);
//	}
//	sort(cod.x, cod.y);
//}
//
//int print_array(struct coordinate *cod)
//{
//	printf("(%d, %d) ", cod->x, cod->y);
//	return 1;
//}
//
//int sort(struct coordinate ) 
//{
//
//}


// ▣ 연습문제 9번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct rect {
	int x1, y1, x2, y2;
};

int main(void)
{
	int x, y;
	struct rect point = {};
	printf("직사각형의 좌하단점(x,y) : ");
	scanf("%d %d", &point.x1, &point.y1);
	printf("직사각형의 우상단점(x,y) : ");
	scanf("%d %d", &point.x2, &point.y2);

	print_point(point);

}

int print_point(struct rect* point)
{

}
