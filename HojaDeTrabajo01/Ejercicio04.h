#pragma once

#include <string>
#include <vector>

using std::vector;
using std::string;

class Ejercicio04
{
private:
	void Verificacion(std::vector<std::string>& result, std::string current, int Incio, int Finall);

public:
	vector<string> generateParenthesis(int n);
};

