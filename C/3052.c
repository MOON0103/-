#include <stdio.h>

int main() {
	int n[10], a, i, j, temp;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a);
		n[i] = a % 42;
	}
	for (i = 0; i < 10; i++) {
		for (j = i; j < 10; j++) {
			if (n[i] < n[j])
			{
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	a = 0;
	for (i = 0; i < 10; i++)
		if (n[i] != n[i + 1]) a++;
	printf("%d", a);
	return 0;
}
