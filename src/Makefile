SRC=s21_string.c s21_sprintf.c
OBJ=$(SRC:.c=.o)
CC=gcc
RM=rm -rf
CFLAGS=-Wall -Wextra -Werror
CFLAGS_T=-Wall -Wextra -Werror --coverage
LIB=s21_string.a

all : clean $(LIB) test gcov_report

$(LIB) : $(OBJ) s21_string.h
	ar rcs $(LIB) $(OBJ)
	ranlib $(LIB)

test: build_report

gcov_report : build_report report


build_report : $(LIB) s21_string_t.o s21_sprintf_t.o s21_test_string_a.o s21_test_sprintf.o s21_unit_tests.o
	$(CC) $(CFLAGS) $^ -lcheck -lgcov -o s21_unit_tests.out
	./s21_unit_tests.out

clean:
	$(RM) *.o *.out *.gc* *.a *.info *.css *.html s21_report
	$(RM) *.out.*

report :
	./s21_unit_tests.out
	gcov -a -f -b *.gcda
	gcovr
	gcovr --html-details coverage.html

s21_string_t.o : s21_string.c  s21_string.h
	$(CC) $(CFLAGS_T) -c $< -o $@
s21_sprintf_t.o : s21_sprintf.c s21_string.h
	$(CC) $(CFLAGS_T) -c $< -o $@
