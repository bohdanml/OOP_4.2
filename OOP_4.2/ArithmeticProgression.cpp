#include "ArithmeticProgression.h"
#include <typeinfo> 

ArithmeticProgression::ArithmeticProgression(double a0, double d) : first_term(a0), common_difference(d) {}

double ArithmeticProgression::element_progression(int n) {
    return first_term + n * common_difference;
}

std::string ArithmeticProgression::type() const {
    return typeid(*this).name();
}