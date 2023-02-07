#include <stdio.h>

int think(int a, int b);

int main()
{
  int chess[6];
  for(int i = 0; i < 6; i++)
  {
    scanf("%d", &chess[i]);   
  }
  printf("%d ", think(chess[0], 1));
  printf("%d ", think(chess[1], 1));
  printf("%d ", think(chess[2], 2));
  printf("%d ", think(chess[3], 2));
  printf("%d ", think(chess[4], 2));
  printf("%d ", think(chess[5], 8));
}

int think(int a, int b)
{
  return b - a;
}
