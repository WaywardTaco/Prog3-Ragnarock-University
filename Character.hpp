#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
private:
	int STR,
	    AGI,
	    VIT,
	    INT,
	    DEX,
	    LUK;

public:
	Character(){
		
	};

	void setStats(int Str, int Agi, int Vit, int Int, int Dex, int Luk);

	void adjustStats(int Str, int Agi, int Vit, int Int, int Dex, int Luk);

	void showStats();

	int getSTR();
	int getAGI();
	int getVIT();
	int getINT();
	int getDEX();
	int getLUK();

};

#endif