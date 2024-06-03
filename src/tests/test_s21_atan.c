#include "../s21_test_math.h"

START_TEST(atan_test_1) {
  long double result = s21_atan(S21_NEG_INF);
  long double expected = atanl(S21_NEG_INF);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(atan_test_2) {
  long double result = s21_atan(-s21_sqrt(3));
  long double expected = atanl(-s21_sqrt(3));
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(atan_test_3) {
  long double result = s21_atan(-1);
  long double expected = atanl(-1);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(atan_test_4) {
  long double result = s21_atan(-1 / s21_sqrt(3));
  long double expected = atanl(-1 / s21_sqrt(3));
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(atan_test_5) {
  long double result = s21_atan(0);
  long double expected = atanl(0);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(atan_test_6) {
  long double result = s21_atan(S21_POS_INF);
  long double expected = atanl(S21_POS_INF);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(atan_test_7) {
  long double result = s21_atan(s21_sqrt(3));
  long double expected = atanl(s21_sqrt(3));
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(atan_test_8) {
  long double result = s21_atan(1);
  long double expected = atanl(1);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(atan_test_9) {
  long double result = s21_atan(1 / s21_sqrt(3));
  long double expected = atanl(1 / s21_sqrt(3));
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(atan_test_10)

{
  long double result = s21_atan(S21_NAN);
  long double expected = atanl(S21_NAN);
  ck_assert(isnan(result));
  ck_assert(isnan(expected));
}
END_TEST

Suite *atan_suite(void) {
  Suite *atan_suite = suite_create("atan_suite");
  TCase *tc_atan = tcase_create("atan");

  tcase_add_test(tc_atan, atan_test_1);
  tcase_add_test(tc_atan, atan_test_2);
  tcase_add_test(tc_atan, atan_test_3);
  tcase_add_test(tc_atan, atan_test_4);
  tcase_add_test(tc_atan, atan_test_5);
  tcase_add_test(tc_atan, atan_test_6);
  tcase_add_test(tc_atan, atan_test_7);
  tcase_add_test(tc_atan, atan_test_8);
  tcase_add_test(tc_atan, atan_test_9);
  tcase_add_test(tc_atan, atan_test_10);

  suite_add_tcase(atan_suite, tc_atan);

  return atan_suite;
}
