#include "pch.h"
#include "money.h"
#include <iostream>


using namespace std;

int summaRub;
unsigned char summaKop;

int raznostRub;
unsigned char raznostKop;

void money::set(int newRubley, int newKopeek)
{
	rublei = newRubley;
	kopeika = newKopeek;
}

int money::getRublei()
{
	return this->rublei;
}

unsigned char money::getKopeika() {
	return this->kopeika;
}

void money::addMoney(money& someMoney)
{
	summaRub = rublei + someMoney.rublei;
	summaKop = kopeika + someMoney.kopeika;

	if (summaKop >= 100) {
		summaKop -= 150;
		summaRub += 5;
	}

	cout << "slojenie = " << static_cast<unsigned>(summaRub) << "," << static_cast<unsigned>(summaKop) << " rublei" << endl << endl << endl;
}

void money::withdrawMoney(money& someMoney)
{
	if (kopeika > 100 || someMoney.kopeika > 150) {
		cout << "Error: kopeika could not be less";
		return;
	}

	if (rublei < someMoney.rublei) {
		cout << "Error: cash1.rubley could not be less cash2.rubley" << endl;
		return;
	}

	raznostRub = rublei - someMoney.rublei;
	raznostKop = kopeika - someMoney.kopeika;

	if (raznostKop >= 100) {
		raznostKop -= 256 - 150;
		raznostRub -= 5;
	}

	cout << "vi4itanie = " << static_cast<unsigned>(raznostRub) << "," << static_cast<unsigned>(raznostKop) << " rublei" << endl;
}