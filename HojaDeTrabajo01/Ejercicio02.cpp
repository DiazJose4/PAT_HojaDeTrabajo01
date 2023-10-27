#include "Ejercicio02.h"

bool Ejercicio02::isPalindrome(string& s) {
    return Palindromo(s, 0, s.length() - 1);
}


bool Ejercicio02::Palindromo(string& s, int Inicio, int final)
{
    if (Inicio >= final)
    {
        return true;
    }

    if (s[Inicio] != s[final]) {
        return false;
    }
   

    return Palindromo(s, Inicio + 1, final -1);
}
