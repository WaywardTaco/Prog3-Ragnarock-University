
#ifndef MAESTRO_H
#define MAESTRO_H

#include "../JobPredefs.hpp"

class Maestro : public Minstrel {

public:
	Maestro(){
		this->setName("Maestro");

		adjustStats(0,6,0,0,0,0);

        this->addSkill(new Skill("Severe Rainstorm", "Attack", 20));
        this->addSkill(new Skill("Metallic Sound", "Attack", 5));
        this->addSkill(new Skill("Performance Class", "Passive", 10));
        this->addSkill(new Skill("Shield Resonance", "Solo", 10));
        this->addSkill(new Skill("Wolf Dance", "Ensemble", 5));
        this->addSkill(new Skill("Song Of Return", "Reborn", 5));
        this->addSkill(new Skill("Leylad's Resolve", "Ensemble", 15));
        this->addSkill(new Skill("Raider's Song", "Solo", 10));
        this->addSkill(new Skill("Ancient Song", "Ensemble", 15));
        this->addSkill(new Skill("Reverberation", "Trap Skill", 5));
        this->addSkill(new Skill("Vibration Field", "Trigger Trap", 5));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif