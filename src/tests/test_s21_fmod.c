#include "../s21_test_math.h"

START_TEST(fmod_test_1) {
  long double var1 = 1.25;
  long double var2 = 0;
  long double result = s21_fmod(var1, var2);
  long double expected = fmod(var1, var2);
  ck_assert(isnan(result));
  ck_assert(isnan(expected));
}
END_TEST

START_TEST(fmod_test_2) {
  long double var1 = 0;
  long double var2 = 1;
  long double result = s21_fmod(var1, var2);
  long double expected = fmod(var1, var2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(fmod_test_3) {
  long double var1 = 157575575.25;
  long double var2 = 5885;
  long double result = s21_fmod(var1, var2);
  long double expected = fmod(var1, var2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(fmod_test_4) {
  long double var1 = 4.2525865;
  long double var2 = 0.5656565;
  long double result = s21_fmod(var1, var2);
  long double expected = fmod(var1, var2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(fmod_test_5) {
  long double var1 = 789.2525865;
  long double var2 = 0.565;
  long double result = s21_fmod(var1, var2);
  long double expected = fmod(var1, var2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(fmod_test_6) {
  long double var1 = 4.865;
  long double var2 = 6.53;
  long double result = s21_fmod(var1, var2);
  long double expected = fmod(var1, var2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(fmod_test_7) {
  long double var1 = -4.865;
  long double var2 = 6.53;
  long double result = s21_fmod(var1, var2);
  long double expected = fmod(var1, var2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

START_TEST(fmod_test_8) {
  long double var1 = -4;
  long double var2 = 2;
  long double result = s21_fmod(var1, var2);
  long double expected = fmod(var1, var2);
  ck_assert_ldouble_eq_tol(result, expected, ACCURACY);
}
END_TEST

Suite *fmod_suite(void) {
  Suite *fmod_suite = suite_create("fmod_suite");
  TCase *tc_fmod = tcase_create("fmod");

  tcase_add_test(tc_fmod, fmod_test_1);
  tcase_add_test(tc_fmod, fmod_test_2);
  tcase_add_test(tc_fmod, fmod_test_3);
  tcase_add_test(tc_fmod, fmod_test_4);
  tcase_add_test(tc_fmod, fmod_test_5);
  tcase_add_test(tc_fmod, fmod_test_6);
  tcase_add_test(tc_fmod, fmod_test_7);
  tcase_add_test(tc_fmod, fmod_test_8);

  suite_add_tcase(fmod_suite, tc_fmod);

  return fmod_suite;
}