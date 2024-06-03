#include "../s21_test_math.h"

START_TEST(sqrt_test_1) {
  int result = s21_sqrt(-25);
  int expected = sqrt(-25);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sqrt_test_2) {
  int result = s21_sqrt(-100);
  int expected = sqrt(-100);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sqrt_test_3) {
  int result = s21_sqrt(0);
  int expected = sqrt(0);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sqrt_test_4) {
  int result = s21_sqrt(25);
  int expected = sqrt(25);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sqrt_test_5) {
  int result = s21_sqrt(100);
  int expected = sqrt(100);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sqrt_test_6) {
  int result = s21_sqrt(144);
  int expected = sqrt(144);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sqrt_test_7) {
  int result = s21_sqrt(0.5);
  int expected = sqrt(0.5);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(sqrt_test_8) {
  int result = s21_sqrt(100.5);
  int expected = sqrt(100.5);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

Suite *sqrt_suite(void) {
  Suite *sqrt_suite = suite_create("sqrt_suite");
  TCase *tc_sqrt = tcase_create("sqrt");

  tcase_add_test(tc_sqrt, sqrt_test_1);
  tcase_add_test(tc_sqrt, sqrt_test_2);
  tcase_add_test(tc_sqrt, sqrt_test_3);
  tcase_add_test(tc_sqrt, sqrt_test_4);
  tcase_add_test(tc_sqrt, sqrt_test_5);
  tcase_add_test(tc_sqrt, sqrt_test_6);
  tcase_add_test(tc_sqrt, sqrt_test_7);
  tcase_add_test(tc_sqrt, sqrt_test_8);

  suite_add_tcase(sqrt_suite, tc_sqrt);

  return sqrt_suite;
}