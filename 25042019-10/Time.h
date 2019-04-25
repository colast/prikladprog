#pragma once
class Time {
public:
	void setTime(long newHours, int newMinutes);
	long getHours();
	int getMinutes();
	Time operator+(Time & plusTime);//������������ ��������� +
	Time operator-(Time & minusTime);//������������ ��������� -
	Time operator*(int mulTimes);//���������� ��������� *
	bool operator<(Time & minusTime);//������������ ��������� <
	bool operator>(Time & minusTime);//������������ ��������� >
	bool operator=(Time & minusTime);//������������ ��������� >
	void print();
private:
	long hours;
	int minutes;
};
