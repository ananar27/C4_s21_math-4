#include "s21_math.h"

int s21_abs(int x) {
  long double answer = 0.0;
  if (x < 0) {
    answer = x * (-1);
  } else {
    answer = x;
  }
  return answer;
}

long double s21_atan(double x) {
  long double answer = 0.0;
  int is_range = (x > -1 && x < 1);
  if (x == S21_POS_INF) {
    answer = S21_PI / 2;
  } else if (x == S21_NEG_INF) {
    answer = -S21_PI / 2;
  }
  if (x != x) {
    answer = x;
  }
  if (x == 1) {
    answer = S21_PI / 4;
  } else if (x == -1) {
    answer = -S21_PI / 4;
  } else {
    answer = is_range ? x : 1.0 / x;
    int n = 1;
    do {
      double a = int_pow(-1, n);
      double b = int_pow(x, (1 + 2 * n) * (is_range ? 1 : -1));
      double c = 1 + 2 * n;
      answer += a * b / c;
      n++;
    } while (n < 7000);
    if (x > 1) {
      answer = S21_PI / 2 - s21_atan(1 / x);
    } else if (x < -1) {
      answer = -S21_PI / 2 - s21_atan(1 / x);
    }
  }
  return answer;
}

long double s21_acos(double x) {
  long double answer = 0.0;
  if (x == 0) {
    answer = S21_PI / 2;
  } else if (x > 0) {
    answer = s21_atan(s21_sqrt(1 - x * x) / x);
  } else if (x < 0) {
    answer = S21_PI + s21_atan(s21_sqrt(1 - x * x) / x);
  }
  return answer;
}

long double s21_asin(double x) {
  long double answer = 0.0;
  if (x == S21_POS_INF || x == 1) {
    answer = S21_PI / 2;
  } else if (x == S21_NEG_INF || x == -1) {
    answer = -S21_PI / 2;
  } else
    answer = s21_atan(x / s21_sqrt(1 - x * x));
  return answer;
}

long double s21_ceil(double x) {
  long double answer;
  if (x != x || x == S21_POS_INF || x == S21_NEG_INF || x == S21_POS_ZERO ||
      x == S21_NEG_ZERO)
    answer = x;
  else if (x < 0) {
    answer = (long double)((long long int)x);
    if (answer == 0) answer = S21_NEG_ZERO;
  } else if (x > 0 && (long double)((long long int)x) != x)
    answer = (long double)((long long int)x + 1);
  else if (x > 0 && (long double)((long long int)x) == x)
    answer = (long double)((long long int)x);
  return answer;
}

long double s21_fabs(double x) {
  long double answer;
  if (x < 0) {
    answer = x * (-1);
  } else {
    answer = x;
  }
  return answer;
}

long double s21_cos(double x) {
  if (x <= -S21_PI && x > S21_NEG_INF) x = -x;
  long double angle = s21_fmod(x, S21_PI);
  if (angle > S21_PI / 2) {
    angle = S21_PI - angle;
  }
  long double answer = 1.0;
  int n = 1;
  long double elem = 1;
  do {
    elem = elem_cos(n, angle);
    answer = answer + elem;
    n++;
  } while (s21_fabs(elem) > ACCURACY);
  if ((quarter(x) == 2 || quarter(x) == 3) && angle != S21_PI / 2) {
    answer *= -1;
  }
  return answer;
}

long double s21_exp(double x) {
  if (x <= MIN_LIM)
    return 0;
  else if (x > MAX_LIM)
    return S21_POS_INF;
  long double answer = 1.0;
  int n = 1;
  long double elem = 1;
  do {
    elem = elem * x / n;
    answer = answer + elem;
    n++;
  } while (n < 1000 || s21_fabs(elem) > ACCURACY);
  return answer;
}

long double s21_floor(double x) {
  long double answer;
  if (x != x || x == S21_POS_INF || x == S21_NEG_INF || x == S21_POS_ZERO ||
      x == S21_NEG_ZERO)
    answer = x;

  else if (x < 0 && (long double)((long long int)x) != x)
    answer = (long double)((long long int)x - 1);
  else if (x < 0 && (long double)((long long int)x) == x)
    answer = (long double)((long long int)x);
  else
    answer = (long double)((long long int)x);
  return answer;
}

long double s21_fmod(double x, double y) {
  long double answer = 0;
  if (y == 0) {
    return S21_NAN;
  }

  if (x * y < 0) {
    answer = x - y * s21_ceil(x / y);
  } else {
    answer = x - y * s21_floor(x / y);
  }
  return answer;
}

