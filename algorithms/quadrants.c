#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getQuadrant(int x, int y) {
    if (x > 0 && y > 0) {
        return 1;
    } else if (x < 0 && y > 0) {
        return 2;
    } else if (x < 0 && y < 0) {
        return 3;
    } else if (x > 0 && y < 0) {
        return 4;
    } else {
        return -1;
    }
}
// A POSSIBLY MORE ELEGANT SOLUTION (on code wars)
//  if(x > 0 && y > 0) return 1;
//  else if(x > 0 && y < 0) return 4;
//  else if(x < 0 && y > 0) return 2;
//  else return 3;
// }
int main(void)
{
    // Example 1:
    int x = 1;
    int y = 1;
    printf("(%d, %d) ➞ %d\n", x, y, getQuadrant(x, y)); // Expected: 1

    // Example 2:
    x = -1;
    y = 1;
    printf("(%d, %d) ➞ %d\n", x, y, getQuadrant(x, y)); // Expected: 2

    // Example 3:
    x = -1;
    y = -1;
    printf("(%d, %d) ➞ %d\n", x, y, getQuadrant(x, y)); // Expected: 3

    // Example 4:
    x = 1;
    y = -1;
    printf("(%d, %d) ➞ %d\n", x, y, getQuadrant(x, y)); // Expected: 4

    // Example 5:
    x = 0;
    y = 0;
    printf("(%d, %d) ➞ %d (x and/or y equal 0)\n", x, y, getQuadrant(x, y)); // Expected: x and/or y equal 0

    return 0;
}
