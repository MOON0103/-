#include <stdio.h>

int main()

{

  int n, i;

moon:

  scanf("%d", &n);

  if(n > 9 && n < 1)

  {

      printf("다시 입력해주세요\n");

      goto moon;

  }

  for(int i = 1; i < 10; i++ )

  {

    printf("%d * %d = %d\n", n, i, n * i);

  }

  return 0;

}
