#include "Header.h"

int main() {
	printf("4: 3.1 anwser\n");
	printf("5: 3.2 anwser\n");
	printf("6: 3.3 anwser\n");
	printf("7: 3.4 anwser\n");
	char num;
	printf("Enter the question number to select output result:");
	scanf("%c", &num);
	switch (num)
	{
	case '4': hw4_3_1();
		break;
	case '5': hw4_3_2();
		break;
	case '6': hw4_3_3();
		break;
	case '7': hw4_3_4();
		break;
	default: printf("wrong number");
	}
}