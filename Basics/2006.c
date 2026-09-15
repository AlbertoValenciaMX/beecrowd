#include <stdio.h>
#include <stdlib.h>

int comp(int t, int c) {
  if (t == c) {
    return 1;
  }
  return 0;
}

int main() {
  int sum = 0, t = 0, c = 0;
  scanf("%d", &t);
  for (int i = 0; i < 5; i++) {
    scanf("%d", &c);
    sum += comp(t, c);
  }
  printf("%d\n", sum);
  return EXIT_SUCCESS;
}
