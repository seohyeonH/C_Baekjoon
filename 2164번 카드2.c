#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int num;
	int front = 0, rear = 0;
	int* queue;
	scanf("%d", &num);
	
	queue = (int*)malloc(3 * num * sizeof(int));
	for (int i = 0; i < num; i++) queue[rear++] = i + 1;

	while (front != rear - 1) {
		queue[rear++] = queue[++front];
		front++;
	}

	printf("%d", queue[front]);
	free(queue);
}
