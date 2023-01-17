#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int front = 0, rear = 0;
	int n, k;
	int* queue;

	scanf("%d %d", &n, &k);
	queue = (int*)malloc(n * k * sizeof(int));
	for (int i = 0; i < n; i++) queue[rear++] = i + 1;

	printf("<");
	while (front != rear) {
		if (front % k == k - 1) {
			if (front == rear - 1) printf("%d", queue[front++]);
			else printf("%d, ", queue[front++]);
		}
		else queue[rear++] = queue[front++];
	}
	printf(">");

	free(queue);
}
