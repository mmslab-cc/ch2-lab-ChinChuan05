#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//第一題
	printf("(1)\n");
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			if (i == 0 || i == 9 || j == 0 || j == 9) {
				putchar('X');
			}
			else {
				putchar('-');
			}
		}
		putchar('\n');
	}


	//第二題
	printf("(2)\n");
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			if (3 <= i && i <= 6 && 3 <= j && j <= 6) {
				putchar('-');
			}
			else {
				putchar('X');
			}
		}
		putchar('\n');
	}

	//第三題
	printf("(3)\n");
	int down = 4, up = 5;
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			if (i == 4 || i < 4 && (j==down || j == up)) {
				putchar('X');
			}
			else {
				putchar('-');
			}
		}
		down--;
		up++;
		putchar('\n');
	}

	//第四題
	printf("(4)\n");
	down = 0, up = 9;
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			if (i == 0 || i < 5 && (j == down || j == up)) {
				putchar('X');
			}
			else {
				putchar('-');
			}
		}
		down++;
		up--;
		putchar('\n');
	}

	//第五題
	printf("(5)\n");
	down = 0, up = 9;
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			if (j == down || j == up) {
				putchar('X');
			}
			else {
				putchar('-');
			}
		}
		down++;
		up--;
		putchar('\n');
	}

	system("pause");
	return 0;
}
