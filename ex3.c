#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int count, size;
	char* command;
	char stack[51] = { 0 };

	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		size = 0;
		command = (char*)malloc(50 * sizeof(char));
		scanf("%s", command);

		for (int j = 0; command[j] != '\0'; j++) {
			if (command[j] == '(') stack[size++] = command[j];
			else{
				if (stack[size - 1] == '(') size--;
				else stack[size++] = command[j];
			}
		}

		if (size == 0) printf("YES\n");
		else printf("NO\n");
		free(command);
	}
}