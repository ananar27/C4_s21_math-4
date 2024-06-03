#include "../s21_test_math.h"

START_TEST(log_test_1) {
  long double var = 0;
  long double result = s21_log(var);
  long double expected = log(var);
  ck_assert(isinf(result));
  ck_assert(isinf(expected));
}
END_TEST

START_TEST(log_test_2) {
  long double var = 1;
  long double result = s21_log(var);
  long double expected = log(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(log_test_3) {
  long double var = 255;
  long double result = s21_log(var);
  long double expected = log(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(log_test_4) {
  long double var = 0.3;
  long double result = s21_log(var);
  long double expected = log(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(log_test_5) {
  long double var = -25858;
  long double result = s21_log(var);
  long double expected = log(var);
  ck_assert(isnan(result));
  ck_assert(isnan(expected));
}
END_TEST

START_TEST(log_test_6) {
  long double var = -1000;
  long double result = s21_log(var);
  long double expected = log(var);
  ck_assert(isnan(result));
  ck_assert(isnan(expected));
}
END_TEST

START_TEST(log_test_7) {
  long double var = 1000;
  long double result = s21_log(var);
  long double expected = log(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(log_test_8) {
  long double var = S21_POS_INF;
  long double result = s21_log(var);
  long double expected = log(var);
  ck_assert(isinf(result));
  ck_assert(isinf(expected));
}
END_TEST

Suite *log_suite(void) {
  Suite *log_suite = suite_create("log_suite");
  TCase *tc_log = tcase_create("log");

  tcase_add_test(tc_log, log_test_1);
  tcase_add_test(tc_log, log_test_2);
  tcase_add_test(tc_log, log_test_3);
  tcase_add_test(tc_log, log_test_4);
  tcase_add_test(tc_log, log_test_5);
  tcase_add_test(tc_log, log_test_6);
  tcase_add_test(tc_log, log_test_7);
  tcase_add_test(tc_log, log_test_8);

  suite_add_tcase(log_suite, tc_log);
  return log_suite;
}