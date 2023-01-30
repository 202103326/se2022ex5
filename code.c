#include <stdio.h>

int main(void) {
  int n;
  printf("Hello");
  printf("Hyoujikaisuu n=");
  scanf("%d", &n);
  while (n >= 0) {
    printf("%d\n", n);
    n--;
  }
  return 0;
}