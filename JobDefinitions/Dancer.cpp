
#ifndef DANCER_H
#define DANCER_H

#include "../JobPredefs.hpp"

class Dancer : public Archer {

public:
	Dancer(){
		this->setName("Dancer");

        this->addSkill(new Skill("Humming", "Solo", 10));
        this->addSkill(new Skill("Eternal Chaos", "Ensemble", 1));
        this->addSkill(new Skill("Arrow Flurry", "Attack", 10));
        this->addSkill(new Skill("Forget-Me-Not", "Solo", 10));
        this->addSkill(new Skill("Lullaby", "Ensemble", 1));
        this->addSkill(new Skill("Service For You", "Solo", 10));
        this->addSkill(new Skill("War Drum", "Ensemble", 20));
        this->addSkill(new Skill("Chilling Scream", "Debuff", 5));
        this->addSkill(new Skill("Mr. Gold Is Rich", "Ensemble", 15));
        this->addSkill(new Skill("Practice Dance", "Passive", 20));
        this->addSkill(new Skill("Momentary Adaptation", "Stop Concert", 1));
	};

    void initializeUpgrades();
};

#endif