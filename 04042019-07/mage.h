#pragma once
#include <string>
#include "spell.h"

class mage

{
private:
	int hp;
	int mp;
	std::string name;

public:
	void init(int newhp, int newmp, std::string newname);
	std::string getname();
	void say(std::string text);
	int cast(spell &spl, mage &target);
	void hit(spell &spl);
};
