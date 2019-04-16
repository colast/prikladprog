// 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "mage.h"
#include "spell.h"
#include <iostream>

using namespace std;


void mage::init(int newhp, int newmp, std::string newname)
{
	hp = newhp;
	mp = newmp;
	name = newname;
}

string mage::getname()
{
	return this->name;
}

void mage::say(std::string text)
{
	cout << this->name << " says " << text << endl << endl;
}

int mage::cast(Spell &spl, mage &target)
{
	if (hp > 0)
	{
		cout << this->name << " hit with " << spl.name << " our enemy " << target.getname() << endl << endl;
		target.hit(spl);
	}

	else
	{
		this->say("I'm is dead");
	}
	return 0;
}

void mage::hit(Spell &spl)
{
	this->hp -= spl.dhp;
	this->mp -= spl.dmp;
	if (hp <= 0)
	{
		this->say(" i am loser");
	}
}


void main()
{
	mage Ivan;
	mage Boris;
	spell bolt;
	spell drain;

	bolt.name = "Bolt";
	bolt.dhp = 50;
	bolt.dmp = 0;

	drain.name = "Drain";
	drain.dhp = 5;
	drain.dmp = 30;

	Ivan.init(100, 100, "Ivan");
	Ivan.say("hello");

	Boris.init(100, 100, "Boris");
	Boris.say("Stop, I'm frendly");


	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);
}