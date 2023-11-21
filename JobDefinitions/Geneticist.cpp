
#ifndef GENETICIST_H
#define GENETICIST_H

#include "../JobPredefs.hpp"

class Geneticist : public Biochemist {

public:
	Geneticist(){
		this->setName("Geneticist");

		adjustStats(6,0,0,0,0,0);

        this->addSkill(new Skill("Demonic Fire", "Attack", 10));
        this->addSkill(new Skill("Life Merge", "Buff", 10));
        this->addSkill(new Skill("Cart Cannon", "Attack", 5));
        this->addSkill(new Skill("Thorns Trap", "Trap Skill", 5));
        this->addSkill(new Skill("Searing Storm", "Passive", 5));
        this->addSkill(new Skill("Health Link", "Buff", 10));
        this->addSkill(new Skill("Crazy Weed", "Clear Effect", 15));
        this->addSkill(new Skill("Cart Boost", "Buff", 5));
        this->addSkill(new Skill("Mandragora Howling", "Debuff", 10));
        this->addSkill(new Skill("Fire Expansion", "Attack", 10));
        this->addSkill(new Skill("Genetic Modification", "Attack", 10));
        this->addSkill(new Skill("Unstable Potion", "Passive", 5));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif