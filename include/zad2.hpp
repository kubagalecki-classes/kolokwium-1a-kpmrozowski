#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
struct Penne : public Makaron
{
  double ileMaki(unsigned P) const override
  {
    return P;
  }
};
// tutaj definicja metody gotujMakaron
