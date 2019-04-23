#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "Time.h"

void main()
{
	Time a, b, c, e,d,g;
	a.setTime(3,20);
	b.setTime(1,10);
	c=a+b;
	c.print();

	e.setTime(1,40);
	d=a-e;
	d.print();

	g=a*8;
	g.print();
}