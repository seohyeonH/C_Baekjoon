#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int count, command;
	int front = 0, rare = 0;
	int* queue;
	scanf("%d", &count);

	queue = (int*)malloc(10 * count * sizeof(int));
	while(1){
		scanf("%d", &command);

		if (command == -1) break;
		else if(command == 0) front++;
		else if (count != rare - front) queue[rare++] = command;
	};

	if (front == rare) printf("empty");
	else for (int i = front; i < rare; i++) printf("%d ", queue[i]);
	
	free(queue);
}