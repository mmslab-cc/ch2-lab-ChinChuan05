#include <stdio.h>
#include <stdlib.h>
int Han_Xin_1()
{
	// 在這裡撰寫韓信點兵的第1個函式
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
	return 0;
}