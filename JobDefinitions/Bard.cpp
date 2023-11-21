
#ifndef BARD_H
#define BARD_H

#include "../JobPredefs.hpp"

class Bard : public Archer {

public:
	Bard(){
		this->setName("Bard");

        this->addSkill(new Skill("Assassin's Dusk", "Solo", 10));
        this->addSkill(new Skill("Eternal Chaos", "Ensemble", 1));
        this->addSkill(new Skill("Instrument Attack", "Attack", 10));
        this->addSkill(new Skill("Whistle", "Solo", 10));
        this->addSkill(new Skill("Lullaby", "Ensemble", 1));
        this->addSkill(new Skill("Apple Of Eden", "Solo", 10));
        this->addSkill(new Skill("War Drum", "Ensemble", 20));
        this->addSkill(new Skill("Unbarring Octave", "Debuff", 5));
        this->addSkill(new Skill("Mr. Gold Is Rich", "Ensemble", 15));
        this->addSkill(new Skill("Use Musical Instrument", "Passive", 20));
        this->addSkill(new Skill("Momentary Adaptation", "Stop Concert", 1));
    };

    void initializeUpgrades();
};

#endif