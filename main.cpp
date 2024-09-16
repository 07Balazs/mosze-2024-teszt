#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // hiányzik a _
    std::cout << "1-100 ertekek duplazasa"<<std::endl; // '' helyett "" kell és hiányzik a ;
    for (int i = 0; i < N_ELEMENTS; i++) // hiányos ciklusfelvétel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++) // hibás ciklusfelvétel
    {
        std::cout << "Ertek:"<<b[i]<<std::endl; // hiányzi ka ; a sor végérõl, nem írja ki az értéket
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag=0; // double-nek kellene lennie hogy tizedes számot kapjunk az átlagnál
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ;
    {
        atlag += b[i]; // hiányzik a ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;
    return 0;
}