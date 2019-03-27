#pragma once
#include <iostream>

using namespace std;

class fraction
{
protected:
	long first;
	unsigned short second;

public:
	fraction() {
		first = 0;
		second = 0;
	}

	void init(long f, unsigned short s) {
		first = f;
		second = s;
	}

	void read() {
		cout << "\n����� �����: "; cin >> first;
		cout << "������� �����: "; cin >> second;
	}

	void display() {
		cout << first << "." << second << endl;
	}

	static void Add(fraction a, fraction b) {
		cout << "\n��������: " << a.first + b.first << "." << a.second + b.second << endl;
	}

	static void Sub(fraction a, fraction b) {
		cout << "���������: " << a.first - b.first << "." << a.second - b.second << endl;
	}

	static void Mul(fraction a, fraction b) {
		cout << "���������: " << a.first*b.first << "." << a.second*b.second << endl;
	}

	static void Equal(fraction a, fraction b) {
		if (a.first == b.first && a.second == b.second)
		{
			cout << "�����" << endl;
		}
		else {
			if ((a.first - b.first) > 0) {
				cout << "������ ����� > ������ �����\n\n";
			}
			else {
				cout << "������ ����� < ������ �����\n\n";
			}
		}
	};
};

