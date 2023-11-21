
#ifndef SHADOW_CHASER_H
#define SHADOW_CHASER_H

#include "../JobPredefs.hpp"

class ShadowChaser : public Stalker {

public:
	ShadowChaser(){
		this->setName("Shadow Chaser");

		adjustStats(0,0,0,0,0,6);

        this->addSkill(new Skill("Magic Trap", "Debuff", 15));
        this->addSkill(new Skill("Counter Instinct", "Passive", 10));
        this->addSkill(new Skill("Covered Shot", "Passive", 10));
        this->addSkill(new Skill("Deadly Infection", "Buff", 15));
        this->addSkill(new Skill("Threaten", "Debuff", 5));
        this->addSkill(new Skill("Chaos Panic", "Debuff", 6));
        this->addSkill(new Skill("Pick'em Off", "Passive", 15));
        this->addSkill(new Skill("Manhole", "Debuff", 5));
        this->addSkill(new Skill("Blood Thirst", "Debuff", 5));
        this->addSkill(new Skill("Mark Of Death", "Debuff", 10));
        this->addSkill(new Skill("Shadow Chase", "Passive", 5));
        this->addSkill(new Skill("Auto Shadow", "Buff", 5));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif