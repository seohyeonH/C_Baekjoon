#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int k, num;
	int stack[100002] = { 0 };
	int size = 0, sum = 0;

	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &num);

		switch (num) {
		case 0:
			--size; break;
		default:
			stack[size++] = num; break;
 		}
	}

	for (int i = 0; i < size; i++) sum += stack[i];
	printf("%d", sum);
}