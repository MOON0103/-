#include <stdio.h>

int main()
{
  int a, x[100], y[100];
  scanf("%d", &a);
  for(int i = 1; i <=  a; i++ )
  {
    scanf("%d %d", &x[i], &y[i]);
    
  }
  for(int i = 1; i <=  a; i++ )
  {
    printf("Case #%d: %d + %d = %d\n", i, x[i], y[i], x[i] + y[i]);
  }
  return 0;
 }
