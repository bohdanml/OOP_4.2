#pragma once

#include <string>

class Progression {
public:
    virtual double element_progression(int n) = 0;
    virtual std::string type() const = 0; // Доданий віртуальний метод
    virtual ~Progression() {}
};

class ArithmeticProgression : public Progression {
private:
    double first_term;
    double common_difference;

public:
    ArithmeticProgression(double first_term, double common_difference);
    double element_progression(int n) override;
    std::string type() const override { return "Arithmetic"; } 
};

class GeometricProgression : public Progression {
private:
    double first_term;
    double common_ratio;

public:
    GeometricProgression(double first_term, double common_ratio);
    double element_progression(int n) override;
    std::string type() const override { return "Geometric"; } 
};
