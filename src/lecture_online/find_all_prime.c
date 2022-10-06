// Author: Abdullah Al Faroque
// Date: 06/10/2022
/* Find n number of prime */
#include <stdio.h>

#include <math.h>

void main() {
  int range, c = 0;
  scanf("%d", & range);
  int composite[range];
  int r = sqrt(range);
  for (int i = 2; i <= r; i++) {
    for (int j = 2; i * j <= range; j++) {
      int k = i * j;
      //composite[c] = k;
      //printf("Array %d -->%d\n", c, composite[c]);
      int length = sizeof(composite) / sizeof(composite[0]);
      for (int l = 0; l <= length; l++) {
        if (composite[l] == k) {
          break;
        }
        if (l == length) {
          composite[c] = k;
          printf("Array %d -->%d\n", c, composite[c]);
        }
      }
      c += 1;

    }

  }

}
