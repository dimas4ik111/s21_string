#include "s21_string.h"
#include "s21_test.h"
#include <stdio.h>

START_TEST(s21_memchr_test_0) {
    char *s1 = "0";
    ck_assert_pstr_eq(memchr(s1, 2, 4), s21_memchr(s1, 2, 4));
    ck_assert_pstr_eq(memchr(s1, 85, 1), s21_memchr(s1, 85, 1));
    ck_assert_pstr_eq(memchr(s1, 48, 1), s21_memchr(s1, 48, 1));
} END_TEST

START_TEST(s21_memchr_test_1) {
  char *s1 = "0";
  ck_assert_pstr_eq(memchr(s1, 48, 1), s21_memchr(s1, 48, 1));
} END_TEST

START_TEST(s21_memchr_test_2) {
  char str_9[12] = "Hello world";
  ck_assert_str_eq(memchr(str_9, 'w', strlen(str_9)), s21_memchr(str_9, 'w', s21_strlen(str_9)));
} END_TEST

START_TEST(s21_memchr_test_3) {
  char str_3[12] = "i am\nproger";
  ck_assert_str_eq(memchr(str_3, '\n', 6), s21_memchr(str_3, '\n', 6));
} END_TEST

START_TEST(s21_memchr_test_4) {
  char str_5[5] = " \n\0\0";
  ck_assert_str_eq(memchr(str_5, '\0', 4), s21_memchr(str_5, '\0', 4));
} END_TEST

START_TEST(s21_memchr_test_5) {
  char str_1[2] = {'\0'};
  ck_assert_ptr_eq(memchr(str_1, '\n', 1), s21_memchr(str_1, '\n', 1));
} END_TEST

START_TEST(s21_memchr_test_6) {
  char* str_1 = "Hello world";
  ck_assert_pstr_eq(memchr(str_1, '6', strlen(str_1)), s21_memchr(str_1, '6', s21_strlen(str_1)));
} END_TEST

START_TEST(s21_memchr_test_7) {
  char* str_1 = "schhol21\0";
  ck_assert_ptr_eq(memchr(str_1, '\n', 6), s21_memchr(str_1, '\n', 6));
} END_TEST

START_TEST(s21_memchr_test_8) {
  char* str_1 = "Per aspera ad astra";
  ck_assert_ptr_eq(memchr(str_1, 'p', 2), s21_memchr(str_1, 'p', 2));
} END_TEST

START_TEST(s21_memchr_test_9) {
  char* str_1 = "a\n\0";
  ck_assert_str_eq(memchr(str_1, '\0', 4), s21_memchr(str_1, '\0', 4));
} END_TEST

START_TEST(s21_memchr_test_10) {
  char *s1 = "0";
  ck_assert_pstr_eq(memchr(s1, 2, 4), s21_memchr(s1, 2, 4));
} END_TEST

START_TEST(s21_memchr_test_11) {
  char* str_3 = "i am\nproger";
  ck_assert_ptr_eq(memchr(str_3, 'p', 2), s21_memchr(str_3, 'p', 2));
} END_TEST

START_TEST(s21_memchr_test_12) {
  char *s1 = "0";
  ck_assert_pstr_eq(memchr(s1, 85, 1), s21_memchr(s1, 85, 1));
} END_TEST

START_TEST(s21_memchr_test_13) {
  char* str = "Hello w\0orld\0";
  ck_assert_pstr_eq(memchr(str, 'r', 5), s21_memchr(str, 'r', 5));
} END_TEST

START_TEST(s21_memchr_test_14) {
  char* str2 = "john.smith@microsoft.com";
  ck_assert_pstr_eq(memchr(str2, 's', 6), s21_memchr(str2, 's', 6));
} END_TEST

START_TEST(s21_memchr_test_15) {
  char str3[] = {'q', 'r', 's', 't', 'w', '\0'};
  ck_assert_pstr_eq(memchr(str3, 's', 5), s21_memchr(str3, 's', 5));
} END_TEST

START_TEST(s21_memchr_test_16) {
    char* str = "";
    s21_size_t n_byte = 0;
    s21_size_t find_byte = '\0';
    ck_assert_ptr_eq(s21_memchr(str, find_byte, n_byte), memchr(str, find_byte, n_byte));
} END_TEST

START_TEST(s21_memchr_test_17) {
    char* str = "string";
    s21_size_t n_byte = 7;
    s21_size_t find_byte = '\0';
    ck_assert_ptr_eq(s21_memchr(str, find_byte, n_byte), memchr(str, find_byte, n_byte));
} END_TEST

START_TEST(s21_memchr_test_18) {
    char* str = "Atring";
    s21_size_t n_byte = 6;
    s21_size_t find_byte = 'A';
    ck_assert_ptr_eq(s21_memchr(str, find_byte, n_byte), memchr(str, find_byte, n_byte));
} END_TEST

START_TEST(s21_memchr_test_19) {
    char* str = "StringA";
    s21_size_t n_byte = 7;
    s21_size_t find_byte = 'A';
    ck_assert_ptr_eq(s21_memchr(str, find_byte, n_byte), memchr(str, find_byte, n_byte));
} END_TEST

START_TEST(s21_memchr_test_20) {
    char* str = "Str55333222ingA";
    s21_size_t n_byte = 15;
    s21_size_t find_byte = '3';
    ck_assert_ptr_eq(s21_memchr(str, find_byte, n_byte), memchr(str, find_byte, n_byte));
} END_TEST

START_TEST(s21_memchr_test_21) {
    int array[] = {1, 2, 3, 666, 5, 99, 100};
    s21_size_t n_byte = sizeof(int) * 7;
    s21_size_t find_byte = 666;
    ck_assert_ptr_eq(s21_memchr(array, find_byte, n_byte), memchr(array, find_byte, n_byte));
} END_TEST

START_TEST(s21_memchr_test_22) {
    double array[] = {1.1, 2.1, 3.1, 666.1, 5.1, 99.1, 100.1};
    s21_size_t n_byte = sizeof(double) * 7;
    s21_size_t find_byte = 666;
    ck_assert_ptr_eq(s21_memchr(array, find_byte, n_byte), memchr(array, find_byte, n_byte));
} END_TEST

START_TEST(s21_memchr_test_23) {
    char* str = "aboba";
    s21_size_t n_byte = 5;
    s21_size_t find_byte = 'c';
    ck_assert_ptr_eq(s21_memchr(str, find_byte, n_byte), memchr(str, find_byte, n_byte));
} END_TEST

START_TEST(s21_memchr_test_24) {
    char mass1[100] = "1234", mass2[100] = "Nice", mass3[100] = "00000000",
         mass4[100] = "-1-2-3-4-5", mass5[100] = "daseqweqwe";
    fail_unless(s21_memchr(mass1, '4', 9) == memchr(mass1, '4', 9));
    fail_unless(s21_memchr(mass2, 'i', 9) == memchr(mass2, 'i', 9));
    fail_unless(s21_memchr(mass3, '0', 9) == memchr(mass3, '0', 9));
    fail_unless(s21_memchr(mass4, '-', 9) == memchr(mass4, '-', 9));
    fail_unless(s21_memchr(mass5, '1', 9) == memchr(mass5, '1', 9));
} END_TEST

START_TEST(s21_memcmp_test_0) {
    char *s1 = "QWERTY";
    char *s2 = "QWE";
    ck_assert_int_eq(memcmp(s1, s2, 6), s21_memcmp(s1, s2, 6));
    ck_assert_int_eq(memcmp(s1, s1, 6), s21_memcmp(s1, s1, 6));
} END_TEST

START_TEST(s21_memcmp_test_1) {
    char str[] = "Hello World";
    char str1[] = "Hello World";
    int n = '\0';
    ck_assert_int_eq(s21_memcmp(str, str1, n), memcmp(str, str1, n));
} END_TEST

START_TEST(s21_memcmp_test_2) {
    char str[] = "Hello World";
    char str1[] = "Hello World";
    int n = 0;
    ck_assert_int_eq(s21_memcmp(str, str1, n), memcmp(str, str1, n));
} END_TEST

START_TEST(s21_memcmp_test_3) {
    char str[] = "Hello";
    char str1[] = "notequal";
    int n = 5;
    ck_assert_int_eq(s21_memcmp(str, str1, n), memcmp(str, str1, n));
} END_TEST

START_TEST(s21_memcmp_test_4) {
    char str[] = "Hello World";
    char str1[] = "";
    int n = 1;
    ck_assert_int_eq(s21_memcmp(str, str1, n), memcmp(str, str1, n));
} END_TEST

START_TEST(s21_memcmp_test_5) {
    char str[] = "Hello World";
    char str1[] = "";
    int n = 1;
    ck_assert_int_eq(s21_memcmp(str, str1, n), memcmp(str, str1, n));
} END_TEST

START_TEST(s21_memcmp_test_6) {
    char str_5[] = " \n\0\0";
    char str_6[] = " a\n\0";
    ck_assert_int_eq(memcmp(str_5, str_6, 3), s21_memcmp(str_5, str_6, 3));
} END_TEST

START_TEST(s21_memcmp_test_7) {
    char str[] = "abc";
    char str1[] = "bca";
    ck_assert_int_eq(memcmp(str, str1, 2), s21_memcmp(str, str1, 2));
} END_TEST

START_TEST(s21_memcmp_test_8) {
    char str_36[] = "Hello";
    char str_37[] = "HeLlo";
    ck_assert_int_eq(memcmp(str_36, str_37, 3), s21_memcmp(str_36, str_37, 3));
} END_TEST

START_TEST(s21_memcmp_test_9) {
    char str[] = "Per aspera ad astra";
    char str1[] = "i am\nproger";
    ck_assert_int_eq(memcmp(str, str1, 3), s21_memcmp(str, str1, 3));
} END_TEST

START_TEST(s21_memcmp_test_10) {
    char str[] = "Per aspera ad astra";
    char str1[] = "i am\nproger";
    ck_assert_int_eq(memcmp(str, str1, 0), s21_memcmp(str, str1, 0));
} END_TEST

START_TEST(s21_memcmp_test_11) {
    char str[] = "Per aspera ad astra";
    char str1[] = "i am\nproger";
    ck_assert_int_eq(memcmp(str, str1, 10), s21_memcmp(str, str1, 10));
} END_TEST

START_TEST(s21_memcmp_test_12) {
    char str[] = "Per aspera ad astra";
    ck_assert_int_eq(memcmp(str, str, 10), s21_memcmp(str, str, 10));
} END_TEST

START_TEST(s21_memcmp_test_13) {
    char str1[] = "t\200";
    char str2[] = "t\0";
    int n = 2;
    ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
} END_TEST

START_TEST(s21_memcmp_test_14) {
    char str1[] = "test\0test";
    char str2[] = "test";
    int n = 3;
    ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
} END_TEST

START_TEST(s21_memcmp_test_15) {
    char str1[] = "t\200";
    char str2[] = "t\n";
    int n = 2;
    ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
} END_TEST

START_TEST(s21_memcmp_test_16) {
    char *s1 = "QWERTY";
    char *s2 = "QWE";
    ck_assert_int_eq(memcmp(s1, s2, 6), s21_memcmp(s1, s2, 6));
    ck_assert_int_eq(memcmp(s1, s1, 6), s21_memcmp(s1, s1, 6));
} END_TEST

START_TEST(s21_memcmp_test_17) {
    s21_size_t n1 = 3;
    void *str1 = "LUGANO!";
    void *str2 = "LUGANO!";
    ck_assert_int_eq(memcmp(str1, str2, n1), s21_memcmp(str1, str2, n1));
} END_TEST

START_TEST(s21_memcmp_test_18) {
    s21_size_t n2 = 3;
    void *str1 = "LUGANO THE BEST!";
    void *str2 = "LU GANO OF THE BEST!!";
    ck_assert_int_eq(memcmp(str1, str2, n2), s21_memcmp(str1, str2, n2));
} END_TEST

