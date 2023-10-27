#pragma once

#include <string>
#include <vector>

using std::vector;
using std::string;

class Ejercicio04
{
public:
	vector<string> generateParenthesis(int n);
	void Verificacion(std::vector<std::string>& result, std::string current, int Incio, int Finall);
};

