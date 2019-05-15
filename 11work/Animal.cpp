#include "Animal.h"
#include <iostream>
#include <string>


void Animal::setName(std::string newName)
{
	name = newName;
}

string Animal::getName()
{
	return this->name;
}

void Animal::say(std::string text)
{
	cout << text << endl;
}

void Animal::try_break_egg(egg* some_egg)
{
	some_egg->breakk(this->name);
	if (some_egg->breakk(this->name) == true)
		this->say("egg upalo i razbilos");
	else
		this->say("ne razbilos");
}

egg* Animal::create_egg()
{
	egg* retval;
	retval = new egg;
	retval->size = 5;
	retval->weight = 50;
	return retval;
}