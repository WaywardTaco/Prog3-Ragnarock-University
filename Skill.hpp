
#ifndef SKILL_H
#define SKILL_H

using namespace std;

class Skill {
private:
	int currentLvl,
        maxLevel;
	string  type,
            name;

public:
    
    Skill(string skillName, string skillType, int maxLvl);

    void useSkill();
    void lvlUpSkill();

    string getName();
    string getType();
    int getCurrLvl();
    int getMaxLvl();

};

#endif