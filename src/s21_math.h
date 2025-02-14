#ifndef S21_MATH
#define S21_MATH

#include <stdio.h>

#define S21_PI 3.14159265358979323846
#define S21_E 2.71828182845904523536028747
#define S21_NAN 0.0 / 0.0
#define S21_POS_INF +1.0 / 0.0
#define S21_NEG_INF -1.0 / 0.0
#define S21_POS_ZERO 0 / +1.0
#define S21_NEG_ZERO 0 / -1.0
#define S21_LN2 0.693147180559945309417232

#define MAX_LIM 709
#define MIN_LIM -33

#define ACCURACY 0.000001

// Основные для задания
int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

// Вспомогательные функции
unsigned long long int factorial(int x);
long double int_pow(double base, int exp);
int quarter(long double x);
long double elem_sin(int n, double x);
long double elem_cos(int n, double x);
#endif