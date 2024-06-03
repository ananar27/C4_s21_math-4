#include "../s21_test_math.h"

START_TEST(sin_test_1) {
  long double var = 0;
  long double result = s21_sin(var);
  long double expected = sin(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sin_test_2) {
  long double var = S21_PI / 6;
  long double result = s21_sin(var);
  long double expected = sin(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sin_test_3) {
  long double var = S21_PI / 4;
  long double result = s21_sin(var);
  long double expected = sin(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sin_test_4) {
  long double var = S21_PI / 2;
  long double result = s21_sin(var);
  long double expected = sin(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sin_test_5) {
  long double var = S21_PI;
  long double result = s21_sin(var);
  long double expected = sin(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sin_test_6) {
  long double var = 3 * S21_PI / 2;
  long double result = s21_sin(var);
  long double expected = sin(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sin_test_7) {
  long double var = 2 * S21_PI;
  long double result = s21_sin(var);
  long double expected = sin(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

Suite *sin_suite(void) {
  Suite *sin_suite = suite_create("sin_suite");
  TCase *tc_sin = tcase_create("sin");

  tcase_add_test(tc_sin, sin_test_1);
  tcase_add_test(tc_sin, sin_test_2);
  tcase_add_test(tc_sin, sin_test_3);
  tcase_add_test(tc_sin, sin_test_4);
  tcase_add_test(tc_sin, sin_test_5);
  tcase_add_test(tc_sin, sin_test_6);
  tcase_add_test(tc_sin, sin_test_7);

  suite_add_tcase(sin_suite, tc_sin);

  return sin_suite;
}