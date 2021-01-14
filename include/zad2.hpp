#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

#include <iostream>

// tutaj klasa Penne

class Penne : public Makaron {
public:
    Penne() = default;
    ~Penne() = default;
    double ileMaki(unsigned P) const override;
};

class Tagliatelle : public Makaron {
private:
    double L;
    double W;
    double R;

    static const double C;

public:
    Tagliatelle();
    Tagliatelle(double, double, double);
    ~Tagliatelle();

    double ileMaki(unsigned P) const override;

};

Tagliatelle::Tagliatelle() {
    L = 0.5;
    W = 0.5;
    R = 0.5;
}

Tagliatelle::Tagliatelle(double a, double b, double c) :L(a), W(b), R(c) {}

Tagliatelle::~Tagliatelle() {}

double Tagliatelle::ileMaki(unsigned P) const {
    return P * L * W *(1. - R) * C;
}
const double Tagliatelle::C = 0;

double Penne::ileMaki(unsigned P) const{
    return P;
}

// tutaj definicja metody gotujMakaron

Makaron* Makaron::gotujMakaron(std::string& str)
{
    if (str.front() == str.back()) {
        Tagliatelle * obj = new Tagliatelle(3.14, 0.42, 0.1);
        return obj;
    }
    else {
        Penne* obj = new Penne();
        return obj;
    }
}
