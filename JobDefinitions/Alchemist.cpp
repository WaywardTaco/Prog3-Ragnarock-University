
#ifndef ALCHEMIST_H
#define ALCHEMIST_H

#include "../JobPredefs.hpp"

class Alchemist : public Merchant {

public:
	Alchemist(){
		this->setName("Alchemist");

        this->addSkill(new Skill("Acid Demonstration", "Attack", 5));
        this->addSkill(new Skill("Acid Terror", "Attack", 20));
        this->addSkill(new Skill("Call Homunculus", "Summon Being", 4));
        this->addSkill(new Skill("Resurrect Homunculus", "Revive Being", 4));
        this->addSkill(new Skill("Sphere Mine", "Attack", 5));
        this->addSkill(new Skill("Sphere Parasitism", "Attack", 5));
        this->addSkill(new Skill("Homunculus Strength I", "Passive", 5));
        this->addSkill(new Skill("Life Psychic", "Being Buff", 20));
        this->addSkill(new Skill("Pharmacy", "Function", 10));
        this->addSkill(new Skill("Learning Potion", "Passive", 10));
        this->addSkill(new Skill("Axe Hammer Mastery", "Passive", 20));
        this->addSkill(new Skill("Gene Modification", "Passive", 5));
	};

    void initializeUpgrades();
};

#endif