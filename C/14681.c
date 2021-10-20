#include <stdio.h>

int main()
{

    int a, b;
   
    moon:
    scanf("%d",&a);
    scanf("%d",&b);

    if(-1000 <= a && a <= 1000 && a != 0){
      if(-1000 <= b && b <= 1000 && b != 0){
        if(a > 0 && b > 0)
          printf("1");
        else if(a < 0 && b > 0)
          printf("2");
        else if(a < 0 && b < 0)
          printf("3");
        else if(a > 0 && b < 0)
          printf("4");
        
      }
      else{
        printf("다시 입력해주세요");
        goto moon;
      }
    }
     
    else{
     printf("다시 입력해주세요");
     goto moon;
    }
    return 0;
}
