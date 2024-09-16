#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // hiányzik a _
    std::cout << '1-100 ertekek duplazasa' // '' helyett "" kell és hiányzik a ;
    for (int i = 0;) // hiányos ciklusfelvétel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // hibás ciklusfelvétel
    {
        std::cout << "Ertek:" // hiányzi ka ; a sor végérõl, nem írja ki az értéket
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // double-nek kellene lennie hogy tizedes számot kapjunk az átlagnál
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ;
    {
        atlag += b[i] // hiányzik a ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
