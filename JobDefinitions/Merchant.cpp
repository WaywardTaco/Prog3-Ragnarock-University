
#ifndef MERCHANT_H
#define MERCHANT_H

#include "../JobPredefs.hpp"

class Merchant : public Job {

public:
	Merchant(){
		this->setName("Merchant");

		setStats(13, 8, 3, 1, 5, 5);

        this->addSkill(new Skill("Mammonite", "Attack", 20));
        this->addSkill(new Skill("Cart Attack", "Summon", 10));
        this->addSkill(new Skill("Loud Exclamation", "Buff", 20));
        this->addSkill(new Skill("Change Cart", "Passive", 5));
        this->addSkill(new Skill("Buying Low", "Passive", 10));
        this->addSkill(new Skill("OverPrice", "Passive", 10));
        this->addSkill(new Skill("Enhanced Cart", "Passive", 10));
        this->addSkill(new Skill("Fund Raising", "Passive", 15));
        this->addSkill(new Skill("Open Stall", "Function", 5));
	};

    void initializeUpgrades();
};

#endif