#include <stdio.h>
#include <stdlib.h>


void SWAP(int* a, int* b);
void SequenceSort(int* base, int n);

int main() {
	int num[3];

	scanf("%d %d %d", &num[0], &num[1], &num[2]);

	if (num[0] == num[1] && num[1] == num[2])
		printf("%d\n", 10000 + num[0] * 1000);
	else if (num[0] != num[1] && num[1] != num[2] && num[0] != num[2]) {
		SequenceSort(&num, 3);
		printf("%d\n", 100 * num[0]);
	}
	else {
		SequenceSort(num, 3);
		if (num[0] == num[1]) printf("%d\n", 1000 + num[0] * 100);
		else printf("%d\n", 1000 + num[2] * 100);
	}
		
	return 0;
}

void SWAP(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void SequenceSort(int* arr, int n) {
	int i, j;
	for ( i = 0; i < n; i++)
	{
		for ( j = i; j < n; j++)
		{
			if (arr[i] < arr[j]) SWAP(&arr[i], &arr[j]);
		}
	}
}