START_TEST(s21_memcmp_test_19) {
    s21_size_t n3 = 3;
    void *str1 = " LUGANO OF THE BEST!!";
    void *str2 = "LUGANO!";
    ck_assert_int_eq(memcmp(str1, str2, n3), s21_memcmp(str1, str2, n3));
} END_TEST

START_TEST(s21_memcmp_test_20) {
    char str1[] = "aboba";
    char str2[] = "aboba";
    s21_size_t n = 0;
    int got = s21_memcmp(str1, str2, n);
    int expected = memcmp(str1, str2, n);
    if (got > 1) got = 1;
    if (expected > 1) expected = 1;
    if (got < -1) got = -1;
    if (expected < -1) expected = -1;
    ck_assert_int_eq(got, expected);
} END_TEST

START_TEST(s21_memcmp_test_21) {
    char str1[] = "aboba";
    char str2[] = "aboba";
    s21_size_t n = 3;
    int got = s21_memcmp(str1, str2, n);
    int expected = memcmp(str1, str2, n);
    if (got > 1) got = 1;
    if (expected > 1) expected = 1;
    if (got < -1) got = -1;
    if (expected < -1) expected = -1;
    ck_assert_int_eq(got, expected);
} END_TEST

START_TEST(s21_memcmp_test_22) {
    char str1[] = "aboba";
    char str2[] = "Aboba";
    s21_size_t n = 1;
    int got = s21_memcmp(str1, str2, n);
    int expected = memcmp(str1, str2, n);
    if (got > 1) got = 1;
    if (expected > 1) expected = 1;
    if (got < -1) got = -1;
    if (expected < -1) expected = -1;
    ck_assert_int_eq(got, expected);
} END_TEST

START_TEST(s21_memcmp_test_23) {
    char str1[] = "1";
    char str2[] = "1";
    s21_size_t n = 0;
    int got = s21_memcmp(str1, str2, n);
    int expected = memcmp(str1, str2, n);
    if (got > 1) got = 1;
    if (expected > 1) expected = 1;
    if (got < -1) got = -1;
    if (expected < -1) expected = -1;
    ck_assert_int_eq(got, expected);
} END_TEST

START_TEST(s21_memcmp_test_24) {
    char str1[] = "1";
    char str2[] = "1234";
    s21_size_t n = 1;
    int got = s21_memcmp(str1, str2, n);
    int expected = memcmp(str1, str2, n);
    if (got > 1) got = 1;
    if (expected > 1) expected = 1;
    if (got < -1) got = -1;
    if (expected < -1) expected = -1;
    ck_assert_int_eq(got, expected);
} END_TEST

START_TEST(s21_memcmp_test_25) {
    char str1[] = "1234";
    char str2[] = "1234";
    s21_size_t n = 2;
    int got = s21_memcmp(str1, str2, n);
    int expected = memcmp(str1, str2, n);
    if (got > 1) got = 1;
    if (expected > 1) expected = 1;
    if (got < -1) got = -1;
    if (expected < -1) expected = -1;
    ck_assert_int_eq(got, expected);
} END_TEST

START_TEST(s21_memcmp_test_26) {
    char str1[] = "13";
    char str2[] = "1234";
    s21_size_t n = 2;
    int got = s21_memcmp(str1, str2, n);
    int expected = memcmp(str1, str2, n);
    if (got > 1) got = 1;
    if (expected > 1) expected = 1;
    if (got < -1) got = -1;
    if (expected < -1) expected = -1;
    ck_assert_int_eq(got, expected);
} END_TEST

START_TEST(s21_memcmp_test_27) {
    char str1[] = "134567";
    char str2[] = "1234";
    s21_size_t n = 2;
    int got = s21_memcmp(str1, str2, n);
    int expected = memcmp(str1, str2, n);
    if (got > 1) got = 1;
    if (expected > 1) expected = 1;
    if (got < -1) got = -1;
    if (expected < -1) expected = -1;
    ck_assert_int_eq(got, expected);
} END_TEST

START_TEST(s21_memcmp_test_28) {
    char *str1 = "111111111111111111112312312312312312434524563567adsfe 4rafa ewfseASDASD";
    char *str2 = "111111111111111111112312312312312312434524563567adsfe 4rafa ewfseASDASD";
    s21_size_t n = 71;
    int got = s21_memcmp(str1, str2, n);
    int expected = memcmp(str1, str2, n);
    if (got > 1) got = 1;
    if (expected > 1) expected = 1;
    if (got < -1) got = -1;
    if (expected < -1) expected = -1;
    ck_assert_int_eq(got, expected);
} END_TEST

START_TEST(s21_memcmp_test_29) {
    char str1[] = "111111111111111111112312312312312312434524563567adsfe 4rafa ewfseASDASD";
    char str2[] = "111111111111111111112312312312312312434524563567adsfe 4rafa ewfseASDASd";
    s21_size_t n = 71;
    int got = s21_memcmp(str1, str2, n);
    int expected = memcmp(str1, str2, n);
    if (got > 1) got = 1;
    if (expected > 1) expected = 1;
    if (got < -1) got = -1;
    if (expected < -1) expected = -1;
    ck_assert_int_eq(got, expected);
} END_TEST

START_TEST(s21_memcmp_test_30) {
    char str1[] = "1234567890\n\0";
    char str2[] = "1234567890\n\0";
    ck_assert_int_eq((s21_memcmp(str1, str2, 11) == 0), (memcmp(str1, str2, 11) == 0));
} END_TEST

START_TEST(s21_memcmp_test_31) {
    char str1[15] = "1234567890\0";
    char str2[15] = "1234567890\0";
    ck_assert_int_eq(s21_memcmp(str1, str2, 11), memcmp(str1, str2, 11));
} END_TEST

START_TEST(s21_memcmp_test_32) {
    char str1[15] = "1234509876\n\0";
    char str2[15] = "1234567890\n\0";
    ck_assert_int_eq((s21_memcmp(str1, str2, 11) ==0), (memcmp(str1, str2, 11) == 0));
} END_TEST

START_TEST(s21_memcmp_test_33) {
    char str1[15] = "1\n2\n3\n4\n5\n6\0";
    char str2[15] = "1\n2\n3\n5\n6\n4\0";
    ck_assert_int_eq(s21_memcmp(str1, str2, 6), memcmp(str1, str2, 6));
} END_TEST

START_TEST(s21_memcmp_test_34) {
    char str1[15] = "\ngoogle\0";
    char str2[15] = "\ngooble\0";
    ck_assert_int_eq(s21_memcmp(str1, str2, 15), memcmp(str1, str2, 15));
} END_TEST

START_TEST(s21_memcmp_test_35) {
    char *str1 = "booble%s%s\\//\'\0";
    char *str2 = "booble%s%s\\//\'\00";
    ck_assert_int_eq(s21_memcmp(str1, str2, 100), memcmp(str1, str2, 100));
} END_TEST

START_TEST(s21_memcmp_test_36) {
    char *str1 = "booble%s%s\\//\'\0";
    char *str2 = "booble%s%s\\//\'\00";
    ck_assert_int_eq(s21_memcmp(str1, str2, 99), memcmp(str1, str2, 99));
} END_TEST

START_TEST(s21_memcmp_test_37) {
    char *str1 = "Hello World\n";
    char *str2 = "Hello world";
    ck_assert_int_eq(s21_memcmp(str1, str2, 20), memcmp(str1, str2, 20));
} END_TEST

START_TEST(s21_memcmp_test_38) {
    char *str1 = "Hello World\0";
    char *str2 = "Hello World!\n\0";
    ck_assert_int_eq(s21_memcmp(str1, str2, 20), memcmp(str1, str2, 20));
} END_TEST

START_TEST(s21_memcmp_test_39) {
    char *str1 = "\0";
    char *str2 = "\0";
    ck_assert_int_eq(s21_memcmp(str1, str2, 100), memcmp(str1, str2, 100));
} END_TEST

START_TEST(s21_memcmp_test_40) {
    char mass11[100] = "1234", mass12[100] = "776832768178",
         mass13[100] = "-1213002%s", mass14[100] = "999010s";
    char mass21[100] = "1234", mass22[100] = "776asdqe1",
        mass23[100] = "-1213002%s", mass24[100] = "99901asdass";
    fail_unless(s21_memcmp(mass11, mass21, 4) == memcmp(mass11, mass21, 4));
    fail_unless(s21_memcmp(mass12, mass22, 3) == memcmp(mass12, mass22, 3));
    fail_unless(s21_memcmp(mass13, mass23, 10) == memcmp(mass11, mass21, 10));
    fail_unless(s21_memcmp(mass14, mass24, 4) == memcmp(mass14, mass24, 4));
    fail_unless(s21_memcmp(mass11, mass21, 0) == memcmp(mass11, mass21, 0));
} END_TEST

START_TEST(s21_memcpy_test_1) {
    char s1[255] = "QWERTY";
    char s2[255] = "E";
    ck_assert_pstr_eq(memcpy(s1, s2, 6), s21_memcpy(s1, s2, 6));
} END_TEST

START_TEST(s21_memmove_test_1) {
    char s1[255] = "QWERTY";
    char s2[255] = "E";
    ck_assert_pstr_eq(memmove(s1, s2, 6), s21_memmove(s1, s2, 6));
    ck_assert_pstr_eq(memmove(s2, s1, 6), s21_memmove(s2, s1, 6));
    ck_assert_pstr_eq(memmove(s1, s1, 6), s21_memmove(s1, s1, 6));
} END_TEST

START_TEST(s21_memset_test_1) {
    char s1[255] = "QWERTY";
    ck_assert_pstr_eq(memset(s1, 2, 6), s21_memset(s1, 2, 6));
} END_TEST

