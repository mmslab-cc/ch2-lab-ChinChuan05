#include <stdio.h>
#include <stdlib.h>
int Han_Xin_2()
{
	// 在這裡撰寫韓信點兵的第2個函式
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
	return 0;
}
