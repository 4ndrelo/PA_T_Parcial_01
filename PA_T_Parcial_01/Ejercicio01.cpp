#include "Ejercicio01.h"

char Ejercicio01::lower(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return c;

    return (char)(c + 32);
}

bool Ejercicio01::isPalindrome(const char* phrase, int length)
{
    if (phrase == nullptr || length <= 0)
        return false; // No es una frase válida

    int left = 0;
    int right = length - 1;

    while (left < right)
    {
        char leftChar = lower(phrase[left]);
        char rightChar = lower(phrase[right]);

        if (leftChar != rightChar)
            return false; // No es un palíndromo

        left++;
        right--;
    }

    return true; // Es un palíndromo
}
