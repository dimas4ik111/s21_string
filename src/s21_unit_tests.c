#include "s21_string.h"
#include "s21_test.h"

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    int no_failed = 0;

    Suite *s1 = s21_string_a_suite();
    Suite *s2 = s21_sprintf_suite();

    SRunner *string_runner;
    SRunner *sprintf_runner;


    string_runner = srunner_create(s1);
    sprintf_runner = srunner_create(s2);

    srunner_set_fork_status(string_runner, CK_NOFORK);
    srunner_set_fork_status(sprintf_runner, CK_NOFORK);

    srunner_run_all(string_runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(string_runner);
    srunner_free(string_runner);

    srunner_run_all(sprintf_runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(sprintf_runner);
    srunner_free(sprintf_runner);

    return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
