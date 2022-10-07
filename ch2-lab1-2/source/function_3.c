#include <stdio.h>
#include <stdlib.h>
int Han_Xin_3()
{
	// 在這裡撰寫韓信點兵的第3個函式
	printf("(3)\n");
	int down = 4, up = 5;
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			if (i == 4 || i < 4 && (j == down || j == up)) {
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
	return 0;
}