#include "s21_string.h"
#include <string.h>
#include <stdio.h>

int main() {
    char s1[25600] = "1 2 3 4 5 6";
    char s2[25600] = "7 8 9 10 11 12";
    char s3[25600] = "1 2 3 4 5 6";
    char str[25600] = {'\0'};
    // printf("\n\n\nDEBUGER\n\n\n");
    // s21_sprintf(str, "%123.11f = %999s", 1234.5678, "1234.5678");
    // printf("str = {%s}\n", str);
    s21_strncpy(s1, s2, s21_strlen(s2) - 1);
    printf("%s\n", s1);
    return 0;
}