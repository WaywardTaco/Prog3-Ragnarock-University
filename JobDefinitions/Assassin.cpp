
#ifndef ASSASSIN_H
#define ASSASSIN_H

#include "../JobPredefs.hpp"

class Assassin : public Thief {

public:
	Assassin(){
		this->setName("Assassin");

        this->addSkill(new Skill("Sonic Blow", "Attack", 15));
        this->addSkill(new Skill("Sonic Acceleration", "Passive", 5));
        this->addSkill(new Skill("Katar Mastery", "Passive", 10));
        this->addSkill(new Skill("Virus Diffusion", "Attack", 10));
        this->addSkill(new Skill("Grimtooth", "Attack", 10));
        this->addSkill(new Skill("Venom Dart", "Attack", 5));
        this->addSkill(new Skill("Enhanced Enchant Poison", "Passive", 10));
        this->addSkill(new Skill("Back Sliding", "Buff", 10));
        this->addSkill(new Skill("Twin Blade Penetration", "Passive", 15));
	};

    void initializeUpgrades();
};

#endif