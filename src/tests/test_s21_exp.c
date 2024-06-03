#include "../s21_test_math.h"

START_TEST(exp_test_1) {
  long double var = 0.2586;
  long double result = s21_exp(var);
  long double expected = exp(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(exp_test_2) {
  long double var = 1;
  long double result = s21_exp(var);
  long double expected = exp(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(exp_test_3) {
  long double var = 10;
  long double result = s21_exp(var);
  long double expected = exp(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(exp_test_4) {
  long double var = 20.2586;
  long double result = s21_exp(var);
  long double expected = exp(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(exp_test_5) {
  long double var = -4.3214;
  long double result = s21_exp(var);
  long double expected = exp(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(exp_test_6) {
  long double var = -10;
  long double result = s21_exp(var);
  long double expected = exp(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(exp_test_7) {
  long double var = -0.99999;
  long double result = s21_exp(var);
  long double expected = exp(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(exp_test_8) {
  long double var = -26.9852;
  long double result = s21_exp(var);
  long double expected = exp(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(exp_test_9) {
  long double var = -50;
  long double result = s21_exp(var);
  long double expected = exp(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(exp_test_10) {
  long double var = 1000;
  long double result = s21_exp(var);
  long double expected = exp(var);
  ck_assert(isinf(result));
  ck_assert(isinf(expected));
}
END_TEST

Suite *exp_suite(void) {
  Suite *exp_suite = suite_create("exp_suite");
  TCase *tc_exp = tcase_create("exp");

  tcase_add_test(tc_exp, exp_test_1);
  tcase_add_test(tc_exp, exp_test_2);
  tcase_add_test(tc_exp, exp_test_3);
  tcase_add_test(tc_exp, exp_test_4);
  tcase_add_test(tc_exp, exp_test_5);
  tcase_add_test(tc_exp, exp_test_6);
  tcase_add_test(tc_exp, exp_test_7);
  tcase_add_test(tc_exp, exp_test_8);
  tcase_add_test(tc_exp, exp_test_9);
  tcase_add_test(tc_exp, exp_test_10);

  suite_add_tcase(exp_suite, tc_exp);
  return exp_suite;
}