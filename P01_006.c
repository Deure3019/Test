#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int N = 0, count = 0, sum = 0;
	char list[81];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", &list);
		for (int j = 0; j < strlen(list); j++) {
			if (list[j] == 'O') {
				count++;
				sum += count;
			}
			else {
				count = 0;
			}
		}
		printf("%d\n", sum);
		count = 0, sum = 0;
	}
	return 0;
}
