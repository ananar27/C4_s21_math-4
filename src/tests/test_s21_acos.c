#include "../s21_test_math.h"

START_TEST(acos_test_1) {
  int result = s21_acos(-1);
  int expected = acos(-1);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(acos_test_2) {
  int result = s21_acos(-s21_sqrt(3) / 2);
  int expected = acos(-s21_sqrt(3) / 2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(acos_test_3) {
  int result = s21_acos(-s21_sqrt(2) / 2);
  int expected = acos(-s21_sqrt(2) / 2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(acos_test_4) {
  int result = s21_acos(-0.5);
  int expected = acos(-0.5);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(acos_test_5) {
  int result = s21_acos(0);
  int expected = acos(0);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(acos_test_6) {
  int result = s21_acos(1);
  int expected = acos(1);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(acos_test_7) {
  int result = s21_acos(s21_sqrt(3) / 2);
  int expected = acos(s21_sqrt(3) / 2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(acos_test_8) {
  int result = s21_acos(s21_sqrt(2) / 2);
  int expected = acos(s21_sqrt(2) / 2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(acos_test_9) {
  int result = s21_acos(-0.5);
  int expected = acos(-0.5);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

Suite *acos_suite(void) {
  Suite *acos_suite = suite_create("acos_suite");
  TCase *tc_acos = tcase_create("acos");

  tcase_add_test(tc_acos, acos_test_1);
  tcase_add_test(tc_acos, acos_test_2);
  tcase_add_test(tc_acos, acos_test_3);
  tcase_add_test(tc_acos, acos_test_4);
  tcase_add_test(tc_acos, acos_test_5);
  tcase_add_test(tc_acos, acos_test_6);
  tcase_add_test(tc_acos, acos_test_7);
  tcase_add_test(tc_acos, acos_test_8);
  tcase_add_test(tc_acos, acos_test_9);

  suite_add_tcase(acos_suite, tc_acos);

  return acos_suite;
}