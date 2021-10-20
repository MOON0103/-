#include <stdio.h>

int main()

{

  int a;

  scanf("%d", &a);

  for(int i = a ; i >= 1; i-- )

  {

    for(int j = 1; j < i; j++ )

    {

      printf(" ");

    }

    for(int l = 1; l <= (a + 1 - i); l++ )

    {

      printf("*");

    }

    printf("\n");

  } return 0;

 }
