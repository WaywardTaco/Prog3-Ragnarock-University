
#ifndef RANGER_H
#define RANGER_H

#include "../JobPredefs.hpp"

class Ranger : public Sniper {

public:
	Ranger(){
		this->setName("Ranger");

		adjustStats(0,0,0,0,6,0);

        this->addSkill(new Skill("Warg Rider", "Ride Change", 3));
        this->addSkill(new Skill("Electric Shock", "Trap Skill", 15));
        this->addSkill(new Skill("Arrow Storm", "Attack", 15));
        this->addSkill(new Skill("Exceed Break", "Buff", 15));
        this->addSkill(new Skill("Nature's Protection", "Passive", 10));
        this->addSkill(new Skill("Warg Strike", "Summon", 10));
        this->addSkill(new Skill("Deadly Snipe", "Attack", 13));
        this->addSkill(new Skill("Tracking Prey", "Debuff", 3));
        this->addSkill(new Skill("Tooth Of Warg", "Passive", 10));
        this->addSkill(new Skill("Fear Breeze", "Passive", 10));
        this->addSkill(new Skill("Instrument Expert", "Passive", 10));
        this->addSkill(new Skill("Wolf Pack Strike", "Summon", 5));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif