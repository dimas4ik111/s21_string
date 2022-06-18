#include "s21_string.h"
#include "s21_test.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

START_TEST(s21_sprintf_test_d_1) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, -1);
    s21_sprintf(s21, format, -1);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_2) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, 1);
    s21_sprintf(s21, format, 1);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_3) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.1d ";
    sprintf(sp, format, 9);
    s21_sprintf(s21, format, 9);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_4) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, 10);
    s21_sprintf(s21, format, 10);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_5) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.3d ";
    sprintf(sp, format, 11);
    s21_sprintf(s21, format, 11);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_6) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.4d ";
    sprintf(sp, format, 15);
    s21_sprintf(s21, format, 15);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_7) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.5d ";
    sprintf(sp, format, 16);
    s21_sprintf(s21, format, 16);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_8) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.6d ";
    sprintf(sp, format, 17);
    s21_sprintf(s21, format, 17);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_9) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.1d ";
    sprintf(sp, format, 99);
    s21_sprintf(s21, format, 99);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_10) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, 100);
    s21_sprintf(s21, format, 100);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_11) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.3d ";
    sprintf(sp, format, 101);
    s21_sprintf(s21, format, 101);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_12) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.1d ";
    sprintf(sp, format, -9);
    s21_sprintf(s21, format, -9);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_13) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, -10);
    s21_sprintf(s21, format, -10);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_14) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.3d ";
    sprintf(sp, format, -11);
    s21_sprintf(s21, format, -11);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_15) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.4d ";
    sprintf(sp, format, -14);
    s21_sprintf(s21, format, -14);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_16) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.1d ";
    sprintf(sp, format, -15);
    s21_sprintf(s21, format, -15);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_17) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.2d ";
    sprintf(sp, format, -16);
    s21_sprintf(s21, format, -16);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_18) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.3d ";
    sprintf(sp, format, -99);
    s21_sprintf(s21, format, -99);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_19) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.3d ";
    sprintf(sp, format, -100);
    s21_sprintf(s21, format, -100);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_20) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.4d ";
    sprintf(sp, format, -101);
    s21_sprintf(s21, format, -101);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_21) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.8d ";
    sprintf(sp, format, INT_MAX);
    s21_sprintf(s21, format, INT_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_22) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.10d ";
    sprintf(sp, format, LONG_MAX);
    s21_sprintf(s21, format, LONG_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_23) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.11d ";
    sprintf(sp, format, -111111111);
    s21_sprintf(s21, format, -111111111);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_24) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.12d ";
    sprintf(sp, format, UINT_MAX);
    s21_sprintf(s21, format, UINT_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_25) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.13ld ";
    sprintf(sp, format, ULONG_MAX);
    s21_sprintf(s21, format, ULONG_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_26) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.14d ";
    sprintf(sp, format, 922337);
    s21_sprintf(s21, format, 922337);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_27) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %.8d %.9d %.10d %.11d %.12d %.13d %.14d";
    sprintf(sp, format, INT_MAX, INT_MIN, LONG_MAX, -111111111, ULONG_MAX, 0, -42);
    s21_sprintf(s21, format, INT_MAX, INT_MIN, LONG_MAX, -111111111, ULONG_MAX, 0, -42);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_28) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, 100);
    s21_sprintf(s21, format, 100);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_29) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, 101);
    s21_sprintf(s21, format, 101);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_30) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, -9);
    s21_sprintf(s21, format, -9);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_31) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, -10);
    s21_sprintf(s21, format, -10);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_32) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, -101);
    s21_sprintf(s21, format, -101);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_33) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, INT_MAX);
    s21_sprintf(s21, format, INT_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_34) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d ";
    sprintf(sp, format, INT_MIN);
    s21_sprintf(s21, format, INT_MIN);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_35) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " %+d %+d %+d %+d %+d %+d %+d";
    sprintf(sp, format, INT_MAX, INT_MIN, LONG_MAX, -111111111, ULONG_MAX, 0, -42);
    s21_sprintf(s21, format, INT_MAX, INT_MIN, LONG_MAX, -111111111, ULONG_MAX, 0, -42);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_36) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = " {% d} {% d} {% d} {% d} {% d} {% d} {% d}";
    sprintf(sp, format, INT_MAX, INT_MIN, LONG_MAX, -111111111, ULONG_MAX, 0, -42);
    s21_sprintf(s21, format, INT_MAX, INT_MIN, LONG_MAX, -111111111, ULONG_MAX, 0, -42);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_37) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = "%d -- %ld";
    sprintf(sp, format, INT_MAX, LONG_MAX);
    s21_sprintf(s21, format, INT_MAX, LONG_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_d_38) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char format[] = "%hd -- %hd";
    sprintf(sp, format, INT_MAX, LONG_MAX);
    s21_sprintf(s21, format, INT_MAX, LONG_MAX);
    ck_assert_str_eq(sp, s21);
} END_TEST


// Spec u

START_TEST(s21_sprintf_test_u_1) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    s21_sprintf(data, "(%-42.21u)\n", 123456789);
    sprintf(data1, "(%-42.21u)\n", 123456789);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_u_2) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    s21_sprintf(data, "(%42.20u)", -123456789);
    sprintf(data1, "(%42.20u)", -123456789);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_u_3) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    s21_sprintf(data, "(%-14.12u)\n", 'H');
    sprintf(data1, "(%-14.12u)\n", 'H');
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_u_4) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    unsigned short int a = 9;
    s21_sprintf(data, "(%hu)\n", a);
    sprintf(data1, "(%hu)\n", a);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_u_5) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    size_t n = 123456;
    s21_sprintf(data, "(%-lu)\n", n);
    sprintf(data1, "(%lu)\n", n);
    ck_assert_str_eq(data, data1);
} END_TEST

// Spec f

START_TEST(s21_sprintf_test_f_1) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    s21_sprintf(data, "(%.13f)", 15.2222);
    sprintf(data1, "(%.13f)", 15.2222);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_f_2) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    s21_sprintf(data, "(% -42.15f)", 21.123456789);
    sprintf(data1, "(% -42.15f)", 21.123456789);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_f_3) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    s21_sprintf(data, "(%-+42.4f)", 123456789.123456789);
    sprintf(data1, "(%-+42.4f)", 123456789.123456789);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_f_4) {
    char data[100] = {'\0'};
    char data1[100] = {'\0'};
    s21_sprintf(data, "(% -42.10f)", -123456789.123456789);
    sprintf(data1, "(% -42.10f)", -123456789.123456789);
    ck_assert_str_eq(data, data1);
} END_TEST

// Spec c
START_TEST(s21_sprintf_test_c_1) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = "{(% c)(% c)(%%)(% c)}";
    s21_sprintf(data1, format, 42, '1', 'H');
    sprintf(data2, format, 42, '1', 'H');
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(s21_sprintf_test_c_2) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = "(%-42c) [%21c]";
    s21_sprintf(data1, format, 'C', 99);
    sprintf(data2, format, 'C', 99);
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(s21_sprintf_test_c_3) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = " %c ";
    s21_sprintf(data1, format, 'C');
    sprintf(data2, format, 'C');
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(s21_sprintf_test_c_4) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = " %c";
    s21_sprintf(data1, format, '0' - 256);
    sprintf(data2, format, '0' - 256);
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(s21_sprintf_test_c_5) {
    char sp[100] = {'\0'};
    char s21_sp[100] = {'\0'};
    char format[] = "{  %c   %c   %c  }";
    s21_sprintf(s21_sp, format, '0', 0, '1');
    sprintf(sp, format, '0', 0, '1');
    ck_assert_str_eq(sp, s21_sp);
} END_TEST

START_TEST(s21_sprintf_test_c_6) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = " %c %c %c ";
    s21_sprintf(data1, format, ' ', ' ', '\0');
    sprintf(data2, format, ' ', ' ', '\0');
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(s21_sprintf_test_c_7) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = " %c %c %c ";
    s21_sprintf(data1, format, '1', '2', '3');
    sprintf(data2, format, '1', '2', '3');
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(s21_sprintf_test_c_8) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    char format[] = "{%%%c%c%c%%}";
    s21_sprintf(data1, format, 0, '1', '2');
    sprintf(data2, format, 0, '1', '2');
    ck_assert_str_eq(data1, data2);
} END_TEST

//  Spec s

START_TEST(s21_sprintf_test_s_1) {
    char data[70] = {'\0'};
    char data1[70] = {'\0'};
    char  format[] = "(%s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_s_2) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = "%s";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_3) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = "%s ";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_4) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %s ";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_5) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %s %s ";
    s21_sprintf(s21, format, "", "-");
    sprintf(sp, format, "", "-");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_6) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %s %s ";
    s21_sprintf(s21, format, "", "-");
    sprintf(sp, format, "", "-");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_7) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %s %s ";
    s21_sprintf(s21, format, " - ", "");
    sprintf(sp, format, " - ", "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_8) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char s2[] = "ABOBUS ABOBUS ABOBUS ABOBUS ABOBUS ABOBUS ABOBUS ABOBUS ABOBUS ABOBUS)))))";
    char  format[] = " %s %s %s %s %s";
    s21_sprintf(s21, format, " - ", "", "4", "", s2);
    sprintf(sp, format, " - ", "", "4", "", s2);
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_9) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %s %s %s %s %s ";
    s21_sprintf(s21, format, " - ", "", "4", "", "2 ");
    sprintf(sp, format, " - ", "", "4", "", "2 ");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_10) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " NULL %s NULL ";
    s21_sprintf(s21, format, NULL);
    sprintf(sp, format, NULL);
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_11) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%.s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_s_12) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%.5s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_s_13) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%1.0s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_s_14) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%150.15s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_s_15) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%-.6s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_s_16) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%-100.100s)";
    s21_sprintf(data, format, "Hello, sprintf!");
    sprintf(data1, format, "Hello, sprintf!");
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_s_17) {
    char data[1024] = {'\0'};
    char data1[1024] = {'\0'};
    char  format[] = "(%11.11s) %.5s %10s";
    s21_sprintf(data, format, "Hello, sprintf!", "000", NULL);
    sprintf(data1, format, "Hello, sprintf!", "000", NULL);
    ck_assert_pstr_eq(data, data1);
} END_TEST

START_TEST(s21_sprintf_test_s_18) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = "%.s";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_19) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.1s";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_20) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = "%.1s ";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_21) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.s ";
    s21_sprintf(s21, format, "");
    sprintf(sp, format, "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_22) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.s ";
    s21_sprintf(s21, format, "-");
    sprintf(sp, format, "-");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_23) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.2s %.1s ";
    s21_sprintf(s21, format, "", "-");
    sprintf(sp, format, "", "-");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_24) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.3s %.2s ";
    s21_sprintf(s21, format, " - ", "");
    sprintf(sp, format, " - ", "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_25) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " %.1s %.2s %.3s %.4s ";
    s21_sprintf(s21, format, " - ", "", "4", "");
    sprintf(sp, format, " - ", "", "4", "");
    ck_assert_pstr_eq(sp, s21);
} END_TEST

START_TEST(s21_sprintf_test_s_26) {
    char sp[256] = {'\0'};
    char s21[256] = {'\0'};
    char  format[] = " % 10.2s % 23.3s % 3.4s % 44.5s % .1s ";
    s21_sprintf(s21, format, " - ", "", "4", "", "2 ");
    sprintf(sp, format, " - ", "", "4", "", "2 ");
    ck_assert_pstr_eq(sp, s21);
} END_TEST


START_TEST(s21_sprintf_test_procent_1) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    s21_sprintf(data1, "(%%)");
    sprintf(data2, "(%%)");
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(s21_sprintf_test_procent_2) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    s21_sprintf(data1, "(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)");
    sprintf(data2, "(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)");
    ck_assert_str_eq(data1, data2);
} END_TEST

START_TEST(s21_sprintf_test_procent_3) {
    char data1[100] = {'\0'};
    char data2[100] = {'\0'};
    s21_sprintf(data1, "(School %% 21 %% TESTER %%%% LOL %%)");
    sprintf(data2, "(School %% 21 %% TESTER %%%% LOL %%)");
    ck_assert_str_eq(data1, data2);
} END_TEST

// NULL and ""

START_TEST(S21_sprintf_test_NULL_1) {
    char a[10] = {'\0'};
    char b[10] = {'\0'};
    char format[] = "";
    s21_sprintf(a, format);
    sprintf(b, format);
    ck_assert_str_eq(a, b);
} END_TEST

START_TEST(S21_sprintf_test_NULL_2) {
    char a[256] = {'\0'};
    char b[256] = {'\0'};
    char format[] = "";
    s21_sprintf(a, format);
    sprintf(b, format);
    ck_assert_str_eq(a, b);
} END_TEST

START_TEST(S21_sprintf_test_NULL_3) {
    char a[10] = {'\0'};
    char b[10] = {'\0'};
    char* format = "\n\n";
    s21_sprintf(a, format);
    sprintf(b, format);
    ck_assert_str_eq(a, b);
} END_TEST

START_TEST(sprintf_0) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%c", 'a');
    sprintf(str1, "%c", 'a');
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_1) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-c", 'a');
    sprintf(str1, "%-c", 'a');
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_2) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10c", 'a');
    sprintf(str1, "%10c", 'a');
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_3) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-2c", 'a');
    sprintf(str1, "%-2c", 'a');
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_4) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%c", '\0');
    sprintf(str1, "%c", '\0');
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_5) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10c", '\0');
    sprintf(str1, "%10c", '\0');
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_6) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "ZALUPAAAAA%10c", 0);
    sprintf(str1, "ZALUPAAAAA%10c", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_7) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-6c", '\0');
    sprintf(str1, "%-6c", '\0');
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_8) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%d", 0);
    sprintf(str1, "%d", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_9) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.d", 0);
    sprintf(str1, "%.d", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_10) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.d", 0);
    sprintf(str1, "%10.d", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_11) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.2d", 0);
    sprintf(str1, "%10.2d", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_12) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-10.2d", 0);
    sprintf(str1, "%-10.2d", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_13) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-.2d", 0);
    sprintf(str1, "%-.2d", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_14) {
    char str[200] = {'\0'};
    char str1[200] = {'\0'};
    s21_sprintf(str, "%ld", 100000000000000000);
    sprintf(str1, "%ld", 100000000000000000);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_15) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    short int x = 400;
    s21_sprintf(str, "%hd", x);
    sprintf(str1, "%hd", x);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_16) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5d", 0);
    sprintf(str1, "%-5d", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_17) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5.d", 0);
    sprintf(str1, "%5.d", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_18) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-d", 0);
    sprintf(str1, "%-d", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_19) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%+d", 0);
    sprintf(str1, "%+d", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_22) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%3.5d", 20);
    sprintf(str1, "%3.5d", 20);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_23) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%3.5ld", -100000000000000000);
    sprintf(str1, "%3.5ld", -100000000000000000);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_24) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "% 3.7d", -666);
    sprintf(str1, "% 3.7d", -666);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_25) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%d", -1);
    sprintf(str1, "%d", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_26) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.d", -1);
    sprintf(str1, "%.d", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_27) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.d", -1);
    sprintf(str1, "%10.d", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_28) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.2d", -1);
    sprintf(str1, "%10.2d", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_29) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-10.2d", -1);
    sprintf(str1, "%-10.2d", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_30) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-.2d", -1);
    sprintf(str1, "%-.2d", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_31) {
    char str[200] = {'\0'};
    char str1[200] = {'\0'};
    s21_sprintf(str, "%ld", -1234852342345245);
    sprintf(str1, "%ld", -1234852342345245);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_32) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    short int x = -400;
    s21_sprintf(str, "%hd", x);
    sprintf(str1, "%hd", x);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_33) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5d", -1);
    sprintf(str1, "%-5d", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_34) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5d", -1);
    sprintf(str1, "%5d", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_35) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-d", -1);
    sprintf(str1, "%-d", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_36) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%+d", -1);
    sprintf(str1, "%+d", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_37) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%u", 0);
    sprintf(str1, "%u", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_38) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.u", 0);
    sprintf(str1, "%.u", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_39) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.u", 0);
    sprintf(str1, "%10.u", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_40) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.2u", 0);
    sprintf(str1, "%10.2u", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_41) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-10.2u", 0);
    sprintf(str1, "%-10.2u", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_42) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-.2u", 0);
    sprintf(str1, "%-.2u", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_43) {
    char str[200] = {'\0'};
    char str1[200] = {'\0'};
    s21_sprintf(str, "%lu", 100000000000000000);
    sprintf(str1, "%lu", 100000000000000000);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_44) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    short int x = 400;
    s21_sprintf(str, "%hu", x);
    sprintf(str1, "%hu", x);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_45) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5u", 0);
    sprintf(str1, "%-5u", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_46) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5u", 0);
    sprintf(str1, "%5u", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_47) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-u", 0);
    sprintf(str1, "%-u", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_50) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%3.5u", 20);
    sprintf(str1, "%3.5u", 20);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_51) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10lu", 100000000UL);
    sprintf(str1, "%10lu", 100000000UL);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_52) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%u", -1);
    sprintf(str1, "%u", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_53) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.u", -1);
    sprintf(str1, "%.u", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_54) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.u", -1);
    sprintf(str1, "%10.u", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_55) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.2u", -1);
    sprintf(str1, "%10.2u", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_56) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-10.2u", -1);
    sprintf(str1, "%-10.2u", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_57) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-.2u", -1);
    sprintf(str1, "%-.2u", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_58) {
    char str[200] = {'\0'};
    char str1[200] = {'\0'};
    s21_sprintf(str, "%lu", 12348523423452);
    sprintf(str1, "%lu", 12348523423452);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_59) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    short int x = -400;
    s21_sprintf(str, "%hu", x);
    sprintf(str1, "%hu", x);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_60) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5u", -1);
    sprintf(str1, "%-5u", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_61) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5u", -1);
    sprintf(str1, "%5u", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_62) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-u", -1);
    sprintf(str1, "%-u", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_63) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%i", 0);
    sprintf(str1, "%i", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_64) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.i", 0);
    sprintf(str1, "%.i", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_65) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.i", 0);
    sprintf(str1, "%10.i", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_66) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.2i", 0);
    sprintf(str1, "%10.2i", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_67) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-10.2i", 0);
    sprintf(str1, "%-10.2i", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_68) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-.2i", 0);
    sprintf(str1, "%-.2i", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_69) {
    char str[200] = {'\0'};
    char str1[200] = {'\0'};
    s21_sprintf(str, "%li", 100000000000000000);
    sprintf(str1, "%li", 100000000000000000);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_70) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    short int x = 400;
    s21_sprintf(str, "%hi", x);
    sprintf(str1, "%hi", x);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_71) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5i", 0);
    sprintf(str1, "%-5i", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_72) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5i", 0);
    sprintf(str1, "%5i", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_73) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-i", 0);
    sprintf(str1, "%-i", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_74) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%+i", 0);
    sprintf(str1, "%+i", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_77) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%3.5i", 20);
    sprintf(str1, "%3.5i", 20);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_78) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%3.5li", -100000000000000000);
    sprintf(str1, "%3.5li", -100000000000000000);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_79) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "% 3.7i", -666);
    sprintf(str1, "% 3.7i", -666);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_80) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%i", -1);
    sprintf(str1, "%i", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_81) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.i", -1);
    sprintf(str1, "%.i", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_82) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.i", -1);
    sprintf(str1, "%10.i", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_83) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.2i", -1);
    sprintf(str1, "%10.2i", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_84) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-10.2i", -1);
    sprintf(str1, "%-10.2i", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_85) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-.2i", -1);
    sprintf(str1, "%-.2i", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_86) {
    char str[200] = {'\0'};
    char str1[200] = {'\0'};
    s21_sprintf(str, "%li", -1234852342345245);
    sprintf(str1, "%li", -1234852342345245);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_87) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    short int x = -400;
    s21_sprintf(str, "%hi", x);
    sprintf(str1, "%hi", x);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_88) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5i", -1);
    sprintf(str1, "%-5i", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_89) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5i", -1);
    sprintf(str1, "%5i", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_90) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-i", -1);
    sprintf(str1, "%-i", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_91) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%+i", -1);
    sprintf(str1, "%+i", -1);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_92) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%f", 1337.228);
    sprintf(str1, "%f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_93) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10f", 1337.228);
    sprintf(str1, "%10f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_94) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.3f", 1337.228);
    sprintf(str1, "%10.3f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_95) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.12f", 1337.228);
    sprintf(str1, "%10.12f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_96) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-1.12f", 1337.228);
    sprintf(str1, "%-1.12f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_97) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.12f", 1337.228);
    sprintf(str1, "%.12f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_98) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "% 12f", 1337.228);
    sprintf(str1, "% 12f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_99) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%+12f", 1337.228);
    sprintf(str1, "%+12f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_100) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.0f", 1337.228);
    sprintf(str1, "%.0f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_101) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.5f", 1337.228);
    sprintf(str1, "%.5f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_102) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%3.5f", 1457.228);
    sprintf(str1, "%3.5f", 1457.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_103) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%15.14f", 1337.228);
    sprintf(str1, "%15.14f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_104) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-30.12f", 1337.228);
    sprintf(str1, "%-30.12f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_105) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "% 02.12f", 1337.228);
    sprintf(str1, "% 02.12f", 1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_106) {
    char str[256] = {'\0'};
    char str1[256] = {'\0'};
    s21_sprintf(str, "%+32.6f", -82538594567.24818312);
    sprintf(str1, "%+32.6f", -82538594567.24818312);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_107) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10f", -1337.228);
    sprintf(str1, "%10f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_108) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.2f", -1337.228);
    sprintf(str1, "%10.2f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_109) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%10.12f", -1337.228);
    sprintf(str1, "%10.12f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_110) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-1.12f", -1337.228);
    sprintf(str1, "%-1.12f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_111) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.12f", -1337.228);
    sprintf(str1, "%.12f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_112) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "% 20f", -1337.228);
    sprintf(str1, "% 20f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_113) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%+20f", -1337.228);
    sprintf(str1, "%+20f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_114) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.0f", -1337.228);
    sprintf(str1, "%.0f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_115) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.5f", -1337.228);
    sprintf(str1, "%.5f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_116) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%3.5f", -1337.228);
    sprintf(str1, "%3.5f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_117) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%30.12f", -1337.228);
    sprintf(str1, "%30.12f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_118) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-30.12f", -1337.228);
    sprintf(str1, "%-30.12f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST


START_TEST(sprintf_119) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "% 02.12f", -1337.228);
    sprintf(str1, "% 02.12f", -1337.228);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_120) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%s", "ABOBA");
    sprintf(str1, "%s", "ABOBA");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_121) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-s", "ABOBA");
    sprintf(str1, "%-s", "ABOBA");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_122) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%20s", "ABOBA");
    sprintf(str1, "%20s", "ABOBA");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_123) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%20s", "123456789");
    sprintf(str1, "%20s", "123456789");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_124) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%3s", "A B O B A");
    sprintf(str1, "%3s", "A B O B A");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_125) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-3s", "A B O B A");
    sprintf(str1, "%-3s", "A B O B A");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_126) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.5s", "A B O B A");
    sprintf(str1, "%.5s", "A B O B A");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_127) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.25s", "A B O B A");
    sprintf(str1, "%.25s", "A B O B A");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_128) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.s", "A B O B A");
    sprintf(str1, "%.s", "A B O B A");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_129) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-.5s", "SampleText");
    sprintf(str1, "%-.5s", "SampleText");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_130) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5.10s", "SampleText");
    sprintf(str1, "%5.10s", "SampleText");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_131) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5.1s", "SampleText");
    sprintf(str1, "%5.1s", "SampleText");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_132) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5.1s", "SampleText");
    sprintf(str1, "%-5.1s", "SampleText");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_133) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5.0s", "SampleText");
    sprintf(str1, "%-5.0s", "SampleText");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_134) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%s", "\0\0\0\0\0\0");
    sprintf(str1, "%s", "\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_135) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-s", "\0\0\0\0\0\0");
    sprintf(str1, "%-s", "\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_136) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%20s", "\0\0\0\0\0\0");
    sprintf(str1, "%20s", "\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_137) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%20s", "\0\0\0\0\0\0");
    sprintf(str1, "%20s", "\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_138) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%3s", "\0\0\0\0\0\0");
    sprintf(str1, "%3s", "\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_139) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-3s", "\0\0\0\0\0\0");
    sprintf(str1, "%-3s", "\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_140) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.5s", "\0\0\0\0\0\0");
    sprintf(str1, "%.5s", "\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_141) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.25s", "\0\0\0\0\0\0");
    sprintf(str1, "%.25s", "\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_142) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.s", "\0\0\0\0\0\0");
    sprintf(str1, "%.s", "\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_143) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-.5s", "\0\0\0\0\0\0\0");
    sprintf(str1, "%-.5s", "\0\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_144) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5.10s", "\0\0\0\0\0\0\0");
    sprintf(str1, "%5.10s", "\0\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_145) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5.1s", "\0\0\0\0\0\0\0");
    sprintf(str1, "%5.1s", "\0\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_146) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5.1s", "\0\0\0\0\0\0\0");
    sprintf(str1, "%-5.1s", "\0\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_147) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5.0s", "\0\0\0\0\0\0\0");
    sprintf(str1, "%-5.0s", "\0\0\0\0\0\0\0");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_148) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%s", "");
    sprintf(str1, "%s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_149) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-s", "");
    sprintf(str1, "%-s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_150) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%20s", "");
    sprintf(str1, "%20s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_151) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%20s", "");
    sprintf(str1, "%20s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_152) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%3s", "");
    sprintf(str1, "%3s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_153) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-3s", "");
    sprintf(str1, "%-3s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_154) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.5s", "");
    sprintf(str1, "%.5s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_155) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.25s", "");
    sprintf(str1, "%.25s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_156) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.s", "");
    sprintf(str1, "%.s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_157) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-.5s", "");
    sprintf(str1, "%-.5s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_158) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5.10s", "");
    sprintf(str1, "%5.10s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_159) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%5.1s", "");
    sprintf(str1, "%5.1s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_160) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5.1s", "");
    sprintf(str1, "%-5.1s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_161) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%-5.0s", "");
    sprintf(str1, "%-5.0s", "");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_162) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%%");
    sprintf(str1, "%%");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_163) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%%");
    sprintf(str1, "%%");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_164) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%%%+.d%.1u%+.i%+.f%.4s", 21, -42, 0xF1AC, -2313.1313, "it will go");
    sprintf(str1, "%%%+.d%.1u%+.i%+.f%.4s", 21, -42, 0xF1AC, -2313.1313, "it will go");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_165) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
        for (int i = -101; i <= 101;) {
            s21_sprintf(str1, "% -i % -d % -5d", i, i + 1, 143646235);
            sprintf(str, "% -i % -d % -5d", i, i + 1, 143646235);
            i += 7;
            ck_assert_str_eq(str, str1);
        }
} END_TEST

START_TEST(sprintf_166) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.f", 56.7);
    sprintf(str1, "%.f", 56.7);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_167) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.f", 56.2);
    sprintf(str1, "%.f", 56.2);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(sprintf_168) {
    char str[100] = {'\0'};
    char str1[100] = {'\0'};
    s21_sprintf(str, "%.0f", 5634.9);
    sprintf(str1, "%.0f", 5634.9);
    ck_assert_str_eq(str, str1);
} END_TEST


START_TEST(sprintf_simple_int) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "This is a simple value %d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_precise_int) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%.5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_width_int) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%5d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_minus_width_int) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%-5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_plus_width_int) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%+12d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_flags_long_int) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%+5.31li";
    long int val = 698518581899;
    // ck_assert_int_eq(s21_sprintf(str1, format, val),
    //     sprintf(str2, format, val));
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
} END_TEST

START_TEST(sprintf_flags_short_int) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%-16.9hi";
    short int val = 6958;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_zero_precision_zero_int) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%.0d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_space_flag_int) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "% d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_width) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%15u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_flags) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%-16u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_precision) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%.51u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_many_flags) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "% 49.51u";
    unsigned int val = 14140;
    s21_sprintf(str1, format, val);
    sprintf(str2, format, val);
    // ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_short) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%hu";
    unsigned short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_long) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%lu";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_unsigned_val_many) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%lu, %u, %hu, %.5u, %5.u";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
        sprintf(str2, format, val, (unsigned)14,
        (unsigned short)1441, (unsigned)14414,
        (unsigned)9681));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_octal_short) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%hd";
    short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(sprintf_unsigned_zero) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%u";
    ck_assert_int_eq(s21_sprintf(str1, format, 0), sprintf(str2, format, (unsigned)0));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_one_char) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%c";
    char val = 'X';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_one_precision) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%.5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_one_flags) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "% -5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_one_width) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%15c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_one_many) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
        sprintf(str2, format, val, 'c', 'a', 'b', 'b'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_one_many_flags) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%-5.3c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string_precision) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%.15s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string_width) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%15s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string_flags) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%-15.9s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string_long) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_string_many) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "%s%s%s%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    char *s1 = "";
    char *s2 = "87418347813748913749871389480913";
    char *s3 = "HAHAABOBASUCKER";
    ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3), sprintf(str2, format, val, s1, s2, s3));
    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(sprintf_string_width_huge) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *val = "kjafdiuhfjahfjdahf";
    char *format = "%120s";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_float_flags) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "% f";
    float val = -10.0;
    s21_sprintf(str1, format, val); sprintf(str2, format, val);
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_all_empty) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_empty_format_and_parameters) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_char) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_char) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'),
        sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_string) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"), sprintf(str2, "%s", "Drop Sega PLS"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_string) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(
        s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
        sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_dec) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_dec) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
        sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_int) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_int) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
        sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_float) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001), sprintf(str2, "%f", 0.0001));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_float) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(
        s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
        sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_unsigned_dec) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%u", 100), sprintf(str2, "%u", (unsigned)100));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_unsigned_dec) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100),
        sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                             (unsigned)666, (unsigned)100));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_char_with_alignment_left) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_one_char_with_alignment_right) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'), sprintf(str2, "%-8c", '\t'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_many_char_with_alignment) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    ck_assert_int_eq(
        s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
        sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf1) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%10ld";
    ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf2) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%1.1f";
    ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf3) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%8.3c";
    ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf4) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%+5.5d aboba";
    int val = 10000;
    int a = s21_sprintf(str1, format, val);
    int b = sprintf(str2, format, val);
    ck_assert_int_eq(a, b);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf6) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%123f";
    double l = 11.123456;
    sprintf(str1, format, l);
    s21_sprintf(str2, format, l);
    ck_assert_pstr_eq(str1, str2);
    ck_assert_int_eq(s21_sprintf(str1, format, l), sprintf(str2, format, l));
} END_TEST

START_TEST(sprintf_test_sprintf7) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%7.4s";
    ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"), sprintf(str2, format, "aboba floppa"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf8) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%6.6u";
    ck_assert_int_eq(s21_sprintf(str1, format, 12341151), sprintf(str2, format, 12341151));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf9) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%li%ld%lu";
    ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111),
        sprintf(str2, format, 666666666666, 777, 111));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf10) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%hi%hd%hu";
    ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111), sprintf(str2, format, 666, -777, 111));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf11) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%+li%+lu%+d%+lf";
    s21_sprintf(str1, format, -123, 321, -5555, -1213.123);
    sprintf(str2, format, -123, 321, -5555, -1213.123);
    ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123),
        sprintf(str2, format, -123, 321, -5555, -1213.123));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf12) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%-11.11li%-35.5lu%-3.5ld%33.12lf\n";
    float k = 333.33213;
    s21_sprintf(str1, format, 66666666666, 5555555555, 44444444444, k);
    sprintf(str2, format, 66666666666, 5555555555, 44444444444, k);
    ck_assert_int_eq(
        s21_sprintf(str1, format, 66666666666, 5555555555, 44444444444, k),
        sprintf(str2, format, 66666666666, 5555555555, 44444444444, k));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf16) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "% c";
    ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf17) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "% s";
    ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
        sprintf(str2, format, "aboba likes floppa"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf18) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "% s% c";
    ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'), sprintf(str2, format, "", 'f'));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf19) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%210s";
    ck_assert_int_eq(s21_sprintf(str1, format, "AHHAHAHA\0AHHAHAHAH"),
        sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf20) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%-115s";
    ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"), sprintf(str2, format, "Nick her"));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf24) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%+2.1c%+4.2d%+5.4i%+10.2f%+55.55s%+1.1u";
    ck_assert_int_eq(
        s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                    "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
        sprintf(str2, format, 'f', 21, 42, 666.666,
                "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf25) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%.f";
    ck_assert_int_eq(s21_sprintf(str1, format, 121.123), sprintf(str2, format, 121.123));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf25_1) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    int a1 = s21_sprintf(str1, "%+.6i%+9.0f7%+1.3hds/%-9.3fz1lunc/zl`b[% .7iz`%+.2f%+6.9hi% 4f",
        120744, 999.5650283529501, 7597, 8911.343805338034,
        -373182, 10102.39699164747, -6872, -13388.76859890959);
    int a2 = sprintf(str2, "%+.6i%+9.0f7%+1.3hds/%-9.3fz1lunc/zl`b[% .7iz`%+.2f%+6.9hi% 4f",
        120744, 999.5650283529501, 7597, 8911.343805338034,
        -373182, 10102.39699164747, -6872, -13388.76859890959);
    ck_assert_int_eq(a1, a2);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf26) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%%";
    ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf27) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%%%%%%%%";
    ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));
    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(sprintf_test_sprintf29) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%-.f";
    ck_assert_int_eq(s21_sprintf(str1, format, 111.111), sprintf(str2, format, 111.111));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_test_sprintf30) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char format[] = "%-.1d";

    ck_assert_int_eq(s21_sprintf(str1, format, 111), sprintf(str2, format, 111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_width_char) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};
    char *format = "This is a simple wide char %5c";
    char w = 'c';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}

START_TEST(sprintf_minus_wide_char_1_1) {
    char str1[BUFF_SIZE] = {'\0'};
    char str2[BUFF_SIZE] = {'\0'};

    s21_sprintf(str1, "% 3.8i", 10);
    sprintf(str2, "% 3.8i", 10);
    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(test_s_sprintf) {
    char str[100] = {'\0'};
    char str2[100] = {'\0'};

    ck_assert_int_eq(
        (int)s21_sprintf(str, "Hello %s", "medgarha"), (int)sprintf(str2, "Hello %s", "medgarha"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-s", "medgarha"), sprintf(str2, "Hello %-s", "medgarha"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-20s", "medgarha"), sprintf(str2, "Hello %-20s", "medgarha"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-20.s", "medgarha"), sprintf(str2, "Hello %-20.s", "medgarha"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-.s", "medgarha"), sprintf(str2, "Hello %-.s", "medgarha"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %.s", "medgarha"), sprintf(str2, "Hello %.s", "medgarha"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-10.20s", "medgarha"), sprintf(str2, "Hello %-10.20s", "medgarha"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %-.20s", "medgarha"), sprintf(str2, "Hello %-.20s", "medgarha"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %21.20s", "medgarha"), sprintf(str2, "Hello %21.20s", "medgarha"));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello %21.20s and %-2.4s", "medgarha", "school"),
         sprintf(str2, "Hello %21.20s and %-2.4s", "medgarha", "school"));
} END_TEST

START_TEST(test_c_sprintf) {
    char str[100] = {'\0'};
    char str2[100] = {'\0'};

    ck_assert_int_eq(
        s21_sprintf(str, "Hello school %c %lc", '2', '&'), sprintf(str2, "Hello school %c %lc", '2', '&'));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello school %-c %c %%%%", '2', '1'),
         sprintf(str2, "Hello school %-c %c %%%%", '2', '1'));
    ck_assert_int_eq(
        s21_sprintf(str, "Hello school %20c %-10lc", '2', 0x61),
         sprintf(str2, "Hello school %20c %-10lc", '2', 0x61));
} END_TEST

START_TEST(test_d_sprintf) {
    char str[100] = {'\0'};
    char str2[100] = {'\0'};

    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %d ! = %d", +4, -1),
         sprintf(str2, "2 + 2 = %d ! = %d", +4, -1));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %-d ! = %+d", 4, 10),
         sprintf(str2, "2 + 2 = %-d ! = %+d", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % -d ! = %+-d", +4, 10),
         sprintf(str2, "2 + 2 = % -d ! = %+-d", +4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10d ! = %+-20d", -4, 10),
         sprintf(str2, "2 + 2 = % 10d ! = %+-20d", -4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.d ! = %+-20.20d", 0, -182),
         sprintf(str2, "2 + 2 = % 10.d ! = %+-20.20d", 0, -182));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.hd ! = %+-20.20ld", 4, 276892067102856),
         sprintf(str2, "2 + 2 = % 10.hd ! = %+-20.20ld", (short)4, 276892067102856));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.hd ! = %+-20.20ld", 010, 0x1275623445),
         sprintf(str2, "2 + 2 = % 10.hd ! = %+-20.20ld", (short)010, 0x1275623445));
} END_TEST

