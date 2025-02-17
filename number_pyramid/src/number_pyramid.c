#include <stdio.h>
#include <string.h>
#include "number_pyramid.h"

void print_pattern(int num) {
  char buffer[2048];
  int width = snprintf(NULL, 0, "%d", num);

  char format[16];
  snprintf(format, sizeof(format), "%%%dd ", width);

  int total_row_width = (2 * num - 1) * (width + 1);

  for (int i = 1; i <= num; i++) {
    int count = 2 * i - 1;
    int current_row_width = count * (width + 1);
    int pad = (total_row_width - current_row_width) / 2;

    int offset = 0;
    memset(buffer, 0, sizeof(buffer));

    for (int s = 0; s < pad; s++) {
      offset += snprintf(buffer + offset, sizeof(buffer) - offset, " ");
    }
    for (int j = 0; j < count; j++) {
      offset += snprintf(buffer + offset, sizeof(buffer) - offset, format, num);
    } 
    printf("%s\n", buffer);
  }
}
