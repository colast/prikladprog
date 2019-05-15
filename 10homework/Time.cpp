#include "pch.h"
#include "stdio.h"
#include <iostream>
#include "Time.h"
#include <string>

using namespace std;

void Time::setTime(long newHours, int newMinutes)
{
	hours = newHours;
	minutes = newMinutes;
}
long Time::getHours()
{

	return(hours);
}
int Time::getMinutes()
{
	return(minutes);
}
Time Time::operator+(Time & plusTime) {//реализация перезагрузки оператора +
	using namespace std;
	Time result;
	result.hours = this->hours + plusTime.hours;
	result.minutes = this->minutes + plusTime.minutes;

	if (result.minutes >= 60)
	{
		result.hours = result.hours + 1;
		result.minutes = result.minutes - 60;
	}

	return result;

}
Time Time::operator-(Time & minusTime) {//реализация перезагрузки оператора -
	using namespace std;
	Time result;
	result.hours = this->hours - minusTime.hours;
	result.minutes = this->minutes - minusTime.minutes;


	if (result.minutes <= -1)
	{
		result.hours = result.hours - 1;
		result.minutes = result.minutes + 60;
	}

	return result;
}
Time Time::operator*(int mulTimes) {//реализация оператора *
	Time result;

	result.hours = this->hours*mulTimes;
	result.minutes = this->minutes*mulTimes;
	result.hours += result.minutes / 60;

	if (result.minutes >= 60)
	{
		result.minutes = result.minutes % 60;
	}

	return result;
}

bool Time::operator<(Time & minusTimes)
{
	if (this->hours < minusTimes.hours)
		return true;
	else if (this->hours == minusTimes.hours) {
		if (this->minutes < minusTimes.minutes)
			return true;
		else if (this->minutes == minusTimes.minutes)
			return false;
		else
			return false;
	}
	else
		return false;
}



bool Time::operator>(Time & minusTimes)
{
	if (this->hours > minusTimes.hours)  return true;
	else if (this->hours == minusTimes.hours) {
		if (this->minutes > minusTimes.minutes)
			return true;
		else if (this->minutes == minusTimes.minutes)
			return false;
		else
			return false;
	}
	else
		return false;
}



bool Time::operator<=(Time & minusTimes)
{
	if (this->hours <= minusTimes.hours) {
		if (this->hours == minusTimes.hours) {
			if (this->minutes <= minusTimes.minutes)
				return true;
			else
				return false;
		}
		else
			return true;
	}
	else
		return false;
}
bool Time::operator>=(Time & minusTimes)
{
	if (this->hours >= minusTimes.hours) {
		if (this->hours == minusTimes.hours) {
			if (this->minutes >= minusTimes.minutes)
				return true;
			else
				return false;
		}
		else
			return true;
	}
	else
		return false;
}
bool Time::operator==(Time & minusTimes)
{
	if (this->hours == minusTimes.hours && this->minutes == minusTimes.minutes)
		return true;
	else
		return false;
}
bool Time::operator!=(Time & minusTimes)
{
	if (this->hours != minusTimes.hours || this->minutes != minusTimes.minutes)
		return true;
	else
		return false;
}
void Time::print()

{
	cout << this->getHours() << " hours " << this->getMinutes() << " minutes" << " " << endl;
}
void Time::ResultComprasion(Time a, Time b, string valueComp)
{
	cout << endl;
	a.print();
	cout << " " << valueComp << " ";
	b.print();
}