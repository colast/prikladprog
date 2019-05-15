#pragma once


class Time {
public:
	void setTime(long newHours, int newMinutes);
	long getHours();
	int getMinutes();
	Time operator+(Time & plusTime);//перезагрузка оператора +
	Time operator-(Time & minusTime);//перезагрузка оператора -
	Time operator*(int mulTime);//реализация оператора *
	bool operator<(Time & minusTime);//перезагрузка оператора <
	bool operator>(Time & minusTime);//перезагрузка оператора >
	bool operator<=(Time & minusTime);//перезагрузка оператора <=
	bool operator>=(Time & minusTime);//перезагрузка оператора >=
	bool operator==(Time & minusTime);//перезагрузка оператора ==
	bool operator!=(Time & minusTime);//перезагрузка оператора !=
	void print();
	void ResultComprasion(Time a, Time b, std::string valueComp);//вывод для операторов сравнения
private:
	long hours;
	int minutes;
};
