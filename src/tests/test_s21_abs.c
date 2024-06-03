#include "../s21_test_math.h"

START_TEST(abs_test_1) {
  int result = s21_abs(-5);
  int expected = abs(-5);
  ck_assert_int_eq(result, expected);
}
END_TEST

START_TEST(abs_test_2) {
  int result = s21_abs(0);
  int expected = abs(0);
  ck_assert_int_eq(result, expected);
}
END_TEST

START_TEST(abs_test_3) {
  int result = s21_abs(-0);
  int expected = abs(-0);
  ck_assert_int_eq(result, expected);
}
END_TEST

START_TEST(abs_test_4) {
  int result = s21_abs(100);
  int expected = abs(100);
  ck_assert_int_eq(result, expected);
}
END_TEST

Suite *abs_suite(void) {
  Suite *abs_suite = suite_create("abs_suite");
  TCase *tc_abs = tcase_create("abs");

  tcase_add_test(tc_abs, abs_test_1);
  tcase_add_test(tc_abs, abs_test_2);
  tcase_add_test(tc_abs, abs_test_3);
  tcase_add_test(tc_abs, abs_test_4);

  suite_add_tcase(abs_suite, tc_abs);
  return abs_suite;
}