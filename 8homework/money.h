#pragma once
class money
{
private:
	int rublei;
	int kopeika;
public:
	void set(int newRublei, int newKopeika);
	int getRublei();
	unsigned char getKopeika();
	void addMoney(money& someMoney);
	void withdrawMoney(money& someMoney);
};