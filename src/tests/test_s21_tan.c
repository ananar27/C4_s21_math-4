#include "../s21_test_math.h"

START_TEST(tan_test_1) {
  int result = s21_tan(-25);
  int expected = tan(-25);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(tan_test_2) {
  int result = s21_tan(-100);
  int expected = tan(-100);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(tan_test_3) {
  int result = s21_tan(0.25);
  int expected = tan(0.25);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(tan_test_4) {
  int result = s21_tan(25);
  int expected = tan(25);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(tan_test_5) {
  int result = s21_tan(100);
  int expected = tan(100);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(tan_test_6) {
  int result = s21_tan(-0.25);
  int expected = tan(-0.25);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(tan_test_7) {
  int result = s21_tan(0);
  int expected = tan(0);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

Suite *tan_suite(void) {
  Suite *tan_suite = suite_create("tan_suite");
  TCase *tc_tan = tcase_create("tan");
  tcase_add_test(tc_tan, tan_test_1);
  tcase_add_test(tc_tan, tan_test_2);
  tcase_add_test(tc_tan, tan_test_3);
  tcase_add_test(tc_tan, tan_test_4);
  tcase_add_test(tc_tan, tan_test_5);
  tcase_add_test(tc_tan, tan_test_6);
  tcase_add_test(tc_tan, tan_test_7);

  suite_add_tcase(tan_suite, tc_tan);

  return tan_suite;
}
