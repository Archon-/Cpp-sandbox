#include <cstdlib>
#include <iostream>

using namespace std;

// Base class Shape
class Uzytkownik 
{
};

// Derived class
class Dyrektor: public Uzytkownik
{
};

class Handlowiec: public Uzytkownik
{

};

class Administrator: public Uzytkownik
{
};

int main(void)
{
   Dyrektor Dyr;
   Handlowiec Han;
   Administrator Adm;
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
