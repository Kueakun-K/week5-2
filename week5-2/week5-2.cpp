#include<stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	for (int i = 1; i <= (2 * x) - 1; i++) {
		for (int r = 1; r <= (2 * x) - 1; r++) {
			if ((i > r and i + r < 2 * x) or (r > i and i + r > 2 * x))
				printf("  ");
			else
				printf("* ");
		}
		printf("\n");
	}
	return 0;
}


