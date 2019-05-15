#pragma once


class Time {
public:
	void setTime(long newHours, int newMinutes);
	long getHours();
	int getMinutes();
	Time operator+(Time & plusTime);//������������ ��������� +
	Time operator-(Time & minusTime);//������������ ��������� -
	Time operator*(int mulTime);//���������� ��������� *
	bool operator<(Time & minusTime);//������������ ��������� <
	bool operator>(Time & minusTime);//������������ ��������� >
	bool operator<=(Time & minusTime);//������������ ��������� <=
	bool operator>=(Time & minusTime);//������������ ��������� >=
	bool operator==(Time & minusTime);//������������ ��������� ==
	bool operator!=(Time & minusTime);//������������ ��������� !=
	void print();
	void ResultComprasion(Time a, Time b, std::string valueComp);//����� ��� ���������� ���������
private:
	long hours;
	int minutes;
};
