#include <stdio.h>

int main()
{
    int a, b, c, a1, b1, c1, res;

    scanf("%1d %1d %1d", &a, &b, &c);
    scanf("%1d %1d %1d", &a1, &b1, &c1);

    res = ((a * 100) + (b * 10) + c) * c1;
    printf("%d\n", res);

    res = ((a * 100) + (b * 10) + c) * b1;
    printf("%d\n", res);

    res = ((a * 100) + (b * 10) + c) * a1;
    printf("%d\n", res);

    res = ((a * 100) + (b * 10) + c) * ((a1 * 100) + (b1 * 10) + c1);
    printf("%d\n", res);

    return 0;
}
