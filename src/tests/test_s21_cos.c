#include "../s21_test_math.h"

START_TEST(cos_test_1) {
  long double var = 0;
  long double result = s21_cos(var);
  long double expected = cos(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(cos_test_2) {
  long double var = S21_PI / 4;
  long double result = s21_cos(var);
  long double expected = cos(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(cos_test_3) {
  long double var = S21_PI / 2;
  long double result = s21_cos(var);
  long double expected = cos(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(cos_test_4) {
  long double var = 1;
  long double result = s21_cos(var);
  long double expected = cos(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(cos_test_5) {
  long double var = 5 * S21_PI / 4;
  long double result = s21_cos(var);
  long double expected = cos(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(cos_test_6) {
  long double var = -5 * S21_PI / 4;
  long double result = s21_cos(var);
  long double expected = cos(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

Suite *cos_suite(void) {
  Suite *cos_suite = suite_create("cos_suite");
  TCase *tc_cos = tcase_create("cos");

  tcase_add_test(tc_cos, cos_test_1);
  tcase_add_test(tc_cos, cos_test_2);
  tcase_add_test(tc_cos, cos_test_3);
  tcase_add_test(tc_cos, cos_test_4);
  tcase_add_test(tc_cos, cos_test_5);
  tcase_add_test(tc_cos, cos_test_6);

  suite_add_tcase(cos_suite, tc_cos);
  return cos_suite;
}