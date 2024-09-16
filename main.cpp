#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // hi�nyzik a _
    std::cout << "1-100 ertekek duplazasa"<<std::endl; // '' helyett "" kell �s hi�nyzik a ;
    for (int i = 0; i < N_ELEMENTS; i++) // hi�nyos ciklusfelv�tel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++) // hib�s ciklusfelv�tel
    {
        std::cout << "Ertek:"<<b[i]<<std::endl; // hi�nyzi ka ; a sor v�g�r�l, nem �rja ki az �rt�ket
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag=0; // double-nek kellene lennie hogy tizedes sz�mot kapjunk az �tlagn�l
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ;
    {
        atlag += b[i]; // hi�nyzik a ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;
    std::cout << "Az élet nem egy habostorta!" << std::endl;
    return 0;
}