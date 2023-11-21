
#ifndef GUILLOTINE_CROSS_H
#define GUILLOTINE_CROSS_H

#include "../JobPredefs.hpp"

class GuillotineCross : public AssassinCross {

public:
	GuillotineCross(){
		this->setName("Guillotine Cross");

		adjustStats(0,6,0,0,0,0);

        this->addSkill(new Skill("Rolling Cutter", "Attack", 5));
        this->addSkill(new Skill("Poisonous Weapon", "Buff", 10));
        this->addSkill(new Skill("Hallucination Walk", "Buff", 10));
        this->addSkill(new Skill("Mind Intimidate", "Passive", 15));
        this->addSkill(new Skill("Antidote", "Buff", 5));
        this->addSkill(new Skill("New Poison Research", "Passive", 10));
        this->addSkill(new Skill("Weapon Blocking", "Buff", 10));
        this->addSkill(new Skill("Dark Illusion", "Attack", 5));
        this->addSkill(new Skill("Cross Ripper Slasher", "Attack", 10));
        this->addSkill(new Skill("Poisonous Smoke", "Debuff", 15));
        this->addSkill(new Skill("Deepen Wound", "Passive", 5));
        this->addSkill(new Skill("Cross Impact", "Attack", 5));
        this->addSkill(new Skill("Dance Of Charming Ghast", "Attack", 5));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif