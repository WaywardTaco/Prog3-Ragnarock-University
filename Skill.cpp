
#ifndef SKILL_H
#define SKILL_H

#include <iostream>
#include "Skill.hpp"

using namespace std;

class Skill {
private:
	int currentLvl = 1,
        maxLevel;
	string  type,
            name;

public:
    
    Skill(string skillName, string skillType, int maxLvl){
        this->name = skillName;
        this->type = skillType;
        this->maxLevel = maxLvl;
    };

    void useSkill(){
        cout << "\"Used " << name << "!\" <" << type << "> <Lvl " << currentLvl << "/" << maxLevel << ">" << endl;
        lvlUpSkill();
    }

    void lvlUpSkill(){
        if(currentLvl < maxLevel)
            currentLvl++;
    }

    string getName(){
        return this->name;
    }

    string getType(){
        return this->type;
    }

    int getCurrLvl(){
        return this->currentLvl;
    }

    int getMaxLvl(){
        return this->maxLevel;
    }

};

#endif