#pragma once

#include <string>

class Progression {
public:
    virtual double element_progression(int n) = 0;
    virtual std::string type() const = 0;
    virtual ~Progression() {}
};