#include "progression.h"
#include <cmath>

ArithmeticProgression::ArithmeticProgression(double a0, double d) : first_term(a0), common_difference(d) {}

double ArithmeticProgression::element_progression(int n) {
    return first_term + n * common_difference;
}

GeometricProgression::GeometricProgression(double a0, double r) : first_term(a0), common_ratio(r) {}

double GeometricProgression::element_progression(int n) {
    return first_term * pow(common_ratio, n);
}
