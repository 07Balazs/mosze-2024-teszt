#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // hi�nyzik a _
    std::cout << '1-100 ertekek duplazasa' // '' helyett "" kell �s hi�nyzik a ;
    for (int i = 0;) // hi�nyos ciklusfelv�tel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // hib�s ciklusfelv�tel
    {
        std::cout << "Ertek:" // hi�nyzi ka ; a sor v�g�r�l, nem �rja ki az �rt�ket
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // double-nek kellene lennie hogy tizedes sz�mot kapjunk az �tlagn�l
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ;
    {
        atlag += b[i] // hi�nyzik a ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
