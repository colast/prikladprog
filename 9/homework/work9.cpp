#include "pch.h"
#include <iostream>
#include "Money.h"

int main()

{
	setlocale(LC_CTYPE, "Russian");
	Money a, b, e, c, d;

	a.set(75, 35);
	b.set(25, 80);

	c = a + b;
	e = a - b;
	d = a * 4;

	c.print();
	e.print();
	d.print();
}
