#include <stdio.h>

int main()
{
  int n1[10000], x, n;
  scanf("%d %d", &n, &x);

  for(int i = 0; i < n; i++)
  {
    scanf("%d", &n1[i]);
  }
  
  for(int i = 0; i < n; i++)
  {
    if(n1[i] < x)
    {
      printf("%d ", n1[i]);
    }
  }
  return 0;
}
