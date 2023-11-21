
#ifndef ROGUE_H
#define ROGUE_H

#include "../JobPredefs.hpp"

class Rogue : public Thief {

public:
	Rogue(){
		this->setName("Rogue");

        this->addSkill(new Skill("Plagiarism", "Copy Skill", 10));
        this->addSkill(new Skill("Enhanced Hiding", "Passive", 10));
        this->addSkill(new Skill("Double Strafe", "Attack", 10));
        this->addSkill(new Skill("Compulsion Discount", "Passive", 5));
        this->addSkill(new Skill("Rob", "Passive", 10));
        this->addSkill(new Skill("Snatch", "Steal Money", 10));
        this->addSkill(new Skill("Repeated Firing", "Passive", 3));
        this->addSkill(new Skill("Dagger Proficiency", "Passive", 20));
        this->addSkill(new Skill("Vulture's Eye", "Passive", 20));
        this->addSkill(new Skill("Tunnel Drive", "Passive", 5));
        this->addSkill(new Skill("Back Stab", "Attack", 20));
        this->addSkill(new Skill("Raid", "Attack", 5));
	};

    void initializeUpgrades();
};

#endif