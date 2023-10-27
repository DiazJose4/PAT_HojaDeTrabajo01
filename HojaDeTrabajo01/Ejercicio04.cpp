#include "Ejercicio04.h"

//void Verificacion(std::vector<std::string>& result, std::string current, int Incio, int Finall) {
    //if (Incio == 0 && Finall== 0) {
    //    result.push_back(current);
  //      return;
//    }

    //if (Incio > 0) {
      //  Verificacion(result, current + '(', Incio - 1, Finall);
    //}

    //if (Finall > Incio) {
    //    Verificacion(result, current + ')', Incio, Finall- 1);
  //  }
//}

void generate(int n, int openCount, int closedCount, string sb, vector<string>& results) {
    if (openCount == n && closedCount == n) {
        results.push_back(sb);
        return;
    }

    if (openCount < n) {
        sb.append("(");
        generate(n, openCount + 1, closedCount, sb, results);
        sb.pop_back();
    }

    if (closedCount < openCount) {
        sb.append(")");
        generate(n, openCount, closedCount + 1, sb, results);
        sb.pop_back();
    }
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
    vector<string> Ordenamienot;
    generate(n, 0, 0, "", Ordenamienot);
    return Ordenamienot;
}
