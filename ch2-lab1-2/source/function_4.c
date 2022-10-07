#include <stdio.h>
#include <stdlib.h>
int Han_Xin_4()
{
	// 在這裡撰寫韓信點兵的第4個函式
	printf("(4)\n");
	int down = 0, up = 9;
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
	return 0;
}
