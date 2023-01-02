#include <stdio.h>

int main() {
  int hour, minute, cooking_time;
  hour = minute = cooking_time = 0;
  scanf("%d %d", &hour, &minute);
  scanf("%d", &cooking_time);
  if(minute + cooking_time >= 60) {
    hour += cooking_time / 60;
    minute += cooking_time % 60;
    if(minute >= 60) {
      minute -= 60;
      hour += 1;
    } 
    if(hour > 23) hour -= 24;
  }
  else minute += cooking_time;
  printf("%d %d\n", hour, minute);
  return 0;
}
