#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int n, i, j, n1, d;
	scanf("%d", &n);

	d = (n + 1) / 2;
	for (i = 0; i < n; i++) {
		n1 = n % 2 == 0 ? n - 1 : n;
		for (j = 0; j < n1; j++) {
			if (n1 == n) {
				if (i + j == d - 1 || j == i + d - 1 || i == j + d - 1 || i + j == n + d - 2) {
					printf("*");
				}
				else {
					printf("-");
				}
			}
			else {
				if (i + j == d - 1 || j == i + d - 1 || i == j + d || i + j == n + d - 2) {
					printf("*");
				}
				else {
					printf("-");
				}
			}

		}
		printf("\n");
	}
}