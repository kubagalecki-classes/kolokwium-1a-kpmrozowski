#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne

class Penne : public Makaron {
  public:
  double ileMaki(unsigned P) const {return(double) P;};
};

// tutaj definicja metody gotujMakaron

Makaron* Makaron::gotujMakaron(const string& makaron) {
    if (makaron.front() == makaron.back())
        return new Tagliatelle(3.14, 0.42, 0.1);
    else 
        return new Penne;
};




#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne

// tutaj definicja metody gotujMakaron

class Penne : public Makaron
{
  public:
  double ileMaki(unsigned P) const {return(double) P;};
};

Makaron* Makaron::gotujMakaron(const string& makaron)
{
   
    if (makaron.front() == makaron.back())
    
        return new Tagliatelle(3.14, 0.42, 0.1);
   
    else 
        return new Penne;

};
