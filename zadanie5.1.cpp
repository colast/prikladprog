

#include "pch.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "fraction.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	fraction N, M, A;
	N.read();
	cout << "\nПервое число: ";
	N.display();
	M.read();
	cout << "\nВторое число: ";
	M.display();
	A.Add(N, M);
	A.Sub(N, M);
	A.Mul(N, M);
	A.Equal(N, M);
	system("pause");
	return 0;
}
