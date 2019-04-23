#pragma once
class Time {
public:
	void setTime(long newHours, int newMinutes);
	long getHours();
	int getMinutes();
	Time operator+(Time & plusTime);//перезагрузка оператора +
	Time operator-(Time & minusTime);//перезагрузка оператора -
	Time operator*(int mulTimes);//перезагрузка оператора *
	void print();
private:
	long hours;
	int minutes;
};
