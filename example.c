#include <stdio.h>
int n, m, row, column;

int main() {
  scanf("%d %d", &n, &m);

  for (row = 1; row <= n; row++) {
    if (row % 4 == 0) {
      printf("#");
    }
    for (column = 1; column <= m-1; column++) {
      if (row % 2 != 0) {
        printf("#");
      }
      if (row % 2 == 0 && !(row % 4 == 0)) {
        printf(".");
      }
      if (row % 4 == 0) {
        printf(".");
      }
    }

    if (row % 2 == 0 && !(row % 4 == 0)) {
      printf("#");
    }
    printf(" \n");
  }

  return 0;
}