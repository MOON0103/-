#include <stdio.h>

int main()
{
	int n[9], i, max = 0, N;
	for (i = 0; i < 9; i++)
		scanf("%d", &n[i]);
	for (i = 0; i < 9; i++)
	{
		if (max < n[i])
		{
			max = n[i];
			N = i + 1;
		}
	}
	printf("%d\n%d", max, N);
	return 0;
}
