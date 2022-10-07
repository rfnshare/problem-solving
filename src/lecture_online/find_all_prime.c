// Author: Abdullah Al Faroque
// Date: 06/10/2022
/* Find n number of prime */
// Version 1.0
#include <stdio.h>

#include <math.h>

void main() {
    int range;
    scanf("%d", & range);

    for (int i = 2; i <= range; i++) {
      int r = sqrt(i);
      if (i<=3)
      {
          printf("%d\n", i);
      }
      for (int j = 2; j <= r; j++) {
        if (i % j == 0) {
          break;
        }
        if (j == r) {
          printf("%d\n", i);
      }
    }

  }

}
