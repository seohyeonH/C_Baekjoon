#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* stack, *sen, *arr;
	char* res;
	int size = 0, s = 0, a = 0, r = 0;
	int count;
	scanf("%d", &count);

	stack = (int*)malloc(count * sizeof(int));
	sen = (int*)malloc(count * sizeof(int));
	arr = (int*)malloc(count * sizeof(int));
	res = (char*)malloc(5 * count * sizeof(char));

	for (int i = 0; i < count; i++) {
		scanf("%d", &sen[i]);
		arr[i] = i + 1;
	}

	while (s < count) {
		if (sen[s] != arr[a]) {
			if (sen[s] == stack[size - 1]) {
				res[r++] = '-';
				size--; s++;
			}
			else if (sen[s] < stack[size - 1]) break;
			else {
				stack[size++] = arr[a++];
				res[r++] = '+';
			}
		}
		else {
			res[r++] = '+'; res[r++] = '-';
			a++; s++;
		}
	}

	if (s == count) for (int i = 0;i < r; i++) printf("%c\n", res[i]);
	else printf("NO\n");

	free(stack); free(sen); free(arr); free(res);
}
