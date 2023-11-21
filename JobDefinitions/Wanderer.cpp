
#ifndef WANDERER_H
#define WANDERER_H

#include "../JobPredefs.hpp"

class Wanderer : public Gypsy {

public:
	Wanderer(){
		this->setName("Wanderer");

		adjustStats(0,6,0,0,0,0);

        this->addSkill(new Skill("Severe Rainstorm", "Attack", 20));
        this->addSkill(new Skill("Metallic Sound", "Attack", 5));
        this->addSkill(new Skill("Performance Class", "Passive", 10));
        this->addSkill(new Skill("Shield Resonance", "Solo", 10));
        this->addSkill(new Skill("Wolf Dance", "Ensemble", 5));
        this->addSkill(new Skill("Song Of Return", "Reborn", 5));
        this->addSkill(new Skill("Leylad's Resolve", "Ensemble", 15));
        this->addSkill(new Skill("Moonlight Serenade", "Solo", 10));
        this->addSkill(new Skill("Ancient Song", "Ensemble", 15));
        this->addSkill(new Skill("Reverberation", "Trap Skill", 5));
        this->addSkill(new Skill("Vibration Field", "Trigger Trap", 5));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif