#ifndef SRC_S21_TEST_H_
#define SRC_S21_TEST_H_

#include <stdlib.h>
#include <stdarg.h>
#include <check.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <limits.h>
#include "s21_string.h"

#define BUFF_SIZE 512

Suite *s21_string_a_suite();
Suite *s21_sprintf_suite();

#endif  // SRC_S21_TEST_H_
