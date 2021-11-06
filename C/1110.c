#include <stdio.h>

int main()
{
	int n, N, i = 0, x, y;

	scanf("%d", &n);
	N = n;

	do
	{
		if (10 <= n && n <= 99)
		{
			x = n / 10;
			y = n % 10;
			if (x + y < 10)
				n = (y * 10) + (x + y);
			else
				n = (y * 10) + ((x + y) % 10);
			i++;
		}
		else if (0 <= n && n < 10)
		{
			y = n % 10;
			n = (y * 10) + y;
			i++;
		}
	} while (N != n);

	printf("%d", i);

	return 0;
}
