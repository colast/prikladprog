// 11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "stdio.h"
#include "pch.h"
#include <iostream>
#include "Animal.h"
#include "egg.h"
#include "Human.h"
#include <string>

void main()
{
	Animal mouse, chicken;
	Human grandpa, grandma;
	egg* some_egg;

	mouse.setName("Mouse");
	chicken.setName("Chicken");

	chicken.create_egg();
	some_egg = chicken.create_egg();
	chicken.say(chicken.getName() + " snelsa egg with size " + to_string(some_egg->size) + " and weight " + to_string(some_egg->weight));

	cout << endl;

	grandpa.init("Grandpa", 70);
	grandpa.say("bil bil");
	grandpa.try_break_egg(some_egg);

	cout << endl;

	grandma.init("Grandma", 60);
	grandma.say("bila bila");
	grandma.try_break_egg(some_egg);

	cout << endl;

	chicken.say(chicken.getName() + " bejala hvostikom mahnula");
	chicken.try_break_egg(some_egg);

	cout << endl;

	mouse.say(mouse.getName() + " bejala hvostikom mahnula");
	mouse.try_break_egg(some_egg);
}