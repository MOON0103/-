#include <stdio.h>

int main() {
	int X, N, n[100][2], i, x = 0;
	scanf("%d", &X);
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &n[i][0], &n[i][1]);
		x += n[i][0] * n[i][1];
	}
	if (X == x) printf("Yes\n");
	else printf("No\n");
}
