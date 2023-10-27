#include "Ejercicio04.h"

void Verificacion(std::vector<std::string>& result, std::string current, int Incio, int Finall) {
    if (Incio == 0 && Finall== 0) {
        result.push_back(current);
        return;
    }

    if (Incio > 0) {
        Verificacion(result, current + '(', Incio - 1, Finall);
    }

    if (Finall > Incio) {
        Verificacion(result, current + ')', Incio, Finall- 1);
    }
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
    std::vector<std::string> Ordenamiento;
    Verificacion(Ordenamiento, " ", n, n);
    return Ordenamiento;
}
