#include "../s21_test_math.h"

START_TEST(ceil_test_1) {
  long double result = s21_ceil(S21_POS_INF);
  long double expected = ceill(S21_POS_INF);
  ck_assert(isinf(result));
  ck_assert(isinf(expected));
}
END_TEST

START_TEST(ceil_test_2) {
  long double result = s21_ceil(1.05);
  long double expected = ceill(1.05);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(ceil_test_3) {
  long double result = s21_ceil(1.005);
  long double expected = ceill(1.005);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(ceil_test_4) {
  long double result = s21_ceil(-1.05);
  long double expected = ceill(-1.05);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(ceil_test_5) {
  long double result = s21_ceil(-1.005);
  long double expected = ceill(-1.005);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(ceil_test_6) {
  long double result = s21_ceil(1000000.999);
  long double expected = ceill(1000000.999);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(ceil_test_7) {
  long double result = s21_ceil(S21_NEG_INF);
  long double expected = ceill(S21_NEG_INF);
  ck_assert(isinf(result));
  ck_assert(isinf(expected));
}
END_TEST

START_TEST(ceil_test_8) {
  long double result = s21_ceil(0);
  long double expected = ceill(0);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(ceil_test_9) {
  long double result = s21_ceil(1000000);
  long double expected = ceill(1000000);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(ceil_test_10) {
  long double result = s21_ceil(-1000000);
  long double expected = ceill(-1000000);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

Suite *ceil_suite(void) {
  Suite *ceil_suite = suite_create("ceil_suite");
  TCase *tc_ceil = tcase_create("ceil");

  tcase_add_test(tc_ceil, ceil_test_1);
  tcase_add_test(tc_ceil, ceil_test_2);
  tcase_add_test(tc_ceil, ceil_test_3);
  tcase_add_test(tc_ceil, ceil_test_4);
  tcase_add_test(tc_ceil, ceil_test_5);
  tcase_add_test(tc_ceil, ceil_test_6);
  tcase_add_test(tc_ceil, ceil_test_7);
  tcase_add_test(tc_ceil, ceil_test_8);
  tcase_add_test(tc_ceil, ceil_test_9);
  tcase_add_test(tc_ceil, ceil_test_10);

  suite_add_tcase(ceil_suite, tc_ceil);

  return ceil_suite;
}