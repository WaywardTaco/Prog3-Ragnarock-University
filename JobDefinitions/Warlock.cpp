
#ifndef WARLOCK_H
#define WARLOCK_H

#include "../JobPredefs.hpp"

class Warlock : public HighWizard {

public:
	Warlock(){
		this->setName("Warlock");

		adjustStats(0,0,0,6,0,0);

        this->addSkill(new Skill("Recognized Spell", "Buff", 10));
        this->addSkill(new Skill("Elemental Enhancement", "Passive", 10));
        this->addSkill(new Skill("Soul Expansion", "Attack", 15));
        this->addSkill(new Skill("Earth Strain", "Attack", 10));
        this->addSkill(new Skill("Frost Misty", "Debuff", 10));
        this->addSkill(new Skill("Tetra Vortex", "Attack", 10));
        this->addSkill(new Skill("HP Absorb", "Attack", 10));
        this->addSkill(new Skill("Chain Lightning", "Attack", 10));
        this->addSkill(new Skill("White Imprison", "Debuff", 5));
        this->addSkill(new Skill("Status Invulnerability", "Passive", 5));
        this->addSkill(new Skill("Fast Reading Spell", "Passive", 5));
        this->addSkill(new Skill("White Barrier", "Buff", 6));
        this->addSkill(new Skill("Stasis", "Buff", 6));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif