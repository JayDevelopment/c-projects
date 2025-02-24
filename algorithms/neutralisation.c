#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* neutralise(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return NULL;
    }
    char* result = malloc(len1 + 1);
    for (int i = 0; i < len1; i++) {
      result[i] = s1[i] == s2[i] ? s1[i] : '0';
    }
    
    result[len1] = '\0';
    return result;
}
int main(void) {
    // Example 1:
    const char* s1 = "+-+";
    const char* s2 = "+--";
    char* res = neutralise(s1, s2);
    if (res != NULL) {
        printf("(%s, %s) ➞ \"%s\"\n", s1, s2, res); // Expected: "+-0"
        free(res);
    }
}