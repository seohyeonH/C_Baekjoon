#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int count, X;
	int front = 0, rare = 0;
	int* queue;
	char* command;
	scanf("%d", &count);

	queue = (int*)malloc(count * sizeof(int));
	for (int i = 0; i < count; i++) {
		command = (char*)malloc(6 * sizeof(char));
		scanf("%s", command);

		if (!strcmp("push", command)) {
			scanf("%d", &X);
			queue[rare++] = X;
		}
		else if (!strcmp("pop", command)) {
			if (front == rare) printf("-1\n");
			else printf("%d\n", queue[front++]);
		}
		else if (!strcmp("size", command)) printf("%d\n", rare - front);
		else if (!strcmp("empty", command)) {
			if (front == rare) printf("1\n");
			else printf("0\n");
		}
		else {
			if (front == rare) printf("-1\n");
			else if (!strcmp("front", command)) printf("%d\n", queue[front]);
			else if (!strcmp("back", command)) printf("%d\n", queue[rare - 1]);
		}
		free(command);
	}
	free(queue);
}