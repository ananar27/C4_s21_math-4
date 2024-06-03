#include "s21_test_math.h"

int main() {
  int failed_cnt;
  Suite *s1 = sin_suite();
  Suite *s2 = cos_suite();
  Suite *s3 = abs_suite();
  Suite *s4 = acos_suite();
  Suite *s5 = asin_suite();
  Suite *s6 = atan_suite();
  Suite *s7 = ceil_suite();
  Suite *s8 = exp_suite();
  Suite *s9 = fabs_suite();
  Suite *s10 = fmod_suite();
  Suite *s11 = sqrt_suite();
  Suite *s12 = tan_suite();
  Suite *s13 = floor_suite();
  Suite *s14 = log_suite();
  Suite *s15 = pow_suite();

  SRunner *sr;

  sr = srunner_create(NULL);
  Suite *arr[] = {s1, s2,  s3,  s4,  s5,  s6,  s7, s8,
                  s9, s10, s11, s12, s13, s14, s15};
  for (int i = 0; i < 15; i++) {
    srunner_add_suite(sr, arr[i]);
  }

  srunner_run_all(sr, CK_NORMAL);
  failed_cnt = srunner_ntests_failed(sr);

  srunner_free(sr);

  return (failed_cnt == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
