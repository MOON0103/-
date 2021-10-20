#include <stdio.h>

int main()

{

  int a;

  

  moon:

  

  scanf("%d", &a);

  if(a < 0)

  {

    printf("다시 입력해주세요\n"); 

    goto moon;

  }

  else if(a > 100)

  {

    printf("다시 입력해주세요\n"); 

    goto moon;

  }

  

  else if(a > 89)

  {

    printf("A\n");

  }

  else if(a > 79)

  {

    printf("B\n");

  }

  else if(a > 69)

  {

    printf("C\n");

  }

  else if(a > 59)

  {

    printf("D\n");

  }

  else printf("F\n");

    return  0;

}
