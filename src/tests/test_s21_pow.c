#include "../s21_test_math.h"

START_TEST(pow_test_1) {
  long double base = 1.25;
  long double exp = 0;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_2) {
  long double base = 1;
  long double exp = 1;
  long double result = s21_pow(base, exp);
  long double expected = powl(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_3) {
  long double base = 4.2525865;
  long double exp = 0.5656565;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_4) {
  long double base = 789.2525865;
  long double exp = 0.565;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_5) {
  long double base = 4.865;
  long double exp = S21_POS_INF;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert(isinf(result));
  ck_assert(isinf(expected));
}
END_TEST

START_TEST(pow_test_6) {
  long double base = -1;
  long double exp = S21_POS_INF;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_7) {
  long double base = -1;
  long double exp = S21_NEG_INF;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_8) {
  long double base = 0.5;
  long double exp = S21_POS_INF;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_9) {
  long double base = 3;
  long double exp = S21_NEG_INF;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_10) {
  long double base = S21_NEG_INF;
  long double exp = -2;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_11) {
  long double base = S21_NEG_INF;
  long double exp = -3;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_12) {
  long double base = S21_NEG_INF;
  long double exp = 2;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert(isinf(result));
  ck_assert(isinf(expected));
}
END_TEST

START_TEST(pow_test_13) {
  long double base = S21_POS_INF;
  long double exp = 3;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert(isinf(result));
  ck_assert(isinf(expected));
}
END_TEST

START_TEST(pow_test_14) {
  long double base = S21_NEG_INF;
  long double exp = -7;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_15) {
  long double base = S21_NEG_INF;
  long double exp = 7;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert(isinf(result));
  ck_assert(isinf(expected));
}
END_TEST

START_TEST(pow_test_16) {
  long double base = S21_POS_INF;
  long double exp = S21_NEG_INF;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_17) {
  long double base = -5;
  long double exp = S21_NEG_INF;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_18) {
  long double base = -5;
  long double exp = 5.5;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert(isnan(result));
  ck_assert(isnan(expected));
}
END_TEST

START_TEST(pow_test_19) {
  long double base = 0.5;
  long double exp = S21_NEG_INF;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert(isinf(result));
  ck_assert(isinf(expected));
}
END_TEST

START_TEST(pow_test_20) {
  long double base = S21_POS_INF;
  long double exp = -1;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(pow_test_21) {
  long double base = 113;
  long double exp = 4.252586;
  long double result = s21_pow(base, exp);
  long double expected = pow(base, exp);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

Suite *pow_suite(void) {
  Suite *pow_suite = suite_create("pow_suite");
  TCase *tc_pow = tcase_create("pow");

  tcase_add_test(tc_pow, pow_test_1);
  tcase_add_test(tc_pow, pow_test_2);
  tcase_add_test(tc_pow, pow_test_3);
  tcase_add_test(tc_pow, pow_test_4);
  tcase_add_test(tc_pow, pow_test_5);
  tcase_add_test(tc_pow, pow_test_6);
  tcase_add_test(tc_pow, pow_test_7);
  tcase_add_test(tc_pow, pow_test_8);
  tcase_add_test(tc_pow, pow_test_9);
  tcase_add_test(tc_pow, pow_test_10);
  tcase_add_test(tc_pow, pow_test_11);
  tcase_add_test(tc_pow, pow_test_12);
  tcase_add_test(tc_pow, pow_test_13);
  tcase_add_test(tc_pow, pow_test_14);
  tcase_add_test(tc_pow, pow_test_15);
  tcase_add_test(tc_pow, pow_test_16);
  tcase_add_test(tc_pow, pow_test_17);
  tcase_add_test(tc_pow, pow_test_18);
  tcase_add_test(tc_pow, pow_test_19);
  tcase_add_test(tc_pow, pow_test_20);
  tcase_add_test(tc_pow, pow_test_21);

  suite_add_tcase(pow_suite, tc_pow);

  return pow_suite;
}