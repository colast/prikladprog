#include "pch.h"
#include <iostream>
#include "money.h"



int main()
{
	money cash1;
	money cash2;

	cash1.set(100, 60);
	cash2.set(12, 20);

	cash1.addMoney(cash2);
	cash1.withdrawMoney(cash2);
}