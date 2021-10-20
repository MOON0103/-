#include <stdio.h>

int main(){

  int H,M;
  moon:
  scanf("%d %d", &H, &M);

  if(H >= 0 && H <= 23 && 0 <= M && M <= 59){
    if(M >= 45)
      M = M - 45;
    else if(H == 0 && M < 45){
      H = 23;
      M = (60 + M) - 45;
    }
    else if(M < 45){
      H--;
      M = (60 + M) - 45;
    }
    printf("%d %d", H, M);
  }

  else{
    printf("다시 입력해주세요\n");
    goto moon;
  }
  
  return 0;
}
