#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "Character.hpp"

using namespace std;

class Character {
private:
	int STR = 0,
	    AGI = 0,
	    VIT = 0,
	    INT = 0,
	    DEX = 0,
	    LUK = 0;

public:
	Character(){
		
	};

	void setStats(int Str, int Agi, int Vit, int Int, int Dex, int Luk){
		this->STR = Str;
		this->AGI = Agi;
		this->VIT = Vit;
		this->INT = Int;
		this->DEX = Dex;
		this->LUK = Luk;
	}

	void adjustStats(int Str, int Agi, int Vit, int Int, int Dex, int Luk){
		this->STR += Str;
		this->AGI += Agi;
		this->VIT += Vit;
		this->INT += Int;
		this->DEX += Dex;
		this->LUK += Luk;
	};

	void showStats(){
		cout << "STATS:" << endl;
		cout << "STR: " << this->STR << endl;
		cout << "AGI: " << this->AGI << endl;
		cout << "VIT: " << this->VIT << endl;
		cout << "INT: " << this->INT << endl;
		cout << "DEX: " << this->DEX << endl;
		cout << "LUK: " << this->LUK << endl;
	}

	int getSTR(){
		return STR;
	}
	
	int getAGI(){
		return AGI;
	}

	int getVIT(){
		return VIT;
	}
	
	int getINT(){
		return INT;
	}
	
	int getDEX(){
		return DEX;
	}

	int getLUK(){
		return LUK;
	}

};

#endif