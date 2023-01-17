#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int count, command;
	int front = 0, rear = 0;
	int* queue;
	scanf("%d", &count);

	queue = (int*)malloc(10 * count * sizeof(int));
	while(1){
		scanf("%d", &command);

		if (command == -1) break;
		else if(command == 0) front++;
		else if (count != rear - front) queue[rear++] = command;
	};

	if (front == rear) printf("empty");
	else for (int i = front; i < rear; i++) printf("%d ", queue[i]);
	
	free(queue);
}
