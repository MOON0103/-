#include <stdio.h>

int main()

{

  int a, res[100], x, y;

  scanf("%d", &a);

  for(int i = 1; i <=  a; i++ )

  {

    scanf("%d %d", &x, &y);

    res[i] = x + y; 

    

  }

  for(int i = 1; i <=  a; i++ )

  {

    printf("Case #%d: %d\n", i, res[i]);

  }

  return 0;

 }
