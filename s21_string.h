#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_
#define S21_NULL ((void*)0)
#define SPEC "dcsiuf%"
#define NUMBERS "1234567890"

#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

typedef long unsigned s21_size_t;
typedef struct s_sprint {
    va_list point;
    unsigned long num_u;
    long long int num_int;
    long double num_double;
    int plus;
    int minus;
    int sp;
    int weight;
    int precision_dot;
    int precision;
    int checker;
    char length;
}   s21_sprint;

s21_size_t s21_strlen(const char *s);
void* s21_memset(void *s, int c, s21_size_t n);
void* s21_memmove(void* s, const void* src, s21_size_t n);
void* s21_memcpy(void* s, const void* src, s21_size_t n);
void* s21_memchr(const void *arr, int c, s21_size_t n);
int s21_memcmp(const void* s1, const void* s2, s21_size_t n);
char* s21_strcat(char* dest, const char* src);
char* s21_strncat(char* dest, const char* src, s21_size_t t);
char* s21_strchr(const char* s, int ch);
int s21_strcmp(const char *data1, const char *data2);
char* s21_strcpy(char *copy, const char *data);
char* s21_strncpy(char *copy, const char *data, s21_size_t n);
s21_size_t s21_strspn(const char *s, const char *charset);
s21_size_t s21_strcspn(const char *s, const char *charset);
char* s21_strpbrk(const char *str1, const char *str2);
char* s21_strrchr(const char* s, int ch);
char* s21_strstr(const char* str1, const char* str2);
int s21_strncmp(const char *data1, const char *data2, s21_size_t n);
char* s21_strtok(char* str, const char* delim);
char *s21_strerror(int num);
void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);


int s21_sprintf(char *str, const char *format, ...);
s21_size_t s21_sprintf_init(const char* format, s21_sprint* tab);
void* s21_found_intstr(char* spn, int* num);
s21_size_t s21_sprintf_init(const char* format, s21_sprint* tab);
char* s21_sprintf_c(char* buf, s21_sprint* tab);
s21_size_t s21_spec_iniciliation(char* str, const char* format, s21_sprint* tab);
char* s21_sprintf_s(char* buf, s21_sprint* tab);
s21_sprint* s21_tab_null(s21_sprint *tab);
char* s21_sprintf_d(char* duf, s21_sprint* tab);
int s21_atoi(char* num_str);
void* s21_itoa(char* str, long long int num);
void* s21_transfer(char* buf, char ch);
void* s21_reverse(char* str);
void s21_lengh_d(s21_sprint* tab);
void s21_lengh_u(s21_sprint* tab);
char* s21_sprintf_f(char* buf, s21_sprint* tab);
void* s21_f_spaces(char* buf, s21_sprint* tab);

#endif  // SRC_S21_STRING_H_