long double s21_log(double x) {
  long double answer = 0;
  if (x == S21_POS_INF)
    answer = S21_POS_INF;
  else if (x == 0)
    answer = S21_NEG_INF;
  else if (x < 0)
    answer = S21_NAN;
  else {
    int e_count = 0;
    while (x >= S21_E) {
      x /= S21_E;
      e_count++;  // Сколько раз x делится на e
    }
    for (int i = 0; i < 1000; i++) {
      answer += 2 * ((x - s21_exp(answer)) / (x + s21_exp(answer)));
    }
    answer += e_count;
  }
  return answer;
}

long double s21_pow(double base, double exp) {
  long double answer = 0.0;
  if (!exp || base == 1 ||
      (base == -1 && (exp == S21_POS_INF || exp == S21_NEG_INF)))
    answer = 1;
  else if (exp == S21_POS_INF) {
    if (s21_fabs(base) > 1)
      answer = S21_POS_INF;
    else if (s21_fabs(base) > 0 && s21_fabs(base) < 1)
      answer = S21_POS_ZERO;
  } else if (exp == S21_NEG_INF) {
    if (s21_fabs(base) > 1)
      answer = S21_POS_ZERO;
    else if (s21_fabs(base) > 0 && s21_fabs(base) < 1)
      answer = S21_POS_INF;
  } else if (base == S21_NEG_INF) {
    if ((s21_fmod(exp, 2.0) == 0) && exp < 0)
      answer = S21_POS_ZERO;
    else if ((s21_abs(s21_fmod(exp, 2.0)) == 1) && exp < 0)
      answer = S21_NEG_ZERO;
    else if ((s21_fmod(exp, 2.0) == 0) && exp > 0)
      answer = S21_NEG_INF;
    else if ((s21_abs(s21_fmod(exp, 2.0)) == 1) && exp > 0)
      answer = S21_POS_INF;
  } else if (base == S21_POS_INF) {
    if (exp < 0)
      answer = S21_POS_ZERO;
    else if (exp > 0)
      answer = S21_POS_INF;
  } else if (base < 0 && exp != (long long int)exp)
    answer = S21_NAN;
  else
    // answer = s21_exp(s21_log(base) * (exp - s21_floor(exp))) * int_pow(base,
    // s21_floor(exp));
    answer = s21_exp(s21_log(base) * exp);
  return answer;
}

long double s21_sin(double x) {
  long double angle = s21_fmod(x, S21_PI);
  if (angle > S21_PI / 2) {
    angle = S21_PI - angle;
  }
  long double answer = 0.0;
  int n = 0;
  long double elem;
  do {
    elem = elem_sin(n, angle);
    answer = answer + elem;
    n++;
  } while (s21_fabs(elem) > ACCURACY);
  if ((quarter(x) == 3 || quarter(x) == 4) && angle != S21_PI) {
    answer *= -1;
  }
  return answer;
}

long double s21_sqrt(double x) {
  long double answer = 0.0;
  if (x < 0) {
    answer = S21_NAN;
  }

  int start = 0, end = x;
  int mid;

  while (start <= end) {
    // Находим середину
    mid = (start + end) / 2;
    // Проверяем на случай точного попадания
    if ((double)mid * mid == x) {
      answer = mid;
      break;
    }

    // Если квадрат среднего меньше чем наше число
    if (mid * mid < x) {
      answer = start;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  double increment = 0.1;
  for (int i = 0; i < 6; i++) {
    while (answer * answer <= x) {
      answer += increment;
    }
    answer = answer - increment;
    increment /= 10;
  }
  return answer;
}

long double s21_tan(double x) { return s21_sin(x) / s21_cos(x); }

unsigned long long int factorial(int x) {
  unsigned long long int answer = 1;
  if (x > 1) {
    for (int i = 1; i <= x; i++) {
      answer = answer * i;
    }
  }
  return answer;
}

long double int_pow(double base, int exp) {
  long double answer;
  if (exp == 0) {
    answer = 1;
  } else {
    answer = base;
    for (int i = 1; i < exp; i++) {
      answer *= base;
    }
  }
  return answer;
}

int quarter(long double x) {
  // calculate part of circle
  // returns number of sector - 1,2,3 or 4
  // retval - int
  long double angle = s21_fmod(x, 2 * S21_PI);
  return s21_floor(angle / (S21_PI / 2)) + 1;
}

long double elem_sin(int n, double x) {
  return int_pow(-1, n) * int_pow((x), 2 * n + 1) / factorial(2 * n + 1);
}

long double elem_cos(int n, double x) {
  return int_pow(-1, n) * int_pow((x), 2 * n) / factorial(2 * n);
}
