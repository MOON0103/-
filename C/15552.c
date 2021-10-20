#include <stdio.h>

int main()

{

  int a, x[1000000], y[1000000];

  scanf("%d", &a);

  for(int i = 0; i < a; i++ )

    scanf("%d %d", &x[i], &y[i]);

  for(int i = 0; i < a; i++ )

    printf("%d\n",x[i] + y[i]);

  return 0;

}
