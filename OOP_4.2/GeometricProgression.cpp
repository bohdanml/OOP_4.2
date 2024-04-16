#include "GeometricProgression.h"
#include <cmath>

GeometricProgression::GeometricProgression(double a0, double r) : first_term(a0), common_ratio(r) {}

double GeometricProgression::element_progression(int n) {
    return first_term * pow(common_ratio, n);
}

std::string GeometricProgression::type() const {
    return "Geometric";
}
