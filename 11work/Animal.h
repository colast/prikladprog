#pragma once
#include "egg.h"
#include <string>
class Animal
{
private:
	std::string name;

public:
	void setName(std::string newName);
	std::string getName();
	void say(std::string text);
	void try_break_egg(egg* some_egg);
	egg *create_egg();
};
