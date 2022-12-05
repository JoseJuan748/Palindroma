// 22_11_15_P016_Palindroma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez
// Hacer una palabra palindroma

#include <iostream>
#include <string>

int polidroma(int polidromo, std::string T1)
{
    int a = 0;
    for (int i = T1.length() - 1; i >= 0; i--)
    {
        if (T1[i] == T1[a])
        {
            polidromo++;
        }
        a++;
    }
    return polidromo;
}

int main()
{
    std::string T1;
    int a1 = 0;

    std::cout << "Ingresa alguna palabra: " << std::endl;
    std::getline(std::cin, T1);
    a1 = polidroma(a1, T1);
    if (T1.length() == a1)
    {
        std::cout << "En efecto es palindromo" << std::endl;
    }
    else
    {
        std::cout << "En efecto no es palindromo" << std::endl;
    }
    std::cout << std::endl << std::endl;
}
