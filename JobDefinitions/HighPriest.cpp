
#ifndef HIGH_PRIEST_H
#define HIGH_PRIEST_H

#include "../JobPredefs.hpp"

class HighPriest : public Priest {

public:
	HighPriest(){
		this->setName("High Priest");

		adjustStats(0,0,4,0,0,0);

        this->addSkill(new Skill("Angelus", "Buff", 10));
        this->addSkill(new Skill("Meditatio", "Passive", 10));
        this->addSkill(new Skill("Magic Prayer", "Passive", 10));
        this->addSkill(new Skill("Assumptio", "Buff", 5));
        this->addSkill(new Skill("Suffragium", "Buff", 5));
        this->addSkill(new Skill("Jud", "Attack", 20));
        this->addSkill(new Skill("Decrease Agility", "Debuff", 10));
        this->addSkill(new Skill("Lex Divina", "Debuff", 5));
        this->addSkill(new Skill("Lex Aeterna", "Debuff", 1));
        this->addSkill(new Skill("Safety Wall", "Barrier", 10));
        this->addSkill(new Skill("Demon Bane", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif