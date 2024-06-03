#include "../s21_test_math.h"

START_TEST(floor_test_1) {
  long double var = 1.25;
  long double result = s21_floor(var);
  long double expected = floor(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(floor_test_2) {
  long double var = 0.000003;
  long double result = s21_floor(var);
  long double expected = floor(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(floor_test_3) {
  long double var = -0.000003;
  long double result = s21_floor(var);
  long double expected = floor(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(floor_test_4) {
  long double var = -1.25;
  long double result = s21_floor(var);
  long double expected = floor(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(floor_test_5) {
  long double var = 0.071;
  long double result = s21_floor(var);
  long double expected = floor(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(floor_test_6) {
  long double var = S21_NEG_INF;
  long double result = s21_floor(var);
  ck_assert_ldouble_infinite(result);
}
END_TEST

START_TEST(floor_test_7) {
  long double var = S21_POS_INF;
  long double result = s21_floor(var);
  ck_assert_ldouble_infinite(result);
}
END_TEST

START_TEST(floor_test_8) {
  long double var = -10;
  long double result = s21_floor(var);
  long double expected = floor(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(floor_test_9) {
  long double var = 10;
  long double result = s21_floor(var);
  long double expected = floor(var);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

Suite *floor_suite(void) {
  Suite *floor_suite = suite_create("floor_suite");
  TCase *tc_floor = tcase_create("floor");

  tcase_add_test(tc_floor, floor_test_1);
  tcase_add_test(tc_floor, floor_test_2);
  tcase_add_test(tc_floor, floor_test_3);
  tcase_add_test(tc_floor, floor_test_4);
  tcase_add_test(tc_floor, floor_test_5);
  tcase_add_test(tc_floor, floor_test_6);
  tcase_add_test(tc_floor, floor_test_7);
  tcase_add_test(tc_floor, floor_test_8);
  tcase_add_test(tc_floor, floor_test_9);

  suite_add_tcase(floor_suite, tc_floor);

  return floor_suite;
}