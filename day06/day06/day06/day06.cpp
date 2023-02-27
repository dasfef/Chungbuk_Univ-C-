//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	char string[] = "";
//	printf("2개의 문자열 입력 : ");
//	scanf("%s", &string);
//
//
//}


// 예제 10-2)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct content {
//	char title[40];
//	int price;
//	double rate;
//};

//int main(void)
//{
//	struct content c1 = { "Avengers", 11000, 8.8 };
//	struct content c2, c3;
//	strcpy(c2.title, "Aquaman");
//	c2.price = 7.1;
//	c2.rate = 7.1;
//
//	strcpy(c3.title, "Shazam!");
//	c3.price = 7700;
//	c3.rate = 7.4;
//
//	printf("c1 = %s, %d, %.1f\n", c1.title, c1.price, c1.rate);
//	printf("c2 = %s, %d, %.1f\n", c2.title, c2.price, c2.rate);
//	printf("c3 = %s, %d, %.1f", c3.title, c3.price, c3.rate);
//}

//int main(void)
//{
//	struct content c1 = { "Avengers", 11000, 8.8 };
//	struct content c2 = c1;
//	struct content c3 = { 0 };
//
//	c3 = c1;
//
//	printf("c1 = %s, %d, %.1f\n", c1.title, c1.price, c1.rate);
//	printf("c2 = %s, %d, %.1f\n", c2.title, c2.price, c2.rate);
//	printf("c3 = %s, %d, %.1f\n", c3.title, c3.price, c3.rate);
//}

//int main(void)
//{
//	struct content c1 = { "Avengers", 11000, 8.8 };
//	struct content c2 = c1;
//	if (strcmp(c1.title, c2.title) == 0 && c1.price == c2.price && c1.rate == c2.rate)
//		printf("c1과 c2의 값이 같습니다\n");
//	else
//		printf("c1과 c2의 값이 다릅니다\n");
//}


//int main(void)
//{
//	struct content arr[] = {
//		{"Avengers", 11000, 8.8},
//		{"Aquaman", 5500, 7.1},
//		{"Shazam!", 7700, 7.4}
//	};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i;
//
//	for (i = 0; i < size; i++)
//		printf("arr[%d] = %s, %d, %.1f\n", i, arr[i].title, arr[i].price, arr[i].rate);
//}


//int main(void)
//{
//	struct content arr[] = {
//		{"Avengers", 11000, 8.8}, {"Aquaman", 5500, 7.1}, {"Shazam!", 7700, 7.4},
//		{"X-Men", 3300, 8.0}, {"Us", 8800, 7.1}, {"Inception", 2200, 8.7}
//	};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	char title[40];
//
//	printf("제목 입력 : ");
//	gets_s(title, sizeof(title));
//
//	for (i = 0; i < size; i++)
//		if (strcmp(arr[i].title, title) == 0)
//			break;
//
//	if (i == size)
//		printf("해당 컨텐츠를 찾을 수 없습니다\n");
//	else
//		printf("%s : 가격 = %d, 평점 = %.1f\n", arr[i].title, arr[i].price, arr[i].rate);
//}


//int main(void)
//{
//	struct content c1 = { "Avengers", 11000, 8.8 };
//	struct content* p = &c1;
//
//	p->price *= 0.8;
//	p->rate = 8.9;
//	strcat(p->title, ": Endgame");
//
//	printf("%s, %d, %.1f\n", (*p).title, p->price, p->rate);
//}


//#include <stdio.h>
//
//struct point {
//	int x, y;
//};
//
//void print_point(struct point pt);
//
//int main(void)
//{
//	struct point arr[] = {
//		{10, 20}, {35, 41}, {12, 63}, {72, 55}, {92, 86}, {4, 27}
//	};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i;
//
//	for (i = 0; i < size; i++)
//		print_point(arr[i]);
//	printf("\n");
//}
//
//void print_point(struct point pt)
//{
//	printf("(%d, %d) ", pt.x, pt.y);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct point {
//	int x, y;
//};
//
//void print_point(const struct point* ptr);
//void move_point(struct point* ptr, int offset);
//
//int main(void)
//{
//	struct point arr[] = {
//		{10, 20}, {35, 41}, {12, 63}, {72, 55}, {92, 86}, {4, 27}
//	};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i, offset;
//
//	for (i = 0; i < size; i++)
//		print_point(&arr[i]);
//	printf("\n");
//
//	printf("이동할 오프셋 : ");
//	scanf("%d", &offset);
//	for (i = 0; i < size; i++) {
//		move_point(&arr[i], offset);
//		print_point(&arr[i]);
//	}
//}
//
//void print_point(const struct point *ptr)
//{
//	printf("(%d, %d) ", (*ptr).x, ptr->y);
//}
//
//void move_point(struct point* ptr, int offset)
//{
//	(*ptr).x = (*ptr).x + offset;
//	ptr->y = ptr->y + offset;
//}


//#include <stdio.h>
//#include <math.h>
//
//struct point {
//	int x, y;
//};
//struct line {
//	struct point start, end;
//};
//void print_point(const struct point* ptr);
//double get_length(const struct line* ptr);
//
//int main(void)
//{
//	struct line ln1 = {
//		{10, 20}, {30, 40}
//	};
//	printf("직선 정보 : ");
//	print_point(&ln1.start);
//	print_point(&ln1.end);
//	printf("\n길이 : %f\n", get_length(&ln1));
//}
//
//void print_point(const struct point* ptr)
//{
//	printf("(%d, %d) ", ptr->x, ptr->y);
//}
//
//double get_length(const struct line* ptr)
//{
//	int dx = ptr->end.x - ptr->start.x;
//	int dy = ptr->end.y - ptr->start.y;
//	return sqrt(dx * dx + dy * dy);
//}


//#include <stdio.h>
//
//union test {
//	int i;
//	char c;
//	short s;
//};
//
//int main(void)
//{
//	union test t1 = { 0x12345678 };
//	printf("t1.i의 주소 = %p\n", &t1.i);
//	printf("t1.c의 주소 = %p\n", &t1.c);
//	printf("t1.s의 주소 = %p\n", &t1.s);
//
//	printf("sizeof(union test) = %d\n", sizeof(union test));
//
//	printf("t1.i = %x\n", t1.i);
//	printf("t1.c = %x\n", t1.c);
//	printf("t1.s = %x\n", t1.s);
//}


#include <stdio.h>

enum direction { north, south, east, west };

int main(void)
{
	enum direction moves[] = {
		north, north, east, south, south, west
	};
	int size = sizeof(moves) / sizeof(moves[0]);
	int i;

	printf("이동 순서 : ");
	for (i = 0; i < size; i++) {
		switch (moves[i]) {
		case north:
			printf("북 ");
			break;
		case south:
			printf("남 ");
			break;
		case east:
			printf("동 ");
			break;
		case west:
			printf("서 ");
			break;
		}
	}
		
	printf("\n");
}