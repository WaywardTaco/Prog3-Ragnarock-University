
#ifndef ASSASSIN_CROSS_H
#define ASSASSIN_CROSS_H

#include "../JobPredefs.hpp"

class AssassinCross : public Assassin {

public:
	AssassinCross(){
		this->setName("Assassin Cross");

		adjustStats(0,4,0,0,0,0);

        this->addSkill(new Skill("Slash", "Attack", 10));
        this->addSkill(new Skill("Advanced Katar Research", "Passive", 20));
        this->addSkill(new Skill("Enchant Deadly Poison", "Buff", 20));
        this->addSkill(new Skill("Enhanced Hiding", "Passive", 10));
        this->addSkill(new Skill("Meteor Assault", "Attack", 10));
        this->addSkill(new Skill("Soul Breaker", "Attack", 20));
        this->addSkill(new Skill("Assassination Heart", "Passive", 20));
        this->addSkill(new Skill("Assassination Halo", "Buff", 10));
	};

    void initializeUpgrades();
};

#endif