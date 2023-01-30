#include <stdio.h>

int main(void) {
  int i;
  printf("kaisuu i=");
  scanf("%d", &i);
  for (i; i >= 0; i--) {
    printf("%d", i);
  }
  return 0;
}