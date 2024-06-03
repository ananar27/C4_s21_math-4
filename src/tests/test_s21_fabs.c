#include "../s21_test_math.h"

START_TEST(fabs_test_1) {
  long double result = s21_fabs(1.25);
  long double expected = fabs(1.25);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(fabs_test_2) {
  long double result = s21_fabs(0.00003);
  long double expected = fabs(0.00003);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(fabs_test_3) {
  long double result = s21_fabs(-0.000003);
  long double expected = fabs(-0.000003);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(fabs_test_4) {
  long double result = s21_fabs(-1.25);
  long double expected = fabs(-1.25);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(fabs_test_5) {
  long double result = s21_fabs(S21_POS_INF);
  long double expected = fabs(S21_POS_INF);
  ck_assert(isinf(result));
  ck_assert(isinf(expected));
}
END_TEST

Suite *fabs_suite(void) {
  Suite *fabs_suite = suite_create("fabs_suite");
  TCase *tc_fabs = tcase_create("fabs");

  tcase_add_test(tc_fabs, fabs_test_1);
  tcase_add_test(tc_fabs, fabs_test_2);
  tcase_add_test(tc_fabs, fabs_test_3);
  tcase_add_test(tc_fabs, fabs_test_4);
  tcase_add_test(tc_fabs, fabs_test_5);

  suite_add_tcase(fabs_suite, tc_fabs);

  return fabs_suite;
}