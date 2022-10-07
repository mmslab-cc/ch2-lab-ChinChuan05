#include <stdio.h>
#include <stdlib.h>
int Han_Xin_5()
{
	// 在這裡撰寫韓信點兵的第5個函式
	printf("(5)\n");
	int down = 0, up = 9;
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
	return 0;
}
