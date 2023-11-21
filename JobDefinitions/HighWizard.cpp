
#ifndef HIGH_WIZARD_H
#define HIGH_WIZARD_H

#include "../JobPredefs.hpp"

class HighWizard : public Wizard {

public:
	HighWizard(){
		this->setName("High Wizard");

		adjustStats(0,0,0,4,0,0);

        this->addSkill(new Skill("Marsh Pond", "Debuff", 20));
        this->addSkill(new Skill("Stone Curse", "Debuff", 10));
        this->addSkill(new Skill("Alight", "Passive", 10));
        this->addSkill(new Skill("Amplify Magic Power", "Buff", 20));
        this->addSkill(new Skill("Flame Dash", "Attack", 10));
        this->addSkill(new Skill("Safety Wall", "Barrier", 10));
        this->addSkill(new Skill("Napalm Vulcan", "Attack", 10));
        this->addSkill(new Skill("Frost Nova", "Debuff", 15));
	};

    void initializeUpgrades();
};

#endif