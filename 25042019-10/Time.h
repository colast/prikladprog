#pragma once
class Time {
public:
	void setTime(long newHours, int newMinutes);
	long getHours();
	int getMinutes();
	Time operator+(Time & plusTime);//перезагрузка оператора +
	Time operator-(Time & minusTime);//перезагрузка оператора -
	Time operator*(int mulTimes);//реализация оператора *
	bool operator<(Time & minusTime);//перезагрузка оператора <
	bool operator>(Time & minusTime);//перезагрузка оператора >
	bool operator=(Time & minusTime);//перезагрузка оператора >
	void print();
private:
	long hours;
	int minutes;
};