START_TEST(s21_strcat_test_1) {
    char s1[255] = "QWERTY";
    char *s2 = "E";
    ck_assert_pstr_eq(strcat(s1, s2), s21_strcat(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_0) {
    char *s1 = "QWERTY";
    char s2 = 'E';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_1) {
    char *s1 = "hello";
    char s2 = 'H';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_2) {
    char *s1 = "HELLO, WORLD";
    char s2 = ',';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_3) {
    char *s1 = "123456789";
    char s2 = '5';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_4) {
    char *s1 = "112345\0";
    char s2 = '5';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_5) {
    char *s1 = "May Forth be with you";
    char s2 = 'w';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_6) {
    char *s1 = "School21+";
    char s2 = '+';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_7) {
    char *s1 = "12345678\n";
    char s2 = '\n';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_8) {
    char *s1 = "QWERTYUI\0";
    char s2 = 'R';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_9) {
    char *s1 = "12345 2345 + 45678";
    char s2 = '8';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_10) {
    char *s1 = "Schhol21 + @string.h";
    char s2 = 'h';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_11) {
    char *s1 = "HELLO, WORLD 12345678";
    char s2 = 'W';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_12) {
    char *s1 = "Hello";
    char s2 = 'h';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_13) {
    char *s1 = "Schhol21 + @string.h";
    char s2 = '-';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_14) {
    char *s1 = "\0";
    char s2 = 'h';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_15) {
    char *s1 = "\0\0";
    char s2 = 'h';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_16) {
    char *s1 = "Schhol21 + @string.h\n";
    char s2 = 'O';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_17) {
    char *s1 = "123456789+";
    char s2 = '0';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_18) {
    char *s1 = "@#$^&*(";
    char s2 = '=';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_19) {
    char *s1 = "WERTYUI QWERT 1234567 !@#$^&";
    char s2 = 'M';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_20) {
    char *s1 = "\n\n";
    char s2 = 'h';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_21) {
    char *s1 = "12345678\n";
    char s2 = '7';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_22) {
    char *s1 = "!@#\0";
    char s2 = '#';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_23) {
    char *s1 = ")(*&\n";
    char s2 = '(';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_24) {
    char *s1 = "school\n";
    char s2 = 'o';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_25) {
    char *s1 = "school 1234";
    char s2 = 'l';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_26) {
    char *s1 = "sch&*(ool !@#";
    char s2 = 'l';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_27) {
    char *s1 = "schoo1 ++ d";
    char s2 = 'd';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_28) {
    char *s1 = "sc4oo1 521+ school";
    char s2 = 'l';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_29) {
    char *s1 = "123234567812345679";
    char s2 = '9';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strchr_test_30) {
    char *s1 = "123__)(0";
    char s2 = '0';
    ck_assert_pstr_eq(strchr(s1, s2), s21_strchr(s1, s2));
} END_TEST

START_TEST(s21_strcmp_test_0) {
    char *s1 = "QWERTY";
    char *s2 = "QWERTY";
    ck_assert_int_eq(strcmp(s1, s2), s21_strcmp(s1, s2));
    ck_assert_int_eq(strcmp(s2, s1), s21_strcmp(s2, s1));
    ck_assert_int_eq(strcmp(s1, s1), s21_strcmp(s1, s1));
} END_TEST

START_TEST(s21_strcmp_test_1) {
    char *s1 = "Hello";
    char *s2 = "Hello";
    ck_assert_int_eq(strcmp(s1, s2), s21_strcmp(s1, s2));
    ck_assert_int_eq(strcmp(s2, s1), s21_strcmp(s2, s1));
    ck_assert_int_eq(strcmp(s1, s1), s21_strcmp(s1, s1));
} END_TEST

START_TEST(s21_strcmp_test_2) {
    char *s1 = "HELLO, WORLD";
    char *s2 = "HELLO, WORLD";
    ck_assert_int_eq(strcmp(s1, s2), s21_strcmp(s1, s2));
    ck_assert_int_eq(strcmp(s2, s1), s21_strcmp(s2, s1));
    ck_assert_int_eq(strcmp(s1, s1), s21_strcmp(s1, s1));
} END_TEST

START_TEST(s21_strcmp_test_3) {
    char *s1 = "May Forth be with you";
    char *s2 = "May Forth be with you";
    ck_assert_int_eq(strcmp(s1, s2), s21_strcmp(s1, s2));
    ck_assert_int_eq(strcmp(s2, s1), s21_strcmp(s2, s1));
    ck_assert_int_eq(strcmp(s1, s1), s21_strcmp(s1, s1));
} END_TEST

START_TEST(s21_strcmp_test_4) {
    char *s1 = "Schhol21";
    char *s2 = "School21";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_5) {
    char *s1 = "Schhol21+";
    char *s2 = "School21+";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_6) {
    char *s1 = "12345";
    char *s2 = "12345";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_7) {
    char *s1 = "0";
    char *s2 = "0";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_8) {
    char *s1 = "1234567890";
    char *s2 = "1234567890";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_9) {
    char *s1 = "0987654321";
    char *s2 = "0987654321";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_10) {
    char *s1 = "1234 + 1234";
    char *s2 = "1234 + 1234";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_11) {
    char *s1 = "Hello";
    char *s2 = "world";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_12) {
    char *s1 = "Hello ,world";
    char *s2 = "Hello world";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_13) {
    char *s1 = "HELLO WORLD";
    char *s2 = "HELLO, WORLD";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_14) {
    char *s1 = "HELLO, WORLD";
    char *s2 = "hello, world";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_15) {
    char *s1 = "School21+";
    char *s2 = "School21";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_16) {
    char *s1 = "1234567890";
    char *s2 = "0987654321";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_17) {
    char *s1 = "1111111111";
    char *s2 = "111111111";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_18) {
    char *s1 = "1234 + 1234 = 0";
    char *s2 = "1234 + 1234 = \0";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_19) {
    char *s1 = "!@#$^&*()";
    char *s2 = "QWERTYU";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_20) {
    char *s1 = "May Forth be with you";
    char *s2 = "May 4 be with you";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_21) {
    char *s1 = "!@#$^&*()";
    char *s2 = "!@#";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcmp_test_22) {
    char *s1 = ")(*";
    char *s2 = "!@#$^&*";
    int a1 = strcmp(s1, s2), a2 = s21_strcmp(s1, s2);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strcmp(s2, s1), b2 = s21_strcmp(s2, s1);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strcmp(s1, s1), c2 = s21_strcmp(s1, s1);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strcpy_test_1) {
    char s1[255] = "QWERTY";
    char s2[255] = "E";
    char s3[255] = "E";
    char s4[255] = "QWERTYUIO";
    ck_assert_pstr_eq(strcpy(s1, s2), s21_strcpy(s3, s2));
    ck_assert_pstr_eq(strcpy(s2, s4), s21_strcpy(s2, s4));
} END_TEST

START_TEST(s21_strcspn_test_1) {
    char s1[255] = "QWERTY";
    char s2[255] = "E";
    ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
} END_TEST

START_TEST(s21_strcspn_test_2) {
    char s1[255] = "QWERTY";
    ck_assert_int_eq(strcspn(s1, s1), s21_strcspn(s1, s1));
} END_TEST

START_TEST(s21_strcspn_test_3) {
    char s1[255] = "QWERTY";
    char s2[255] = "E";
    ck_assert_int_eq(strcspn(s2, s1), s21_strcspn(s2, s1));
} END_TEST

START_TEST(s21_strcspn_test_4) {
    char s1[255] = "QWERTY";
    char s3[255] = "MFE";
    ck_assert_int_eq(strcspn(s1, s3), s21_strcspn(s1, s3));
} END_TEST

START_TEST(s21_strcspn_test_5) {
    char s1[255] = "QWERTY\0";
    char s4[1] = {'\0'};
    ck_assert_int_eq(strcspn(s1, s4), s21_strcspn(s1, s4));
} END_TEST

START_TEST(s21_strcspn_test_6) {
    char s1[255] = "";
    char s4[1] = "";
    ck_assert_int_eq(strcspn(s4, s1), s21_strcspn(s4, s1));
} END_TEST

START_TEST(s21_strcspn_test_7) {
    char s1[255] = "\n\0";
    char s4[1] = "\n";
    ck_assert_int_eq(strcspn(s4, s1), s21_strcspn(s4, s1));
} END_TEST

START_TEST(s21_strcspn_test_8) {
    char s1[255] = "______Helllo______";
    char s4[100] = "______Helllo____________Helllo______";
    ck_assert_int_eq(strcspn(s4, s1), s21_strcspn(s4, s1));
} END_TEST

START_TEST(s21_strcspn_test_9) {
    char s1[255] = "______Helllo______";
    char s4[100] = "  ______Helllo______ ";
    ck_assert_int_eq(strcspn(s4, s1), s21_strcspn(s4, s1));
} END_TEST

START_TEST(s21_strcspn_test_10) {
    char s1[3] = "\0\n";
    char s4[100] = "______Helllo_____\0_______Helllo______\n";
    ck_assert_int_eq(strcspn(s4, s1), s21_strcspn(s4, s1));
} END_TEST

START_TEST(s21_strcspn_test_11) {
    char s1[100] = "こんにちは世界";
    char s4[100] = "こんにちは世界";
    ck_assert_int_eq(strcspn(s4, s1), s21_strcspn(s4, s1));
} END_TEST

START_TEST(s21_strcspn_test_12) {
    char s1[100] = "こんにちは世界";
    char s4[100] = "は世界";
    ck_assert_int_eq(strcspn(s4, s1), s21_strcspn(s4, s1));
} END_TEST

START_TEST(s21_strerror_test_0) {
    for (int i = 0; i < 107; i++) {
        ck_assert_pstr_eq(strerror(i), s21_strerror(i));
    }
} END_TEST

START_TEST(s21_strerror_test_1) {
    int num = 12;
    ck_assert_pstr_eq(strerror(num), s21_strerror(num));
} END_TEST

START_TEST(s21_strerror_test_2) {
    int num = 500;
    ck_assert_pstr_eq(strerror(num), s21_strerror(num));
} END_TEST

START_TEST(s21_strerror_test_3) {
    int num = -5;
    ck_assert_pstr_eq(strerror(num), s21_strerror(num));
} END_TEST

START_TEST(s21_strerror_test_4) {
    int num = 0;
    ck_assert_pstr_eq(strerror(num), s21_strerror(num));
} END_TEST

START_TEST(s21_strerror_test_5) {
    int num = 106;
    ck_assert_pstr_eq(strerror(num), s21_strerror(num));
} END_TEST

START_TEST(s21_strerror_test_6) {
    int num = 107;
    ck_assert_pstr_eq(strerror(num), s21_strerror(num));
} END_TEST

START_TEST(s21_strerror_test_7) {
    int num = -1;
    ck_assert_pstr_eq(strerror(num), s21_strerror(num));
} END_TEST

START_TEST(s21_strerror_test_8) {
    char num = '5';
    ck_assert_pstr_eq(strerror(num), s21_strerror(num));
} END_TEST

START_TEST(s21_strerror_test_9) {
    char num = 'h';
    ck_assert_pstr_eq(strerror(num), s21_strerror(num));
} END_TEST

START_TEST(s21_strerror_test_10) {
    double num = 1223.00002212123;
    ck_assert_pstr_eq(strerror(num), s21_strerror(num));
} END_TEST

START_TEST(s21_strerror_test_11) {
    float num = 2.334;
    ck_assert_pstr_eq(strerror(num), s21_strerror(num));
} END_TEST

START_TEST(s21_strlen_test_1) {
    char *s1 = "QWERTY";
    char *s2 = "Q";
    char *s3 = "";
    ck_assert_int_eq(strlen(s1), s21_strlen(s1));
    ck_assert_int_eq(strlen(s2), s21_strlen(s2));
    ck_assert_int_eq(strlen(s3), s21_strlen(s3));
} END_TEST

START_TEST(s21_strlen_test_2) {
    char s1[1] = "\0";
    ck_assert_int_eq(strlen(s1), s21_strlen(s1));
} END_TEST

START_TEST(s21_strlen_test_3) {
    char *s1 = "\n";
    ck_assert_int_eq(strlen(s1), s21_strlen(s1));
} END_TEST

START_TEST(s21_strlen_test_4) {
    char *s1 = "こんにちは世界";
    ck_assert_int_eq(strlen(s1), s21_strlen(s1));
} END_TEST

START_TEST(s21_strlen_test_5) {
    char *s1 = "привет мир";
    ck_assert_int_eq(strlen(s1), s21_strlen(s1));
} END_TEST

START_TEST(s21_strlen_test_6) {
    char *s1 = "привет \0мир";
    ck_assert_int_eq(strlen(s1), s21_strlen(s1));
} END_TEST
START_TEST(s21_strlen_test_7) {
    char *s1 = "привет \nмир";
    ck_assert_int_eq(strlen(s1), s21_strlen(s1));
} END_TEST

START_TEST(s21_strlen_test_8) {
    char *s1 = "こんにち\0は世界";
    ck_assert_int_eq(strlen(s1), s21_strlen(s1));
} END_TEST

START_TEST(s21_strncat_test_1) {
    char s1[255] = "QWERTY";
    char s2[255] = "QWERTY";
    char s3[255] = "E";
    ck_assert_pstr_eq(strncat(s1, s3, 6), s21_strncat(s2, s3, 6));
} END_TEST

START_TEST(s21_strncat_test_2) {
    char s1[255] = "";
    char s2[255] = "";
    char s3[255] = "qwe";
    ck_assert_pstr_eq(strncat(s1, s3, 6), s21_strncat(s2, s3, 6));
} END_TEST

START_TEST(s21_strncat_test_3) {
    char s1[255] = "QWERTY";
    char s2[255] = "QWERTY";
    char s3[255] = "E";
    ck_assert_pstr_eq(strncat(s1, s3, 0), s21_strncat(s2, s3, 0));
    ck_assert_int_eq(strlen(s1), strlen(s2));
} END_TEST

START_TEST(s21_strncat_test_4) {
    char s1[255000] = "5634";
    char s2[255000] = "5634";
    char s3[255000] = ".9";
    ck_assert_pstr_eq(strncat(s1, s3, 0), s21_strncat(s2, s3, 0));
} END_TEST

START_TEST(s21_strncat_test_5) {
    char s1[255] = "QWERTY";
    char s2[255] = "E";
    ck_assert_pstr_eq(strncat(s1, s2, 6), s21_strncat(s1, s2, 6));
} END_TEST

START_TEST(s21_strncat_test_6) {
    char s1[255] = "QWERTY";
    char s2[255] = "E";
    ck_assert_pstr_eq(strncat(s1, s2, 6), s21_strncat(s1, s2, 6));
} END_TEST

START_TEST(s21_strncmp_test_0) {
    char s1[255] = "QWERTY";
    char s2[255] = "E";
    int a1 = strncmp(s1, s2, 6), a2 = s21_strncmp(s1, s2, 6);
    if (a1 < 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 < 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    int b1 = strncmp(s1, s1, 6), b2 = s21_strncmp(s1, s1, 6);
    if (b1 < 0) {
        b1 = -1;
    } else {
        b1 = 1;
    }
    if (b2 < 0) {
        b2 = -1;
    } else {
        b2 = 1;
    }
    int c1 = strncmp("ABC", "DEF", 6), c2 = s21_strncmp("ABC", "DEF", 6);
    if (c1 < 0) {
        c1 = -1;
    } else {
        c1 = 1;
    }
    if (c2 < 0) {
        c2 = -1;
    } else {
        c2 = 1;
    }
    ck_assert_int_eq(a1, a2);
    ck_assert_int_eq(b1, b2);
    ck_assert_int_eq(c1, c2);
} END_TEST

START_TEST(s21_strncmp_test_1) {
    char s1[255] = "HELLO, WORLD";
    char s2[255] = "HELLO, WORLD";
    ck_assert_int_eq(strncmp(s1, s2, 15), s21_strncmp(s1, s2, 15));
} END_TEST

START_TEST(s21_strncmp_test_2) {
    char s1[255] = "123456789";
    char s2[255] = "123456789";
    ck_assert_int_eq(strncmp(s1, s2, 10), s21_strncmp(s1, s2, 10));
} END_TEST

START_TEST(s21_strncmp_test_3) {
    char s1[255] = "hello, world";
    char s2[255] = "hello, world";
    ck_assert_int_eq(strncmp(s1, s2, 4), s21_strncmp(s1, s2, 4));
} END_TEST

START_TEST(s21_strncmp_test_4) {
    char s1[255] = "hello, world";
    char s2[255] = "hello, world";
    ck_assert_int_eq(strncmp(s1, s2, 15), s21_strncmp(s1, s2, 15));
} END_TEST

START_TEST(s21_strncmp_test_5) {
    char s1[255] = "School21";
    char s2[255] = "School21";
    ck_assert_int_eq(strncmp(s1, s2, 8), s21_strncmp(s1, s2, 8));
} END_TEST

START_TEST(s21_strncmp_test_6) {
    char s1[255] = "School21+";
    char s2[255] = "School21+";
    ck_assert_int_eq(strncmp(s1, s2, 8), s21_strncmp(s1, s2, 8));
} END_TEST

START_TEST(s21_strncmp_test_7) {
    char s1[255] = "School21+";
    char s2[255] = "School21+";
    ck_assert_int_eq(strncmp(s1, s2, 3), s21_strncmp(s1, s2, 3));
} END_TEST

START_TEST(s21_strncmp_test_8) {
    char s1[255] = "May Forth be with you";
    char s2[255] = "May Forth be with you";
    ck_assert_int_eq(strncmp(s1, s2, 20), s21_strncmp(s1, s2, 20));
} END_TEST

START_TEST(s21_strncmp_test_9) {
    char s1[255] = "May Forth be with you";
    char s2[255] = "May Forth be with you";
    ck_assert_int_eq(strncmp(s1, s2, 2), s21_strncmp(s1, s2, 2));
} END_TEST

START_TEST(s21_strncmp_test_10) {
    char s1[255] = "1234567890";
    char s2[255] = "1234567890";
    ck_assert_int_eq(strncmp(s1, s2, 6), s21_strncmp(s1, s2, 6));
} END_TEST

START_TEST(s21_strncmp_test_11) {
    char s1[255] = "\0\0";
    char s2[255] = "\0\0";
    ck_assert_int_eq(strncmp(s1, s2, 4), s21_strncmp(s1, s2, 4));
} END_TEST

START_TEST(s21_strncmp_test_12) {
    char s1[255] = "";
    char s2[255] = "1234567890";
    int a1 = strncmp(s1, s2, 6), a2 = s21_strncmp(s1, s2, 6);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_13) {
    char s1[255] = "1234567890";
    char s2[255] = "";
    int a1 = strncmp(s1, s2, 6), a2 = s21_strncmp(s1, s2, 6);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_14) {
    char s1[255] = "12";
    char s2[255] = "12\n";
    int a1 = strncmp(s1, s2, 6), a2 = s21_strncmp(s1, s2, 6);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_15) {
    char s1[255] = "School21";
    char s2[255] = "School21+";
    int a1 = strncmp(s1, s2, 10), a2 = s21_strncmp(s1, s2, 10);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_16) {
    char s1[255] = "School21+\n";
    char s2[255] = "Schhol21+\0";
    int a1 = strncmp(s1, s2, 10), a2 = s21_strncmp(s1, s2, 10);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_17) {
    char s1[255] = "@string.h";
    char s2[255] = "string.h";
    int a1 = strncmp(s1, s2, 10), a2 = s21_strncmp(s1, s2, 10);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_18) {
    char s1[255] = "11111111111111";
    char s2[255] = "1234567890";
    int a1 = strncmp(s1, s2, 1), a2 = s21_strncmp(s1, s2, 1);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_19) {
    char s1[255] = "!@#$^&*(";
    char s2[255] = "!@#$^&*(";
    int a1 = strncmp(s1, s2, 10), a2 = s21_strncmp(s1, s2, 10);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_20) {
    char s1[255] = "1234+";
    char s2[255] = "1234-";
    int a1 = strncmp(s1, s2, 5), a2 = s21_strncmp(s1, s2, 5);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_21) {
    char s1[255] = "\n";
    char s2[255] = "\n";
    int a1 = strncmp(s1, s2, 5), a2 = s21_strncmp(s1, s2, 5);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_22) {
    char s1[255] = "\n\n";
    char s2[255] = "\n";
    int a1 = strncmp(s1, s2, 5), a2 = s21_strncmp(s1, s2, 5);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_23) {
    char s1[255] = "!@#$";
    char s2[255] = "++";
    int a1 = strncmp(s1, s2, 2), a2 = s21_strncmp(s1, s2, 2);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncmp_test_24) {
    char s1[255] = "+_";
    char s2[255] = "&*^$";
    int a1 = strncmp(s1, s2, 10), a2 = s21_strncmp(s1, s2, 10);
    if (a1 == 0) {
        a1 = -1;
    } else {
        a1 = 1;
    }
    if (a2 == 0) {
        a2 = -1;
    } else {
        a2 = 1;
    }
    ck_assert_int_eq(a1, a2);
} END_TEST

START_TEST(s21_strncpy_test_1) {
    char s1[255] = "QWERTY";
    char s2[255] = "Eeee";
    ck_assert_pstr_eq(strncpy(s1, s2, 2), s21_strncpy(s1, s2, 2));
} END_TEST

START_TEST(s21_strpbrk_test_1) {
    char *s1 = "QWERTY";
    char *s2 = "WE";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
    ck_assert_pstr_eq(strpbrk(s2, s1), s21_strpbrk(s2, s1));
    ck_assert_pstr_eq(strpbrk(s1, s1), s21_strpbrk(s1, s1));
    ck_assert_pstr_eq(strpbrk("", ""), s21_strpbrk("", ""));
} END_TEST

START_TEST(s21_strpbrk_test_2) {
    char *s1 = "QWERTY";
    char *s2 = "VBNMCXZKLMNNZXCCS";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
} END_TEST

START_TEST(s21_strpbrk_test_3) {
    char *s1 = "VBNMCXZKLMNNZXCCS";
    char *s2 = "QWERTY";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
} END_TEST

START_TEST(s21_strpbrk_test_4) {
    char *s1 = "Hello q";
    char *s2 = "QQQQQQQQQQQQQ";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
} END_TEST

START_TEST(s21_strpbrk_test_5) {
    char *s1 = "Q Hello ";
    char *s2 = "QQQQQQQQQQQQQ";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
} END_TEST

START_TEST(s21_strpbrk_test_6) {
    char *s1 = "Hello Q";
    char *s2 = "QQQQQQQQQQQQQ";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
} END_TEST

START_TEST(s21_strpbrk_test_7) {
    char *s1 = "QQQHello Q";
    char *s2 = "QQQQQQQQQQQQQ";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
} END_TEST

START_TEST(s21_strpbrk_test_8) {
    char *s1 = "привет мир";
    char *s2 = "р";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
} END_TEST

START_TEST(s21_strpbrk_test_9) {
    char *s1 = "привет мир\0";
    char *s2 = "\0";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
} END_TEST

START_TEST(s21_strpbrk_test_10) {
    char *s1 = "привет мир\n";
    char *s2 = "\0";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
} END_TEST

START_TEST(s21_strpbrk_test_11) {
    char *s1 = "привет мир\n";
    char *s2 = "";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
} END_TEST

START_TEST(s21_strpbrk_test_12) {
    char *s1 = "";
    char *s2 = "привет мир\n";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_1) {
    char *s1 = "QWERTY";
    char s2 = 'E';
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_2) {
    char *s1 = "QWERT1Y";
    char s2 = 1;
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_3) {
    char *s1 = "QWERTY";
    char s2 = 'M';
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_4) {
    char *s1 = "QWERTY";
    char s2 = '9';
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_5) {
    char *s1 = "QWEEEERTY";
    char s2 = 'E';
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_6) {
    char *s1 = "QWERTY";
    char s2 = 'E';
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_7) {
    char *s1 = "QWERTY";
    int s2 = -6;
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_8) {
    char *s1 = "QWERTY";
    int s2 = 6;
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_9) {
    char *s1 = "QWERTY";
    float s2 = -6.0042;
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_10) {
    char *s1 = "QWERTY";
    float s2 = 6.00232;
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_11) {
    char *s1 = "";
    int s2 = 1;
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_12) {
    char *s1 = "Qwerty";
    char s2 = '\0';
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_13) {
    char *s1 = "";
    char s2 = ' ';
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_14) {
    char *s1 = "QWERTY";
    char s2 = 'e';
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_15) {
    char *s1 = "こんにちは世界";
    char s2 = '1';
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strrchr_test_16) {
    char *s1 = "привет мир";
    char s2 = ' ';
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

START_TEST(s21_strspn_test_1) {
    char *s1 = "QWERTY";
    char *s2 = "E";
    char *s3 = "5";
    char *s4 = "3764728asdsa2312";
    char *s5 = "1234567890";
    ck_assert_int_eq(strspn(s1, s2), s21_strspn(s1, s2));
    ck_assert_int_eq(strspn(s2, s1), s21_strspn(s2, s1));
    ck_assert_int_eq(strspn(s1, s1), s21_strspn(s1, s1));
    ck_assert_int_eq(strspn(s1, s3), s21_strspn(s1, s3));
    ck_assert_int_eq(strspn(s4, s5), s21_strspn(s4, s5));
} END_TEST

START_TEST(s21_strspn_test_2) {
    char *s1 = "QWERTY";
    char *s2 = "";
    ck_assert_int_eq(strspn(s1, s2), s21_strspn(s1, s2));
} END_TEST

START_TEST(s21_strspn_test_3) {
    char *s1 = "";
    char *s2 = "QWERTY";
    ck_assert_int_eq(strspn(s1, s2), s21_strspn(s1, s2));
} END_TEST

START_TEST(s21_strspn_test_4) {
    char *s1 = "\n";
    char *s2 = "QWERTY";
    ck_assert_int_eq(strspn(s1, s2), s21_strspn(s1, s2));
} END_TEST

START_TEST(s21_strspn_test_5) {
    char *s1 = "\0";
    char *s2 = "QWERTY";
    ck_assert_int_eq(strspn(s1, s2), s21_strspn(s1, s2));
} END_TEST

START_TEST(s21_strspn_test_6) {
    char *s1 = "\n";
    char *s2 = "QWERTY";
    ck_assert_int_eq(strspn(s1, s2), s21_strspn(s1, s2));
} END_TEST


START_TEST(s21_strspn_test_7) {
    char *s1 = "\nQWERTY";
    char *s2 = "\n";
    ck_assert_int_eq(strspn(s1, s2), s21_strspn(s1, s2));
} END_TEST

START_TEST(s21_strspn_test_8) {
    char *s1 = "QWERTY";
    char *s2 = "QWER";
    ck_assert_int_eq(strspn(s1, s2), s21_strspn(s1, s2));
} END_TEST

START_TEST(s21_strstr_test_1) {
    char *s1 = "QWERTY";
    char *s2 = "E";
    char *s3 = "";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
    ck_assert_pstr_eq(strstr(s3, s2), s21_strstr(s3, s2));
    ck_assert_pstr_eq(strstr(s1, s3), s21_strstr(s1, s3));
} END_TEST

START_TEST(s21_strstr_test_2) {
    char *s1 = "QWERTY\n";
    char *s2 = "\n";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
} END_TEST

START_TEST(s21_strstr_test_3) {
    char *s1 = "QWERTY\n";
    char *s2 = "\0";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
} END_TEST

START_TEST(s21_strstr_test_4) {
    char *s1 = "\n";
    char *s2 = "\n";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
} END_TEST

START_TEST(s21_strstr_test_5) {
    char *s1 = "\0";
    char *s2 = "\0";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
} END_TEST

START_TEST(s21_strstr_test_6) {
    char *s1 = "QWERTY";
    char *s2 = "M";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
} END_TEST

START_TEST(s21_strstr_test_7) {
    char *s1 = "";
    char *s2 = "";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
} END_TEST

START_TEST(s21_strstr_test_8) {
    char *s1 = "";
    char *s2 = "Qwerty";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
} END_TEST


START_TEST(s21_strstr_test_9) {
    char *s1 = "こんにち\0は世界";
    char *s2 = "こんにち\0は世界";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
} END_TEST

START_TEST(s21_strstr_test_10) {
    char *s1 = "こんにちは世界";
    char *s2 = "んにちは世界";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
} END_TEST

START_TEST(s21_strstr_test_11) {
    char *s1 = "こんにち\0は世界";
    char *s2 = "は世界";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
} END_TEST

START_TEST(s21_strstr_test_12) {
    char *s1 = "привет мир";
    char *s2 = "мир";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
} END_TEST

START_TEST(s21_strstr_test_13) {
    char *s1 = "Qwerty111";
    char *s2 = "Qwerty";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
    ck_assert_pstr_eq(strstr(s2, s1), s21_strstr(s2, s1));
} END_TEST

START_TEST(s21_strtok_test_0) {
    char s1[255] = "Q/WERTY/sadgfhg.gfhfjset/erAEGT";
    char s2[255] = "E . / ";
    char *s10 = S21_NULL;
    char s12[255] = "";
    char* s3 = NULL;
    char s4[255] = "E";
    char s5[1] = "";
    char s6[255] = "+-+ABOBA +=-+- ABOBA -=-+-+HELLO-";
    char s7[255] = "+- =";
    ck_assert_pstr_eq(strtok(s1, s2), s21_strtok(s1, s2));
    ck_assert_pstr_eq(strtok(s1, s1), s21_strtok(s1, s1));
    ck_assert_pstr_eq(strtok(s2, s1), s21_strtok(s2, s1));
    ck_assert_pstr_eq(strtok(s3, s3), s21_strtok(s3, s3));
    ck_assert_pstr_eq(strtok(s4, s4), s21_strtok(s4, s4));
    ck_assert_pstr_eq(strtok(s10, s12), s21_strtok(s10, s12));
    ck_assert_pstr_eq(strtok(s4, s5), s21_strtok(s4, s5));
    ck_assert_pstr_eq(strtok(s1, s5), s21_strtok(s1, s5));
    ck_assert_pstr_eq(strtok(s5, s5), s21_strtok(s5, s5));
    ck_assert_pstr_eq(strtok(s5, s4), s21_strtok(s5, s4));
    ck_assert_pstr_eq(strtok(s5, s1), s21_strtok(s5, s1));
    ck_assert_pstr_eq(strtok(s6, s7), s21_strtok(s6, s7));
} END_TEST

START_TEST(s21_strtok_test_1) {
    char str_24[15] = "This,is,my,way";
    char str_25[2] = ",";
    ck_assert_pstr_eq(strtok(str_24, str_25), s21_strtok(str_24, str_25));
} END_TEST

START_TEST(s21_strtok_test_3) {
    char str1[6] = "delim";
    char str2[2] = "f";
    ck_assert_pstr_eq(strtok(str1, str2), s21_strtok(str1, str2));
} END_TEST

START_TEST(s21_strtok_test_5) {
    char str[50] = "Per, :aspera;ad astra";
    char str1[10] = " ,:\n\0";
    ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
} END_TEST

START_TEST(s21_strtok_test_6) {
    char str[50] = "Per, :aspera;ad. astra";
    char str1[10] = ",:\n\0";
    ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
} END_TEST

START_TEST(s21_strtok_test_7) {
    char str[50] = "Per :aspn::::::era;ad. ast::::ra:";
    char str1[10] = ":";
    ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
} END_TEST

START_TEST(s21_strtok_test_8) {
    char str[50] = "test1/test2/test3/test4";
    char str1[10] = "/";
    ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
} END_TEST

START_TEST(s21_strtok_test_9) {
    char str[50] = "AadacAdxa";
    char str1[10] = "a";
    ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
} END_TEST

START_TEST(s21_strtok_test_11) {
    char str[] = "A";
    char str1[] = "\0";
    ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
} END_TEST

START_TEST(s21_strtok_test_13) {
    char str_24[15] = "This,is,my,way";
    char str_25[2] = ",";
    ck_assert_pstr_eq(strtok(str_24, str_25), s21_strtok(str_24, str_25));
} END_TEST

START_TEST(s21_strtok_test_15) {
    char str1[6] = "delim";
    char str2[2] = "f";
    ck_assert_pstr_eq(strtok(str1, str2), s21_strtok(str1, str2));
} END_TEST

START_TEST(s21_strtok_test_16) {
    char str1[] = "qwerty";
    char str2[] = "1234";
    ck_assert_pstr_eq(strtok(str1, str2), s21_strtok(str1, str2));
} END_TEST

START_TEST(s21_strtok_test_17) {
    char str1[22] = "Per, :aspera;ad astra";
    char str2[3] = " ";
    ck_assert_pstr_eq(strtok(str1, str2), s21_strtok(str1, str2));
} END_TEST

START_TEST(s21_strtok_test_18) {
    char str4_1[] = "/testing/with/original/string.h/";
    char str4_2[] = "/testing/with/original/string.h/";
    char del4[3] = "/";
    char * nstr_1, * nstr_2;
    nstr_1 = strtok(str4_1, del4);
    nstr_2 = s21_strtok(str4_2, del4);
    while (nstr_1 != S21_NULL) {
        ck_assert_pstr_eq(nstr_1, nstr_2);
        nstr_1 = strtok(S21_NULL, del4);
        nstr_2 = s21_strtok(S21_NULL, del4);
    }
} END_TEST

START_TEST(s21_strtok_test_19) {
    char str4_1[] = ". . testing with original string.h";
    char str4_2[] = ". . testing with original string.h";
    char del4[3] = ". ";
    char * nstr_1, * nstr_2;
    nstr_1 = strtok(str4_1, del4);
    nstr_2 = s21_strtok(str4_2, del4);
    while (nstr_1 != S21_NULL) {
        ck_assert_pstr_eq(nstr_1, nstr_2);
        nstr_1 = strtok(S21_NULL, del4);
        nstr_2 = s21_strtok(S21_NULL, del4);
    }
} END_TEST

START_TEST(s21_strtok_test_20) {
    char str4_1[] = "testing with original string.h";
    char str4_2[] = "testing with original string.h";
    char del4[3] = ". ";
    char * nstr_1, * nstr_2;
    nstr_1 = strtok(str4_1, del4);
    nstr_2 = s21_strtok(str4_2, del4);
    while (nstr_1 != S21_NULL) {
        ck_assert_pstr_eq(nstr_1, nstr_2);
        nstr_1 = strtok(S21_NULL, del4);
        nstr_2 = s21_strtok(S21_NULL, del4);
    }
} END_TEST

START_TEST(s21_strtok_test_21) {
    char str1[] = "Aboba++Floppa_! Kotya====!Shleppa";
    char str2[] = "Aboba++Floppa_! Kotya====!Shleppa";
    const char delims[] = "+_! =";
    char *got = s21_strtok(str1, delims);
    char *expected = strtok(str2, delims);
    ck_assert_uint_eq(s21_strlen(got), s21_strlen(expected));
    ck_assert_pstr_eq(got, expected);
    while (got && expected) {
        got = s21_strtok(S21_NULL, delims);
        expected = strtok(S21_NULL, delims);
        if (got || expected) {
            ck_assert_pstr_eq(got, expected);
        } else {
            ck_assert_ptr_null(got);
            ck_assert_ptr_null(expected);
        }
    }
} END_TEST

START_TEST(s21_strtok_test_22) {
    char str1[] = "++Aboba++Floppa_! Kotya===!Shleppa+++ A +";
    char str2[] = "++Aboba++Floppa_! Kotya===!Shleppa+++ A +";
    const char delims[] = "+_! =";
    char *got = s21_strtok(str1, delims);
    char *expected = strtok(str2, delims);
    ck_assert_uint_eq(s21_strlen(got), s21_strlen(expected));
    ck_assert_pstr_eq(got, expected);
    while (got && expected) {
        got = s21_strtok(S21_NULL, delims);
        expected = strtok(S21_NULL, delims);
        if (got || expected) {
            ck_assert_pstr_eq(got, expected);
        } else {
            ck_assert_ptr_null(got);
            ck_assert_ptr_null(expected);
        }
    }
} END_TEST

START_TEST(s21_strtok_test_23) {
    char str1[] = "Aboba+Anuroba_Floppa!Kotya_Kekus";
    char str2[] = "Aboba+Anuroba_Floppa!Kotya_Kekus";
    const char delims[] = "+_! =";
    char *got = s21_strtok(str1, delims);
    char *expected = strtok(str2, delims);
    ck_assert_uint_eq(s21_strlen(got), s21_strlen(expected));
    ck_assert_pstr_eq(got, expected);
    while (got && expected) {
        got = s21_strtok(S21_NULL, delims);
        expected = strtok(S21_NULL, delims);
        if (got || expected) {
            ck_assert_pstr_eq(got, expected);
        } else {
            ck_assert_ptr_null(got);
            ck_assert_ptr_null(expected);
        }
    }
} END_TEST

START_TEST(s21_strtok_test_25) {
    char str1[] = "++++++++";
    char str2[] = "++++++++";
    const char delims[] = "+_! =";
    char *got = s21_strtok(str1, delims);
    char *expected = strtok(str2, delims);
    ck_assert_ptr_null(got);
    ck_assert_ptr_null(expected);
} END_TEST

START_TEST(s21_strtok_test_26) {
    char str1[] = "Aboba_Floppa_Roba";
    char str2[] = "Aboba_Floppa_Roba";
    const char delims[] = "+_! =";
    char *got = s21_strtok(str1, delims);
    char *expected = strtok(str2, delims);
    ck_assert_uint_eq(s21_strlen(got), s21_strlen(expected));
    ck_assert_pstr_eq(got, expected);
    int i = 5;
    while (i) {
        got = s21_strtok(S21_NULL, delims);
        expected = strtok(S21_NULL, delims);
        i--;
        if (got || expected) {
            ck_assert_pstr_eq(got, expected);
        } else {
            ck_assert_ptr_null(got);
            ck_assert_ptr_null(expected);
        }
    }
} END_TEST

START_TEST(s21_strtok_test_27) {
    char str1[] = "Roba++++Kepa++A++++B__V";
    char str2[] = "Roba++++Kepa++A++++B__V";
    const char delims[] = "+_! =";
    char *got = s21_strtok(str1, delims);
    char *expected = strtok(str2, delims);
    ck_assert_uint_eq(s21_strlen(got), s21_strlen(expected));
    ck_assert_pstr_eq(got, expected);
    while (got && expected) {
        got = s21_strtok(S21_NULL, delims);
        expected = strtok(S21_NULL, delims);
        if (got || expected) {
            ck_assert_pstr_eq(got, expected);
        } else {
            ck_assert_ptr_null(got);
            ck_assert_ptr_null(expected);
        }
    }
} END_TEST

START_TEST(s21_strtok_test_28) {
    char str1[] = "Aboba__+Floppa_  Roba";
    char str2[] = "Aboba__+Floppa_  Roba";
    const char delims[] = "+_! =";
    char *got = s21_strtok(str1, delims);
    char *expected = strtok(str2, delims);
    ck_assert_uint_eq(s21_strlen(got), s21_strlen(expected));
    ck_assert_pstr_eq(got, expected);
    while (got && expected) {
        got = s21_strtok(S21_NULL, delims);
        expected = strtok(S21_NULL, delims);
        if (got || expected) {
            ck_assert_pstr_eq(got, expected);
        } else {
            ck_assert_ptr_null(got);
            ck_assert_ptr_null(expected);
        }
    }
} END_TEST

START_TEST(s21_strtok_test_29) {
    char str1[] = "Aboba__Floppa_+++Roba_Kepa";
    char str2[] = "Aboba__Floppa_+++Roba_Kepa";
    const char delims[] = "+_! =";
    char *got = s21_strtok(str1, delims);
    char *expected = strtok(str2, delims);
    ck_assert_uint_eq(s21_strlen(got), s21_strlen(expected));
    ck_assert_pstr_eq(got, expected);
    while (got && expected) {
        got = s21_strtok(S21_NULL, delims);
        expected = strtok(S21_NULL, delims);
        if (got || expected) {
            ck_assert_pstr_eq(got, expected);
        } else {
            ck_assert_ptr_null(got);
            ck_assert_ptr_null(expected);
        }
    }
} END_TEST

START_TEST(s21_strtok_test_30) {
    char str1[] = "     Aboba__+ Flo!ppa_   Roba+";
    char str2[] = "     Aboba__+ Flo!ppa_   Roba+";
    const char delims[] = "+_! =";
    char *got = s21_strtok(str1, delims);
    char *expected = strtok(str2, delims);
    ck_assert_uint_eq(s21_strlen(got), s21_strlen(expected));
    ck_assert_pstr_eq(got, expected);
    while (got || expected) {
        got = s21_strtok(S21_NULL, delims);
        expected = strtok(S21_NULL, delims);
        if (got || expected) {
            ck_assert_pstr_eq(got, expected);
        } else {
            ck_assert_ptr_null(got);
            ck_assert_ptr_null(expected);
        }
    }
} END_TEST

START_TEST(s21_strtok_test_31) {
    char str1[] = "!Stepa__ !M!ish a____Anton+An!!!drey";
    char str2[] = "!Stepa__ !M!ish a____Anton+An!!!drey";
    const char delims[] = "+_! =";
    char *got = s21_strtok(str1, delims);
    char *expected = strtok(str2, delims);
    ck_assert_uint_eq(s21_strlen(got), s21_strlen(expected));
    ck_assert_pstr_eq(got, expected);
    while (got || expected) {
        got = s21_strtok(S21_NULL, delims);
        expected = strtok(S21_NULL, delims);
        if (got || expected) {
            ck_assert_pstr_eq(got, expected);
        } else {
            ck_assert_ptr_null(got);
            ck_assert_ptr_null(expected);
        }
    }
} END_TEST

START_TEST(s21_strtok_test_32) {
    char str1[] = "!       A!B!C!D!E!!F!!G";
    char str2[] = "!       A!B!C!D!E!!F!!G";
    const char delims[] = "+_! =";
    char *got = s21_strtok(str1, delims);
    char *expected = strtok(str2, delims);
    ck_assert_uint_eq(s21_strlen(got), s21_strlen(expected));
    ck_assert_pstr_eq(got, expected);
    while (got || expected) {
        got = s21_strtok(S21_NULL, delims);
        expected = strtok(S21_NULL, delims);
        if (got || expected) {
            ck_assert_pstr_eq(got, expected);
            ck_assert_uint_eq(s21_strlen(got), s21_strlen(expected));
        } else {
            ck_assert_ptr_null(got);
            ck_assert_ptr_null(expected);
        }
    }
} END_TEST

START_TEST(s21_to_upper_test_1) {
    char s1[255] = "Hello, School 21 =)!";
    char s2[255] = "HELLO, SCHOOL 21 =)!";
    ck_assert_pstr_eq(s2, s21_to_upper(s1));
} END_TEST


START_TEST(s21_to_upper_test_2) {
    char s1[255] = "SCHOOL21";
    char s2[255] = "SCHOOL21";
    ck_assert_pstr_eq(s2, s21_to_upper(s1));
} END_TEST


START_TEST(s21_to_upper_test_3) {
    char s1[255] = "school21";
    char s2[255] = "SCHOOL21";
    ck_assert_pstr_eq(s2, s21_to_upper(s1));
} END_TEST


START_TEST(s21_to_upper_test_4) {
    char s1[255] = "schOOl21";
    char s2[255] = "SCHOOL21";
    ck_assert_pstr_eq(s2, s21_to_upper(s1));
} END_TEST

START_TEST(s21_to_upper_test_5) {
    char s1[255] = "1274672385371&";
    char s2[255] = "1274672385371&";
    ck_assert_pstr_eq(s2, s21_to_upper(s1));
} END_TEST

START_TEST(s21_to_upper_test_6) {
    char s1[255] = "привет мир";
    char s2[255] = "привет мир";
    ck_assert_pstr_eq(s2, s21_to_upper(s1));
} END_TEST

START_TEST(s21_to_upper_test_7) {
    char s1[255] = "JJJJ";
    char s2[255] = "JJJJ";
    ck_assert_pstr_eq(s2, s21_to_upper(s1));
} END_TEST

START_TEST(s21_to_lower_test_1) {
    char s1[255] = "HELLO, SCHOOL 21 =)!";
    char s2[255] = "hello, school 21 =)!";
    ck_assert_pstr_eq(s2, s21_to_lower(s1));
} END_TEST

START_TEST(s21_to_lower_test_2) {
    char s1[255] = "SCHOOL21";
    char s2[255] = "school21";
    ck_assert_pstr_eq(s2, s21_to_lower(s1));
} END_TEST

START_TEST(s21_to_lower_test_3) {
    char s1[255] = "school21";
    char s2[255] = "school21";
    ck_assert_pstr_eq(s2, s21_to_lower(s1));
} END_TEST

START_TEST(s21_to_lower_test_4) {
    char s1[255] = "schOOl21";
    char s2[255] = "school21";
    ck_assert_pstr_eq(s2, s21_to_lower(s1));
} END_TEST

START_TEST(s21_to_lower_test_5) {
    char s1[255] = "1274672385371&";
    char s2[255] = "1274672385371&";
    ck_assert_pstr_eq(s2, s21_to_lower(s1));
} END_TEST

START_TEST(s21_to_lower_test_6) {
    char s1[255] = "JJJJ";
    char s2[255] = "jjjj";
    ck_assert_pstr_eq(s2, s21_to_lower(s1));
} END_TEST

START_TEST(s21_to_lower_test_7) {
    char s1[255] = "";
    char s2[255] = "";
    ck_assert_pstr_eq(s2, s21_to_lower(s1));
} END_TEST

START_TEST(s21_to_lower_test_8) {
    char s1[255] = "\0";
    char s2[255] = "\0";
    ck_assert_pstr_eq(s2, s21_to_lower(s1));
} END_TEST

START_TEST(s21_insert_test_3) {
    char s1[255] = "123456789";
    char s2[255] = "";
    int s3 = 5;
    char *s4 = "123456789";
    char* str = s21_insert(s1, s2, s3);
    ck_assert_pstr_eq(s4, str);
    free(str);
} END_TEST

START_TEST(s21_insert_test_4) {
    char s1[255] = "123456789";
    char s2[255] = " ";
    int s3 = 5;
    char *s4 = "12345 6789";
    char* str = s21_insert(s1, s2, s3);
    ck_assert_pstr_eq(s4, str);
    free(str);
} END_TEST

START_TEST(s21_insert_test_5) {
    char s1[255] = "123456789";
    char s2[255] = "j";
    int s3 = -5;
    char *s4 = NULL;
    char* str = s21_insert(s1, s2, s3);
    ck_assert_pstr_eq(s4, str);
    free(str);
} END_TEST

START_TEST(s21_insert_test_6) {
    char s1[255] = "123456789";
    char s2[255] = "J";
    int s3 = 0;
    char *s4 = "J123456789";
    char* str = s21_insert(s1, s2, s3);
    ck_assert_pstr_eq(s4, str);
    free(str);
} END_TEST

START_TEST(s21_insert_test_7) {
    char s1[255] = "123456789";
    char s2[255] = "J";
    int s3 = 1;
    char *s4 = "1J23456789";
    char* str = s21_insert(s1, s2, s3);
    ck_assert_pstr_eq(s4, str);
    free(str);
} END_TEST

START_TEST(s21_insert_test_8) {
    char s1[255] = "******";
    char s2[255] = "$$$$$$";
    int s3 = 4;
    char *s4 = "****$$$$$$**";
    char* str = s21_insert(s1, s2, s3);
    ck_assert_pstr_eq(s4, str);
    free(str);
} END_TEST

START_TEST(s21_insert_test_10) {
    char s1[255] = "123456789";
    char s2[255] = "qqwertyuiasdfghhjkczxncnvmb";
    int s3 = 5;
    char *s4 = "12345qqwertyuiasdfghhjkczxncnvmb6789";
    char* str = s21_insert(s1, s2, s3);
    ck_assert_pstr_eq(s4, str);
    free(str);
} END_TEST

START_TEST(s21_insert_test_11) {
    char s1[255] = "1234567";
    char s2[255] = "J ";
    int s3 = 7;
    char *s4 = "1234567J ";
    char* str = s21_insert(s1, s2, s3);
    ck_assert_pstr_eq(s4, str);
    free(str);
} END_TEST

START_TEST(s21_insert_test_12) {
    char s1[255] = "1";
    char s2[255] = "Hello scholl21 - a am gay";
    int s3 = 1;
    char *s4 = "1Hello scholl21 - a am gay";
    char* str = s21_insert(s1, s2, s3);
    ck_assert_pstr_eq(s4, str);
    free(str);
} END_TEST

START_TEST(s21_insert_test_13) {
    char s1[255] = "1";
    char s2[255] = "Hello scholl21 - a am gay";
    int s3 = 0;
    char *s4 = "Hello scholl21 - a am gay1";
    char* str = s21_insert(s1, s2, s3);
    ck_assert_pstr_eq(s4, str);
    free(str);
} END_TEST


START_TEST(s21_trim_test_1) {
    char s1[255] = "***/ **HELLO, SCHOOL 21!***/ **";
    char s2[255] = "*/ ";
    char* str = s21_trim(s1, s2);
    ck_assert_pstr_eq("HELLO, SCHOOL 21!", str);
    free(str);
} END_TEST

START_TEST(s21_trim_test_2) {
    char s1[255] = "HELLO, SCHOOL 21!***/ **";
    char s2[255] = "*/ ";
    char* str = s21_trim(s1, s2);
    ck_assert_pstr_eq("HELLO, SCHOOL 21!", str);
    free(str);
} END_TEST

START_TEST(s21_trim_test_3) {
    char s1[255] = "***/ **HELLO, SCHOOL 21!";
    char s2[255] = "*/ ";
    char* str = s21_trim(s1, s2);
    ck_assert_pstr_eq("HELLO, SCHOOL 21!", str);
    free(str);
} END_TEST

START_TEST(s21_trim_test_4) {
    char *s1 = "\0";
    char s2[255] = "*/ ";
    char* str = s21_trim(s1, s2);
    ck_assert_pstr_eq(S21_NULL, str);
    free(str);
} END_TEST

START_TEST(s21_trim_test_5) {
    char s1[255] = " ***/ **HELLO, SCHOOL 21!***/ **";
    char *s2 = " ";
    char* str = s21_trim(s1, s2);
    ck_assert_pstr_eq("***/ **HELLO, SCHOOL 21!***/ **", str);
    free(str);
} END_TEST

START_TEST(s21_trim_test_7) {
    char s1[255] = "***HELLO,*SCHOOL*21!***";
    char s2[255] = "*/ ";
    char* str = s21_trim(s1, s2);
    ck_assert_pstr_eq("HELLO,*SCHOOL*21!", str);
    free(str);
} END_TEST

START_TEST(s21_trim_test_8) {
    char s1[255] = "     ***HELLO,*SCHOOL*21!***     ";
    char s2[255] = "";
    char* str = s21_trim(s1, s2);
    ck_assert_pstr_eq("***HELLO,*SCHOOL*21!***", str);
    free(str);
} END_TEST

Suite *s21_string_a_suite(void) {
    Suite *s = suite_create("string.h and s21_string.h");
    TCase *string_a_case;

    string_a_case = tcase_create("MEMCHR");
    tcase_add_test(string_a_case, s21_memchr_test_0);
    tcase_add_test(string_a_case, s21_memchr_test_1);
    tcase_add_test(string_a_case, s21_memchr_test_2);
    tcase_add_test(string_a_case, s21_memchr_test_3);
    tcase_add_test(string_a_case, s21_memchr_test_4);
    tcase_add_test(string_a_case, s21_memchr_test_5);
    tcase_add_test(string_a_case, s21_memchr_test_6);
    tcase_add_test(string_a_case, s21_memchr_test_7);
    tcase_add_test(string_a_case, s21_memchr_test_8);
    tcase_add_test(string_a_case, s21_memchr_test_9);
    tcase_add_test(string_a_case, s21_memchr_test_10);
    tcase_add_test(string_a_case, s21_memchr_test_11);
    tcase_add_test(string_a_case, s21_memchr_test_12);
    tcase_add_test(string_a_case, s21_memchr_test_13);
    tcase_add_test(string_a_case, s21_memchr_test_14);
    tcase_add_test(string_a_case, s21_memchr_test_15);
    tcase_add_test(string_a_case, s21_memchr_test_16);
    tcase_add_test(string_a_case, s21_memchr_test_17);
    tcase_add_test(string_a_case, s21_memchr_test_18);
    tcase_add_test(string_a_case, s21_memchr_test_19);
    tcase_add_test(string_a_case, s21_memchr_test_20);
    tcase_add_test(string_a_case, s21_memchr_test_21);
    tcase_add_test(string_a_case, s21_memchr_test_22);
    tcase_add_test(string_a_case, s21_memchr_test_23);
    tcase_add_test(string_a_case, s21_memchr_test_24);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("MEMCMP");
    tcase_add_test(string_a_case, s21_memcmp_test_0);
    tcase_add_test(string_a_case, s21_memcmp_test_1);
    tcase_add_test(string_a_case, s21_memcmp_test_2);
    tcase_add_test(string_a_case, s21_memcmp_test_3);
    tcase_add_test(string_a_case, s21_memcmp_test_4);
    tcase_add_test(string_a_case, s21_memcmp_test_5);
    tcase_add_test(string_a_case, s21_memcmp_test_6);
    tcase_add_test(string_a_case, s21_memcmp_test_7);
    tcase_add_test(string_a_case, s21_memcmp_test_8);
    tcase_add_test(string_a_case, s21_memcmp_test_9);
    tcase_add_test(string_a_case, s21_memcmp_test_10);
    tcase_add_test(string_a_case, s21_memcmp_test_11);
    tcase_add_test(string_a_case, s21_memcmp_test_12);
    tcase_add_test(string_a_case, s21_memcmp_test_13);
    tcase_add_test(string_a_case, s21_memcmp_test_14);
    tcase_add_test(string_a_case, s21_memcmp_test_15);
    tcase_add_test(string_a_case, s21_memcmp_test_16);
    tcase_add_test(string_a_case, s21_memcmp_test_17);
    tcase_add_test(string_a_case, s21_memcmp_test_18);
    tcase_add_test(string_a_case, s21_memcmp_test_19);
    tcase_add_test(string_a_case, s21_memcmp_test_20);
    tcase_add_test(string_a_case, s21_memcmp_test_21);
    tcase_add_test(string_a_case, s21_memcmp_test_22);
    tcase_add_test(string_a_case, s21_memcmp_test_23);
    tcase_add_test(string_a_case, s21_memcmp_test_24);
    tcase_add_test(string_a_case, s21_memcmp_test_25);
    tcase_add_test(string_a_case, s21_memcmp_test_26);
    tcase_add_test(string_a_case, s21_memcmp_test_27);
    tcase_add_test(string_a_case, s21_memcmp_test_28);
    tcase_add_test(string_a_case, s21_memcmp_test_29);
    tcase_add_test(string_a_case, s21_memcmp_test_30);
    tcase_add_test(string_a_case, s21_memcmp_test_31);
    tcase_add_test(string_a_case, s21_memcmp_test_32);
    tcase_add_test(string_a_case, s21_memcmp_test_33);
    tcase_add_test(string_a_case, s21_memcmp_test_34);
    tcase_add_test(string_a_case, s21_memcmp_test_35);
    tcase_add_test(string_a_case, s21_memcmp_test_36);
    tcase_add_test(string_a_case, s21_memcmp_test_37);
    tcase_add_test(string_a_case, s21_memcmp_test_38);
    tcase_add_test(string_a_case, s21_memcmp_test_39);
    tcase_add_test(string_a_case, s21_memcmp_test_40);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("MEMCPY");
    tcase_add_test(string_a_case, s21_memcpy_test_1);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("MEMOVE");
    tcase_add_test(string_a_case, s21_memmove_test_1);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("MEMSET");
    tcase_add_test(string_a_case, s21_memset_test_1);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRCAT");
    tcase_add_test(string_a_case, s21_strcat_test_1);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRCHR");
    tcase_add_test(string_a_case, s21_strchr_test_0);
    tcase_add_test(string_a_case, s21_strchr_test_1);
    tcase_add_test(string_a_case, s21_strchr_test_2);
    tcase_add_test(string_a_case, s21_strchr_test_3);
    tcase_add_test(string_a_case, s21_strchr_test_4);
    tcase_add_test(string_a_case, s21_strchr_test_5);
    tcase_add_test(string_a_case, s21_strchr_test_6);
    tcase_add_test(string_a_case, s21_strchr_test_7);
    tcase_add_test(string_a_case, s21_strchr_test_8);
    tcase_add_test(string_a_case, s21_strchr_test_9);
    tcase_add_test(string_a_case, s21_strchr_test_10);
    tcase_add_test(string_a_case, s21_strchr_test_11);
    tcase_add_test(string_a_case, s21_strchr_test_12);
    tcase_add_test(string_a_case, s21_strchr_test_13);
    tcase_add_test(string_a_case, s21_strchr_test_14);
    tcase_add_test(string_a_case, s21_strchr_test_15);
    tcase_add_test(string_a_case, s21_strchr_test_16);
    tcase_add_test(string_a_case, s21_strchr_test_17);
    tcase_add_test(string_a_case, s21_strchr_test_18);
    tcase_add_test(string_a_case, s21_strchr_test_19);
    tcase_add_test(string_a_case, s21_strchr_test_20);
    tcase_add_test(string_a_case, s21_strchr_test_21);
    tcase_add_test(string_a_case, s21_strchr_test_22);
    tcase_add_test(string_a_case, s21_strchr_test_23);
    tcase_add_test(string_a_case, s21_strchr_test_24);
    tcase_add_test(string_a_case, s21_strchr_test_25);
    tcase_add_test(string_a_case, s21_strchr_test_26);
    tcase_add_test(string_a_case, s21_strchr_test_27);
    tcase_add_test(string_a_case, s21_strchr_test_28);
    tcase_add_test(string_a_case, s21_strchr_test_29);
    tcase_add_test(string_a_case, s21_strchr_test_30);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRCMP");
    tcase_add_test(string_a_case, s21_strcmp_test_0);
    tcase_add_test(string_a_case, s21_strcmp_test_1);
    tcase_add_test(string_a_case, s21_strcmp_test_2);
    tcase_add_test(string_a_case, s21_strcmp_test_3);
    tcase_add_test(string_a_case, s21_strcmp_test_4);
    tcase_add_test(string_a_case, s21_strcmp_test_5);
    tcase_add_test(string_a_case, s21_strcmp_test_6);
    tcase_add_test(string_a_case, s21_strcmp_test_7);
    tcase_add_test(string_a_case, s21_strcmp_test_8);
    tcase_add_test(string_a_case, s21_strcmp_test_9);
    tcase_add_test(string_a_case, s21_strcmp_test_10);
    tcase_add_test(string_a_case, s21_strcmp_test_11);
    tcase_add_test(string_a_case, s21_strcmp_test_12);
    tcase_add_test(string_a_case, s21_strcmp_test_13);
    tcase_add_test(string_a_case, s21_strcmp_test_14);
    tcase_add_test(string_a_case, s21_strcmp_test_15);
    tcase_add_test(string_a_case, s21_strcmp_test_16);
    tcase_add_test(string_a_case, s21_strcmp_test_17);
    tcase_add_test(string_a_case, s21_strcmp_test_18);
    tcase_add_test(string_a_case, s21_strcmp_test_19);
    tcase_add_test(string_a_case, s21_strcmp_test_20);
    tcase_add_test(string_a_case, s21_strcmp_test_21);
    tcase_add_test(string_a_case, s21_strcmp_test_22);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRCPY");
    tcase_add_test(string_a_case, s21_strcpy_test_1);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRCSPN");
    tcase_add_test(string_a_case, s21_strcspn_test_1);
    tcase_add_test(string_a_case, s21_strcspn_test_2);
    tcase_add_test(string_a_case, s21_strcspn_test_3);
    tcase_add_test(string_a_case, s21_strcspn_test_4);
    tcase_add_test(string_a_case, s21_strcspn_test_5);
    tcase_add_test(string_a_case, s21_strcspn_test_6);
    tcase_add_test(string_a_case, s21_strcspn_test_7);
    tcase_add_test(string_a_case, s21_strcspn_test_8);
    tcase_add_test(string_a_case, s21_strcspn_test_9);
    tcase_add_test(string_a_case, s21_strcspn_test_10);
    tcase_add_test(string_a_case, s21_strcspn_test_11);
    tcase_add_test(string_a_case, s21_strcspn_test_12);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRERROR");
    tcase_add_test(string_a_case, s21_strerror_test_0);
    tcase_add_test(string_a_case, s21_strerror_test_1);
    tcase_add_test(string_a_case, s21_strerror_test_2);
    tcase_add_test(string_a_case, s21_strerror_test_3);
    tcase_add_test(string_a_case, s21_strerror_test_4);
    tcase_add_test(string_a_case, s21_strerror_test_5);
    tcase_add_test(string_a_case, s21_strerror_test_6);
    tcase_add_test(string_a_case, s21_strerror_test_7);
    tcase_add_test(string_a_case, s21_strerror_test_8);
    tcase_add_test(string_a_case, s21_strerror_test_9);
    tcase_add_test(string_a_case, s21_strerror_test_10);
    tcase_add_test(string_a_case, s21_strerror_test_11);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRLEN");
    tcase_add_test(string_a_case, s21_strlen_test_1);
    tcase_add_test(string_a_case, s21_strlen_test_2);
    tcase_add_test(string_a_case, s21_strlen_test_3);
    tcase_add_test(string_a_case, s21_strlen_test_4);
    tcase_add_test(string_a_case, s21_strlen_test_5);
    tcase_add_test(string_a_case, s21_strlen_test_6);
    tcase_add_test(string_a_case, s21_strlen_test_7);
    tcase_add_test(string_a_case, s21_strlen_test_8);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRNCAT");
    tcase_add_test(string_a_case, s21_strncat_test_1);
    tcase_add_test(string_a_case, s21_strncat_test_2);
    tcase_add_test(string_a_case, s21_strncat_test_3);
    tcase_add_test(string_a_case, s21_strncat_test_4);
    tcase_add_test(string_a_case, s21_strncat_test_5);
    tcase_add_test(string_a_case, s21_strncat_test_6);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRNCMP");
    tcase_add_test(string_a_case, s21_strncmp_test_0);
    tcase_add_test(string_a_case, s21_strncmp_test_1);
    tcase_add_test(string_a_case, s21_strncmp_test_2);
    tcase_add_test(string_a_case, s21_strncmp_test_3);
    tcase_add_test(string_a_case, s21_strncmp_test_4);
    tcase_add_test(string_a_case, s21_strncmp_test_5);
    tcase_add_test(string_a_case, s21_strncmp_test_6);
    tcase_add_test(string_a_case, s21_strncmp_test_7);
    tcase_add_test(string_a_case, s21_strncmp_test_8);
    tcase_add_test(string_a_case, s21_strncmp_test_9);
    tcase_add_test(string_a_case, s21_strncmp_test_10);
    tcase_add_test(string_a_case, s21_strncmp_test_11);
    tcase_add_test(string_a_case, s21_strncmp_test_12);
    tcase_add_test(string_a_case, s21_strncmp_test_13);
    tcase_add_test(string_a_case, s21_strncmp_test_14);
    tcase_add_test(string_a_case, s21_strncmp_test_15);
    tcase_add_test(string_a_case, s21_strncmp_test_16);
    tcase_add_test(string_a_case, s21_strncmp_test_17);
    tcase_add_test(string_a_case, s21_strncmp_test_18);
    tcase_add_test(string_a_case, s21_strncmp_test_19);
    tcase_add_test(string_a_case, s21_strncmp_test_20);
    tcase_add_test(string_a_case, s21_strncmp_test_21);
    tcase_add_test(string_a_case, s21_strncmp_test_22);
    tcase_add_test(string_a_case, s21_strncmp_test_23);
    tcase_add_test(string_a_case, s21_strncmp_test_24);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRNCPY");
    tcase_add_test(string_a_case, s21_strncpy_test_1);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRPBRK");
    tcase_add_test(string_a_case, s21_strpbrk_test_1);
    tcase_add_test(string_a_case, s21_strpbrk_test_2);
    tcase_add_test(string_a_case, s21_strpbrk_test_3);
    tcase_add_test(string_a_case, s21_strpbrk_test_4);
    tcase_add_test(string_a_case, s21_strpbrk_test_5);
    tcase_add_test(string_a_case, s21_strpbrk_test_6);
    tcase_add_test(string_a_case, s21_strpbrk_test_7);
    tcase_add_test(string_a_case, s21_strpbrk_test_8);
    tcase_add_test(string_a_case, s21_strpbrk_test_9);
    tcase_add_test(string_a_case, s21_strpbrk_test_10);
    tcase_add_test(string_a_case, s21_strpbrk_test_11);
    tcase_add_test(string_a_case, s21_strpbrk_test_12);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRRCHR");
    tcase_add_test(string_a_case, s21_strrchr_test_1);
    tcase_add_test(string_a_case, s21_strrchr_test_2);
    tcase_add_test(string_a_case, s21_strrchr_test_3);
    tcase_add_test(string_a_case, s21_strrchr_test_4);
    tcase_add_test(string_a_case, s21_strrchr_test_5);
    tcase_add_test(string_a_case, s21_strrchr_test_6);
    tcase_add_test(string_a_case, s21_strrchr_test_7);
    tcase_add_test(string_a_case, s21_strrchr_test_8);
    tcase_add_test(string_a_case, s21_strrchr_test_9);
    tcase_add_test(string_a_case, s21_strrchr_test_10);
    tcase_add_test(string_a_case, s21_strrchr_test_11);
    tcase_add_test(string_a_case, s21_strrchr_test_12);
    tcase_add_test(string_a_case, s21_strrchr_test_13);
    tcase_add_test(string_a_case, s21_strrchr_test_14);
    tcase_add_test(string_a_case, s21_strrchr_test_15);
    tcase_add_test(string_a_case, s21_strrchr_test_16);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRSPN");
    tcase_add_test(string_a_case, s21_strspn_test_1);
    tcase_add_test(string_a_case, s21_strspn_test_2);
    tcase_add_test(string_a_case, s21_strspn_test_3);
    tcase_add_test(string_a_case, s21_strspn_test_4);
    tcase_add_test(string_a_case, s21_strspn_test_5);
    tcase_add_test(string_a_case, s21_strspn_test_6);
    tcase_add_test(string_a_case, s21_strspn_test_7);
    tcase_add_test(string_a_case, s21_strspn_test_8);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRSTR");
    tcase_add_test(string_a_case, s21_strstr_test_1);
    tcase_add_test(string_a_case, s21_strstr_test_2);
    tcase_add_test(string_a_case, s21_strstr_test_3);
    tcase_add_test(string_a_case, s21_strstr_test_4);
    tcase_add_test(string_a_case, s21_strstr_test_5);
    tcase_add_test(string_a_case, s21_strstr_test_6);
    tcase_add_test(string_a_case, s21_strstr_test_7);
    tcase_add_test(string_a_case, s21_strstr_test_8);
    tcase_add_test(string_a_case, s21_strstr_test_9);
    tcase_add_test(string_a_case, s21_strstr_test_10);
    tcase_add_test(string_a_case, s21_strstr_test_11);
    tcase_add_test(string_a_case, s21_strstr_test_12);
    tcase_add_test(string_a_case, s21_strstr_test_13);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("STRTOK");
    tcase_add_test(string_a_case, s21_strtok_test_0);
    tcase_add_test(string_a_case, s21_strtok_test_1);
    tcase_add_test(string_a_case, s21_strtok_test_3);
    tcase_add_test(string_a_case, s21_strtok_test_5);
    tcase_add_test(string_a_case, s21_strtok_test_6);
    tcase_add_test(string_a_case, s21_strtok_test_7);
    tcase_add_test(string_a_case, s21_strtok_test_8);
    tcase_add_test(string_a_case, s21_strtok_test_9);
    tcase_add_test(string_a_case, s21_strtok_test_11);
    tcase_add_test(string_a_case, s21_strtok_test_13);
    tcase_add_test(string_a_case, s21_strtok_test_15);
    tcase_add_test(string_a_case, s21_strtok_test_16);
    tcase_add_test(string_a_case, s21_strtok_test_17);
    tcase_add_test(string_a_case, s21_strtok_test_18);
    tcase_add_test(string_a_case, s21_strtok_test_19);
    tcase_add_test(string_a_case, s21_strtok_test_20);
    tcase_add_test(string_a_case, s21_strtok_test_21);
    tcase_add_test(string_a_case, s21_strtok_test_22);
    tcase_add_test(string_a_case, s21_strtok_test_23);
    tcase_add_test(string_a_case, s21_strtok_test_25);
    tcase_add_test(string_a_case, s21_strtok_test_26);
    tcase_add_test(string_a_case, s21_strtok_test_27);
    tcase_add_test(string_a_case, s21_strtok_test_28);
    tcase_add_test(string_a_case, s21_strtok_test_29);
    tcase_add_test(string_a_case, s21_strtok_test_30);
    tcase_add_test(string_a_case, s21_strtok_test_31);
    tcase_add_test(string_a_case, s21_strtok_test_32);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("TO_UPPER");
    tcase_add_test(string_a_case, s21_to_upper_test_1);
    tcase_add_test(string_a_case, s21_to_upper_test_2);
    tcase_add_test(string_a_case, s21_to_upper_test_3);
    tcase_add_test(string_a_case, s21_to_upper_test_4);
    tcase_add_test(string_a_case, s21_to_upper_test_5);
    tcase_add_test(string_a_case, s21_to_upper_test_6);
    tcase_add_test(string_a_case, s21_to_upper_test_7);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("TO_LOWER");
    tcase_add_test(string_a_case, s21_to_lower_test_1);
    tcase_add_test(string_a_case, s21_to_lower_test_2);
    tcase_add_test(string_a_case, s21_to_lower_test_3);
    tcase_add_test(string_a_case, s21_to_lower_test_4);
    tcase_add_test(string_a_case, s21_to_lower_test_5);
    tcase_add_test(string_a_case, s21_to_lower_test_6);
    tcase_add_test(string_a_case, s21_to_lower_test_7);
    tcase_add_test(string_a_case, s21_to_lower_test_8);
    suite_add_tcase(s, string_a_case);

    string_a_case = tcase_create("INSERT");
    tcase_add_test(string_a_case, s21_insert_test_3);
    tcase_add_test(string_a_case, s21_insert_test_4);
    tcase_add_test(string_a_case, s21_insert_test_5);
    tcase_add_test(string_a_case, s21_insert_test_6);
    tcase_add_test(string_a_case, s21_insert_test_7);
    tcase_add_test(string_a_case, s21_insert_test_8);
    tcase_add_test(string_a_case, s21_insert_test_10);
    tcase_add_test(string_a_case, s21_insert_test_11);
    tcase_add_test(string_a_case, s21_insert_test_12);
    tcase_add_test(string_a_case, s21_insert_test_13);
    suite_add_tcase(s, string_a_case);


    string_a_case = tcase_create("TRIM");
    tcase_add_test(string_a_case, s21_trim_test_1);
    tcase_add_test(string_a_case, s21_trim_test_2);
    tcase_add_test(string_a_case, s21_trim_test_3);
    tcase_add_test(string_a_case, s21_trim_test_4);
    tcase_add_test(string_a_case, s21_trim_test_5);
    tcase_add_test(string_a_case, s21_trim_test_7);
    tcase_add_test(string_a_case, s21_trim_test_8);
    suite_add_tcase(s, string_a_case);

  return s;
}
