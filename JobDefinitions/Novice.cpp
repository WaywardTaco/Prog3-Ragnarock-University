
#ifndef NOVICE_H
#define NOVICE_H

#include "../JobPredefs.hpp"

class Novice : public Job {
private:

public:
	Novice(){
        this->setName("Novice");

        this->addSkill(new Skill("Basic Skill", "Attack", 1));
        this->addSkill(new Skill("First Aid", "Heal", 1));
        this->addSkill(new Skill("Play Dead", "Fake Dead", 1));
        this->addSkill(new Skill("Rest On Site", "Passive", 1));
        this->addSkill(new Skill("Might Field", "Passive", 1));
        this->addSkill(new Skill("Protect Party", "Passive", 1));
        this->addSkill(new Skill("Monster Targeting", "Passive", 1));
        this->addSkill(new Skill("Preparation Skill", "Passive", 1));
    }

    void initializeUpgrades();
};

#endif