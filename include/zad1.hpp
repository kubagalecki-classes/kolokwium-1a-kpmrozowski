#include "catch.hpp"
using namespace std;
#include<iostream>

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron
{
  public:
  virtual double ileMaki (unsigned P) const =0;
  static Makaron* gotujMakaron(const string&);
  ~Makaron(){};
};

// Zad1
// tutaj definicja klasy Tagliatelle

class Tagliatelle :public Makaron
{
  private:
  double L;
  double W;
  double R;
  static const double C;
  public:
  Tagliatelle(double a, double b, double c) : L(a), W(b),R(c){};
  Tagliatelle() {L=0.5;W=0.5;R=0.5;};
  double ileMaki(unsigned P) const {return P*L*W*(1-R)*C;};
};