#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int stack[10002] = { 0 };
int main(void) {
	int count, X;
	int size = 0;
	char *command;
	scanf("%d", &count);
	
	
	for (int i = 0; i < count; i++) {
		command = (char*)malloc(count * sizeof(char));
		scanf("%s", command);

		if (!strcmp("push", command)) {
			scanf("%d", &X);

			stack[size++] = X;
		}
		else if (!strcmp("pop", command)) {
			if (size == 0) printf("-1\n");
			else printf("%d\n", stack[--size]);
		}
		else if (!strcmp("size", command)) printf("%d\n", size);
		else if (!strcmp("empty", command)) {
			if (size == 0) printf("1\n");
			else printf("0\n");
		}
		else {
			if (size == 0) printf("-1\n");
			else printf("%d\n", stack[size - 1]);
		}

		free(command);
	}
}