START_TEST(test_i_sprintf) {
    char str[100] = {'\0'};
    char str2[100] = {'\0'};

    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %i ! = %i", 4, 10),
         sprintf(str2, "2 + 2 = %i ! = %i", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %-i ! = %+i", 4, 10),
         sprintf(str2, "2 + 2 = %-i ! = %+i", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % -i ! = %+-i", 4, -10),
         sprintf(str2, "2 + 2 = % -i ! = %+-i", 4, -10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10d ! = %+-20i", 4, 10),
         sprintf(str2, "2 + 2 = % 10i ! = %+-20i", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.i ! = %+-20.20i", 4, -10),
         sprintf(str2, "2 + 2 = % 10.i ! = %+-20.20i", 4, -10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.hi ! = %+-20.20li", -4, +276892067102856),
        sprintf(str2, "2 + 2 = % 10.hi ! = %+-20.20li", (short)-4, +276892067102856));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.hi ! = %+-20.20li", 010, 0x1275623445),
         sprintf(str2, "2 + 2 = % 10.hi ! = %+-20.20li", (short)010, 0x1275623445));
} END_TEST

START_TEST(test_u_sprintf) {
    char str[100] = {'\0'};
    char str2[100] = {'\0'};

    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %d ! = %u", -4, 10),
        sprintf(str2, "2 + 2 = %d ! = %u", -4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %-d ! = %u", 4, 10),
        sprintf(str2, "2 + 2 = %-d ! = %u", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % -i ! = %-u", 4, 10),
        sprintf(str2, "2 + 2 = % -i ! = %-u", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10d ! = %-20u", 4, 10),
        sprintf(str2, "2 + 2 = % 10d ! = %-20u", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = % 10.i ! = %-20.20u", 4, 10),
        sprintf(str2, "2 + 2 = % 10.i ! = %-20.20u", 4, 10));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %10.hu ! = %-20.20lu", 4, 276892067102856),
        sprintf(str2, "2 + 2 = %10.hu ! = %-20.20lu", (unsigned short)4, 276892067102856));
} END_TEST

START_TEST(test_f_sprintf) {
    char str[100] = {'\0'};
    char str2[100] = {'\0'};
    float yup = 4.21;
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %f ! = %f", -yup, +42.21),
        sprintf(str2, "2 + 2 = %f ! = %f", -yup, +42.21));
    s21_sprintf(str, "%-f %+f", yup, +42.291);
    sprintf(str2, "%-f %+f", yup, +42.291);
    ck_assert_pstr_eq(str, str2);
    ck_assert_int_eq(
        s21_sprintf(str, "%-10f %+12f", yup, +42.21),
        sprintf(str2, "%-10f %+12f", yup, +42.21));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %- 10.f ! = %+12.5f", -4.21, +42.21),
        sprintf(str2, "2 + 2 = %- 10.f ! = %+12.5f", -4.21, +42.21));
    ck_assert_int_eq(
        s21_sprintf(str, "2 + 2 = %- 10.f ! = %+12.5lf", -4.21, +42.21),
        sprintf(str2, "2 + 2 = %- 10.f ! = %+12.5lf", -4.21, +42.21));
} END_TEST

START_TEST(sprintf_i_4026) {
    char str1[1024] = "";
    char str2[1024] = "";
    s21_sprintf(str2, "6 %%|%5c|% 8.4d|% 9.2d|% 3.7i|% 3.8i|% 9.5f|%10s%4.2u\n",
        'A', 33333, -4444, -10, 10, -15.34, "STRING", 20);
    sprintf(str1, "6 %%|%5c|% 8.4d|% 9.2d|% 3.7i|% 3.8i|% 9.5f|%10s%4.2u\n",
        'A', 33333, -4444, -10, 10, -15.34, "STRING", 20);
    ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *s21_sprintf_suite(void) {
    Suite *s = suite_create("sprintf and s21_sprintf");
    TCase *sprintf_case;

    sprintf_case = tcase_create("SPRINTF_TEST_NULL\n");
    tcase_add_test(sprintf_case, S21_sprintf_test_NULL_1);
    tcase_add_test(sprintf_case, S21_sprintf_test_NULL_2);
    tcase_add_test(sprintf_case, S21_sprintf_test_NULL_3);
    tcase_add_test(sprintf_case, sprintf_i_4026);
    suite_add_tcase(s, sprintf_case);

    sprintf_case = tcase_create("SPRINTF_TESTS_SPEC_D\n");
    tcase_add_test(sprintf_case, s21_sprintf_test_d_1);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_2);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_3);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_4);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_5);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_6);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_7);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_8);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_9);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_10);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_11);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_12);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_13);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_14);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_15);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_16);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_17);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_18);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_19);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_20);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_21);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_22);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_23);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_24);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_25);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_26);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_27);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_28);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_29);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_30);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_31);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_32);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_33);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_34);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_35);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_36);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_37);
    tcase_add_test(sprintf_case, s21_sprintf_test_d_38);
    suite_add_tcase(s, sprintf_case);

    sprintf_case = tcase_create("SPRINTF_TESTS_SPEC_U");
    tcase_add_test(sprintf_case, s21_sprintf_test_u_1);
    tcase_add_test(sprintf_case, s21_sprintf_test_u_2);
    tcase_add_test(sprintf_case, s21_sprintf_test_u_3);
    tcase_add_test(sprintf_case, s21_sprintf_test_u_4);
    tcase_add_test(sprintf_case, s21_sprintf_test_u_5);
    suite_add_tcase(s, sprintf_case);

    sprintf_case = tcase_create("SPRINTF_TESTS_SPEC_F");
    tcase_add_test(sprintf_case, s21_sprintf_test_f_1);
    tcase_add_test(sprintf_case, s21_sprintf_test_f_2);
    tcase_add_test(sprintf_case, s21_sprintf_test_f_3);
    tcase_add_test(sprintf_case, s21_sprintf_test_f_4);
    suite_add_tcase(s, sprintf_case);

    sprintf_case = tcase_create("SPRINTF_TESTS_SPEC_C\n");
    tcase_add_test(sprintf_case, s21_sprintf_test_c_1);
    tcase_add_test(sprintf_case, s21_sprintf_test_c_2);
    tcase_add_test(sprintf_case, s21_sprintf_test_c_3);
    tcase_add_test(sprintf_case, s21_sprintf_test_c_4);
    tcase_add_test(sprintf_case, s21_sprintf_test_c_5);
    tcase_add_test(sprintf_case, s21_sprintf_test_c_6);
    tcase_add_test(sprintf_case, s21_sprintf_test_c_7);
    tcase_add_test(sprintf_case, s21_sprintf_test_c_8);
    suite_add_tcase(s, sprintf_case);

    sprintf_case = tcase_create("SPRINTF_TESTS_SPEC_S");
    tcase_add_test(sprintf_case, s21_sprintf_test_s_1);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_2);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_3);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_4);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_5);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_6);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_7);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_8);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_9);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_10);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_11);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_12);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_13);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_14);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_15);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_16);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_17);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_18);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_19);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_20);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_21);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_22);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_23);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_24);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_25);
    tcase_add_test(sprintf_case, s21_sprintf_test_s_26);
    suite_add_tcase(s, sprintf_case);

    sprintf_case = tcase_create("SPRINTF_TESTS_SPEC_PROCENT\n");
    tcase_add_test(sprintf_case, s21_sprintf_test_procent_1);
    tcase_add_test(sprintf_case, s21_sprintf_test_procent_2);
    tcase_add_test(sprintf_case, s21_sprintf_test_procent_3);
    suite_add_tcase(s, sprintf_case);

    ///////////////////////////////////

    tcase_add_test(sprintf_case, sprintf_0);
    tcase_add_test(sprintf_case, sprintf_1);
    tcase_add_test(sprintf_case, sprintf_2);
    tcase_add_test(sprintf_case, sprintf_3);
    tcase_add_test(sprintf_case, sprintf_4);
    tcase_add_test(sprintf_case, sprintf_5);
    tcase_add_test(sprintf_case, sprintf_6);
    tcase_add_test(sprintf_case, sprintf_7);
    tcase_add_test(sprintf_case, sprintf_8);
    tcase_add_test(sprintf_case, sprintf_9);
    tcase_add_test(sprintf_case, sprintf_10);
    tcase_add_test(sprintf_case, sprintf_11);
    tcase_add_test(sprintf_case, sprintf_12);
    tcase_add_test(sprintf_case, sprintf_13);
    tcase_add_test(sprintf_case, sprintf_14);
    tcase_add_test(sprintf_case, sprintf_15);
    tcase_add_test(sprintf_case, sprintf_16);
    tcase_add_test(sprintf_case, sprintf_17);
    tcase_add_test(sprintf_case, sprintf_18);
    tcase_add_test(sprintf_case, sprintf_19);
    tcase_add_test(sprintf_case, sprintf_22);
    tcase_add_test(sprintf_case, sprintf_23);
    tcase_add_test(sprintf_case, sprintf_24);
    tcase_add_test(sprintf_case, sprintf_25);
    tcase_add_test(sprintf_case, sprintf_26);
    tcase_add_test(sprintf_case, sprintf_27);
    tcase_add_test(sprintf_case, sprintf_28);
    tcase_add_test(sprintf_case, sprintf_29);
    tcase_add_test(sprintf_case, sprintf_30);
    tcase_add_test(sprintf_case, sprintf_31);
    tcase_add_test(sprintf_case, sprintf_32);
    tcase_add_test(sprintf_case, sprintf_33);
    tcase_add_test(sprintf_case, sprintf_34);
    tcase_add_test(sprintf_case, sprintf_35);
    tcase_add_test(sprintf_case, sprintf_36);
    tcase_add_test(sprintf_case, sprintf_37);
    tcase_add_test(sprintf_case, sprintf_38);
    tcase_add_test(sprintf_case, sprintf_39);
    tcase_add_test(sprintf_case, sprintf_40);
    tcase_add_test(sprintf_case, sprintf_41);
    tcase_add_test(sprintf_case, sprintf_42);
    tcase_add_test(sprintf_case, sprintf_43);
    tcase_add_test(sprintf_case, sprintf_44);
    tcase_add_test(sprintf_case, sprintf_45);
    tcase_add_test(sprintf_case, sprintf_46);
    tcase_add_test(sprintf_case, sprintf_47);
    tcase_add_test(sprintf_case, sprintf_50);
    tcase_add_test(sprintf_case, sprintf_51);
    tcase_add_test(sprintf_case, sprintf_52);
    tcase_add_test(sprintf_case, sprintf_53);
    tcase_add_test(sprintf_case, sprintf_54);
    tcase_add_test(sprintf_case, sprintf_55);
    tcase_add_test(sprintf_case, sprintf_56);
    tcase_add_test(sprintf_case, sprintf_57);
    tcase_add_test(sprintf_case, sprintf_58);
    tcase_add_test(sprintf_case, sprintf_59);
    tcase_add_test(sprintf_case, sprintf_60);
    tcase_add_test(sprintf_case, sprintf_61);
    tcase_add_test(sprintf_case, sprintf_62);
    tcase_add_test(sprintf_case, sprintf_63);
    tcase_add_test(sprintf_case, sprintf_64);
    tcase_add_test(sprintf_case, sprintf_65);
    tcase_add_test(sprintf_case, sprintf_66);
    tcase_add_test(sprintf_case, sprintf_67);
    tcase_add_test(sprintf_case, sprintf_68);
    tcase_add_test(sprintf_case, sprintf_69);
    tcase_add_test(sprintf_case, sprintf_70);
    tcase_add_test(sprintf_case, sprintf_71);
    tcase_add_test(sprintf_case, sprintf_72);
    tcase_add_test(sprintf_case, sprintf_73);
    tcase_add_test(sprintf_case, sprintf_74);
    tcase_add_test(sprintf_case, sprintf_77);
    tcase_add_test(sprintf_case, sprintf_78);
    tcase_add_test(sprintf_case, sprintf_79);
    tcase_add_test(sprintf_case, sprintf_80);
    tcase_add_test(sprintf_case, sprintf_81);
    tcase_add_test(sprintf_case, sprintf_82);
    tcase_add_test(sprintf_case, sprintf_83);
    tcase_add_test(sprintf_case, sprintf_84);
    tcase_add_test(sprintf_case, sprintf_85);
    tcase_add_test(sprintf_case, sprintf_86);
    tcase_add_test(sprintf_case, sprintf_87);
    tcase_add_test(sprintf_case, sprintf_88);
    tcase_add_test(sprintf_case, sprintf_89);
    tcase_add_test(sprintf_case, sprintf_90);
    tcase_add_test(sprintf_case, sprintf_91);
    tcase_add_test(sprintf_case, sprintf_92);
    tcase_add_test(sprintf_case, sprintf_93);
    tcase_add_test(sprintf_case, sprintf_94);
    tcase_add_test(sprintf_case, sprintf_95);
    tcase_add_test(sprintf_case, sprintf_96);
    tcase_add_test(sprintf_case, sprintf_97);
    tcase_add_test(sprintf_case, sprintf_98);
    tcase_add_test(sprintf_case, sprintf_99);
    tcase_add_test(sprintf_case, sprintf_100);
    tcase_add_test(sprintf_case, sprintf_101);
    tcase_add_test(sprintf_case, sprintf_102);
    tcase_add_test(sprintf_case, sprintf_103);
    tcase_add_test(sprintf_case, sprintf_104);
    tcase_add_test(sprintf_case, sprintf_105);
    tcase_add_test(sprintf_case, sprintf_106);
    tcase_add_test(sprintf_case, sprintf_107);
    tcase_add_test(sprintf_case, sprintf_108);
    tcase_add_test(sprintf_case, sprintf_109);
    tcase_add_test(sprintf_case, sprintf_110);
    tcase_add_test(sprintf_case, sprintf_111);
    tcase_add_test(sprintf_case, sprintf_112);
    tcase_add_test(sprintf_case, sprintf_113);
    tcase_add_test(sprintf_case, sprintf_114);
    tcase_add_test(sprintf_case, sprintf_115);
    tcase_add_test(sprintf_case, sprintf_116);
    tcase_add_test(sprintf_case, sprintf_117);
    tcase_add_test(sprintf_case, sprintf_118);
    tcase_add_test(sprintf_case, sprintf_119);
    tcase_add_test(sprintf_case, sprintf_120);
    tcase_add_test(sprintf_case, sprintf_121);
    tcase_add_test(sprintf_case, sprintf_122);
    tcase_add_test(sprintf_case, sprintf_123);
    tcase_add_test(sprintf_case, sprintf_124);
    tcase_add_test(sprintf_case, sprintf_125);
    tcase_add_test(sprintf_case, sprintf_126);
    tcase_add_test(sprintf_case, sprintf_127);
    tcase_add_test(sprintf_case, sprintf_128);
    tcase_add_test(sprintf_case, sprintf_129);
    tcase_add_test(sprintf_case, sprintf_130);
    tcase_add_test(sprintf_case, sprintf_131);
    tcase_add_test(sprintf_case, sprintf_132);
    tcase_add_test(sprintf_case, sprintf_133);
    tcase_add_test(sprintf_case, sprintf_134);
    tcase_add_test(sprintf_case, sprintf_135);
    tcase_add_test(sprintf_case, sprintf_136);
    tcase_add_test(sprintf_case, sprintf_137);
    tcase_add_test(sprintf_case, sprintf_138);
    tcase_add_test(sprintf_case, sprintf_139);
    tcase_add_test(sprintf_case, sprintf_140);
    tcase_add_test(sprintf_case, sprintf_141);
    tcase_add_test(sprintf_case, sprintf_142);
    tcase_add_test(sprintf_case, sprintf_143);
    tcase_add_test(sprintf_case, sprintf_144);
    tcase_add_test(sprintf_case, sprintf_145);
    tcase_add_test(sprintf_case, sprintf_146);
    tcase_add_test(sprintf_case, sprintf_147);
    tcase_add_test(sprintf_case, sprintf_148);
    tcase_add_test(sprintf_case, sprintf_149);
    tcase_add_test(sprintf_case, sprintf_150);
    tcase_add_test(sprintf_case, sprintf_151);
    tcase_add_test(sprintf_case, sprintf_152);
    tcase_add_test(sprintf_case, sprintf_153);
    tcase_add_test(sprintf_case, sprintf_154);
    tcase_add_test(sprintf_case, sprintf_155);
    tcase_add_test(sprintf_case, sprintf_156);
    tcase_add_test(sprintf_case, sprintf_157);
    tcase_add_test(sprintf_case, sprintf_158);
    tcase_add_test(sprintf_case, sprintf_159);
    tcase_add_test(sprintf_case, sprintf_160);
    tcase_add_test(sprintf_case, sprintf_161);
    tcase_add_test(sprintf_case, sprintf_162);
    tcase_add_test(sprintf_case, sprintf_163);
    tcase_add_test(sprintf_case, sprintf_164);
    tcase_add_test(sprintf_case, sprintf_165);
    tcase_add_test(sprintf_case, sprintf_166);
    tcase_add_test(sprintf_case, sprintf_167);
    tcase_add_test(sprintf_case, sprintf_168);

    tcase_add_test(sprintf_case, sprintf_simple_int);
    tcase_add_test(sprintf_case, sprintf_precise_int);
    tcase_add_test(sprintf_case, sprintf_width_int);
    tcase_add_test(sprintf_case, sprintf_minus_width_int);
    tcase_add_test(sprintf_case, sprintf_plus_width_int);
    tcase_add_test(sprintf_case, sprintf_flags_short_int);
    tcase_add_test(sprintf_case, sprintf_flags_long_int);
    tcase_add_test(sprintf_case, sprintf_zero_precision_zero_int);
    tcase_add_test(sprintf_case, sprintf_space_flag_int);

    tcase_add_test(sprintf_case, sprintf_unsigned_val);
    tcase_add_test(sprintf_case, sprintf_unsigned_val_width);
    tcase_add_test(sprintf_case, sprintf_unsigned_val_flags);
    tcase_add_test(sprintf_case, sprintf_unsigned_val_precision);
    tcase_add_test(sprintf_case, sprintf_unsigned_val_short);
    tcase_add_test(sprintf_case, sprintf_unsigned_val_long);
    tcase_add_test(sprintf_case, sprintf_unsigned_val_many);

    tcase_add_test(sprintf_case, sprintf_octal_short);
    tcase_add_test(sprintf_case, sprintf_unsigned_zero);
    tcase_add_test(sprintf_case, sprintf_one_char);
    tcase_add_test(sprintf_case, sprintf_one_precision);
    tcase_add_test(sprintf_case, sprintf_one_flags);
    tcase_add_test(sprintf_case, sprintf_one_width);
    tcase_add_test(sprintf_case, sprintf_one_many);
    tcase_add_test(sprintf_case, sprintf_one_many_flags);

    tcase_add_test(sprintf_case, sprintf_string);
    tcase_add_test(sprintf_case, sprintf_string_precision);
    tcase_add_test(sprintf_case, sprintf_string_width);
    tcase_add_test(sprintf_case, sprintf_string_flags);
    tcase_add_test(sprintf_case, sprintf_string_long);
    tcase_add_test(sprintf_case, sprintf_string_many);
    tcase_add_test(sprintf_case, sprintf_string_width_huge);
    tcase_add_test(sprintf_case, sprintf_float_flags);
    tcase_add_test(sprintf_case, sprintf_all_empty);
    tcase_add_test(sprintf_case, sprintf_empty_format_and_parameters);

    tcase_add_test(sprintf_case, sprintf_test_one_char);
    tcase_add_test(sprintf_case, sprintf_test_many_char);
    tcase_add_test(sprintf_case, sprintf_test_one_string);
    tcase_add_test(sprintf_case, sprintf_test_many_string);
    tcase_add_test(sprintf_case, sprintf_test_one_dec);
    tcase_add_test(sprintf_case, sprintf_test_many_dec);
    tcase_add_test(sprintf_case, sprintf_test_one_int);
    tcase_add_test(sprintf_case, sprintf_test_many_int);
    tcase_add_test(sprintf_case, sprintf_test_one_float);
    tcase_add_test(sprintf_case, sprintf_test_many_float);
    tcase_add_test(sprintf_case, sprintf_test_one_unsigned_dec);
    tcase_add_test(sprintf_case, sprintf_test_many_unsigned_dec);
    tcase_add_test(sprintf_case, sprintf_test_one_char_with_alignment_left);
    tcase_add_test(sprintf_case, sprintf_test_one_char_with_alignment_right);
    tcase_add_test(sprintf_case, sprintf_test_many_char_with_alignment);
    tcase_add_test(sprintf_case, sprintf_unsigned_val_many_flags);
    tcase_add_test(sprintf_case, sprintf_test_sprintf1);
    tcase_add_test(sprintf_case, sprintf_test_sprintf2);
    tcase_add_test(sprintf_case, sprintf_test_sprintf3);
    tcase_add_test(sprintf_case, sprintf_test_sprintf4);
    tcase_add_test(sprintf_case, sprintf_test_sprintf6);
    tcase_add_test(sprintf_case, sprintf_test_sprintf7);
    tcase_add_test(sprintf_case, sprintf_test_sprintf8);
    tcase_add_test(sprintf_case, sprintf_test_sprintf9);
    tcase_add_test(sprintf_case, sprintf_test_sprintf10);
    tcase_add_test(sprintf_case, sprintf_test_sprintf11);
    tcase_add_test(sprintf_case, sprintf_test_sprintf12);
    tcase_add_test(sprintf_case, sprintf_test_sprintf16);
    tcase_add_test(sprintf_case, sprintf_test_sprintf17);
    tcase_add_test(sprintf_case, sprintf_test_sprintf18);
    tcase_add_test(sprintf_case, sprintf_test_sprintf19);
    tcase_add_test(sprintf_case, sprintf_test_sprintf20);
    tcase_add_test(sprintf_case, sprintf_test_sprintf24);
    tcase_add_test(sprintf_case, sprintf_test_sprintf25);
    tcase_add_test(sprintf_case, sprintf_test_sprintf25_1);
    tcase_add_test(sprintf_case, sprintf_test_sprintf29);
    tcase_add_test(sprintf_case, sprintf_test_sprintf30);
    tcase_add_test(sprintf_case, sprintf_test_sprintf26);
    tcase_add_test(sprintf_case, sprintf_test_sprintf27);
    tcase_add_test(sprintf_case, sprintf_minus_wide_char_1_1);
    tcase_add_test(sprintf_case, sprintf_width_char);

    tcase_add_test(sprintf_case, test_s_sprintf);
    tcase_add_test(sprintf_case, test_c_sprintf);
    tcase_add_test(sprintf_case, test_f_sprintf);
    tcase_add_test(sprintf_case, test_d_sprintf);
    tcase_add_test(sprintf_case, test_i_sprintf);
    tcase_add_test(sprintf_case, test_u_sprintf);

    suite_add_tcase(s, sprintf_case);

    return s;
}
