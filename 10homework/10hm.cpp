#include "stdio.h"
#include "pch.h"
#include <iostream>
#include "Time.h"
#include <string>

using namespace std;

int main()
{
	Time a, b, plus, minus, mult, comprasion;
	Time arrA[10];
	Time arrB[10];

	int valueMult = 5;

	a.setTime(10, 40);
	b.setTime(14, 50);

	plus=a + b;
	minus=a - b;
	mult=a * valueMult;

	plus.print();
	minus.print();
	mult.print();

	if (a < b)
		comprasion.ResultComprasion(a, b, "<");

	if (a > b)
		comprasion.ResultComprasion(a, b, ">");

	if (a <= b)
		comprasion.ResultComprasion(a, b, "<=");

	if (a >= b)
		comprasion.ResultComprasion(a, b, ">=");

	if (a == b)
		comprasion.ResultComprasion(a, b, "==");

	if (a != b)
		comprasion.ResultComprasion(a, b, "!=");

	cout << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		arrA[i].setTime(rand() % 23 + 1, rand() % 59 + 0);
		arrB[i].setTime(rand() % 23 + 1, rand() % 59 + 0);
	}

	Time temp;
	Time temp2;

	for (int i = 0; i < 10 - 1; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
			if (arrA[j] > arrA[j + 1]) {
				temp = arrA[j];
				arrA[j] = arrA[j + 1];
				arrA[j + 1] = temp;
			}

			if (arrB[j] > arrB[j + 1]) {
				temp2 = arrB[j];
				arrB[j] = arrB[j + 1];
				arrB[j + 1] = temp2;
			}
		}
	}

	cout << "Time 1" << endl;
	for (int i = 0; i < 10; i++)
	{
		arrA[i].print();
	}

	cout << endl << endl;

	cout << "Time 2" << endl;
	for (int i = 0; i < 10; i++)
	{
		arrB[i].print();
	}

}