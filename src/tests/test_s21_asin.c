#include "../s21_test_math.h"

START_TEST(asin_test_1) {
  int result = s21_asin(-1);
  int expected = asin(-1);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(asin_test_2) {
  int result = s21_asin(-s21_sqrt(3) / 2);
  int expected = asin(-s21_sqrt(3) / 2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(asin_test_3) {
  int result = s21_asin(-s21_sqrt(2) / 2);
  int expected = asin(-s21_sqrt(2) / 2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(asin_test_4) {
  int result = s21_asin(-0.5);
  int expected = asin(-0.5);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(asin_test_5) {
  int result = s21_asin(0);
  int expected = asin(0);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(asin_test_6) {
  int result = s21_asin(1);
  int expected = asin(1);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(asin_test_7) {
  int result = s21_asin(s21_sqrt(3) / 2);
  int expected = asin(s21_sqrt(3) / 2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(asin_test_8) {
  int result = s21_asin(s21_sqrt(2) / 2);
  int expected = asin(s21_sqrt(2) / 2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(asin_test_9) {
  int result = s21_asin(-0.5);
  int expected = asin(-0.5);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

Suite *asin_suite(void) {
  Suite *asin_suite = suite_create("asin_suite");
  TCase *tc_asin = tcase_create("asin");

  tcase_add_test(tc_asin, asin_test_1);
  tcase_add_test(tc_asin, asin_test_2);
  tcase_add_test(tc_asin, asin_test_3);
  tcase_add_test(tc_asin, asin_test_4);
  tcase_add_test(tc_asin, asin_test_5);
  tcase_add_test(tc_asin, asin_test_6);
  tcase_add_test(tc_asin, asin_test_7);
  tcase_add_test(tc_asin, asin_test_8);
  tcase_add_test(tc_asin, asin_test_9);

  suite_add_tcase(asin_suite, tc_asin);

  return asin_suite;
}