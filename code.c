#include <stdio.h>

int main(void) {
  int i;
  printf("Hello");
  printf("Hyoujikaisuu i=");
  scanf("%d", &i);
  for (i; i >= 0; i--) {
    printf("%d", i);
  }
  return 0;
}