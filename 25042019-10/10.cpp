#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "Time.h"
using namespace std;
int main()
{
	int tmp;
	Time a[10];
	/*a.setTime(3,20);
	b.setTime(1,10);
	c=a+b;
	c.print();

	e.setTime(1,40);
	d=a-e;
	d.print();

	g=a*8;
	g.print();*/

	a[0].setTime(1,13);
	a[1].setTime(4,30);
	a[2].setTime(3,40);
	a[3].setTime(1,20);
	a[4].setTime(6,10);
	a[5].setTime(2,15);
	a[6].setTime(3,12);
	a[7].setTime(8,40);
	a[8].setTime(2,13);
	a[9].setTime(1,35);
Time temp;

for (int i = 0; i < 10 - 1; i++) {
for (int j = 0; j < 10 - i - 1; j++) {
if (a[j] > a[j + 1]) {
	temp = a[j];
    a[j] = a[j + 1];
    a[j + 1] = temp;
 }
}
}
for (int i = 0; i < 10; i++)
{
	a[i].print();
}
}