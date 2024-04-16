#pragma once

#include <string>
#include "Progression.h"

class GeometricProgression : public Progression {
private:
    double first_term;
    double common_ratio;

public:
    GeometricProgression(double first_term, double common_ratio);
    double element_progression(int n) override;
    std::string type() const override;
};
