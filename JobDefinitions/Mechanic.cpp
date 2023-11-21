
#ifndef MECHANIC_H
#define MECHANIC_H

#include "../JobPredefs.hpp"

class Mechanic : public Whitesmith {

public:
	Mechanic(){
		this->setName("Mechanic");

		adjustStats(0,0,0,0,0,6);

        this->addSkill(new Skill("Madogear License", "Ride Change", 10));
        this->addSkill(new Skill("Lure", "Passive", 10));
        this->addSkill(new Skill("Self Destruction", "Attack", 10));
        this->addSkill(new Skill("Anti-Gravity Armor", "Buff", 5));
        this->addSkill(new Skill("Repair", "Heal", 5));
        this->addSkill(new Skill("Knuckle Boost", "Attack", 10));
        this->addSkill(new Skill("Magnetic Field", "Buff", 8));
        this->addSkill(new Skill("Side Slide", "Buff", 1));
        this->addSkill(new Skill("Mechanical Modification", "Passive", 5));
        this->addSkill(new Skill("Arm Cannon", "Attack", 10));
        this->addSkill(new Skill("Axe Mastery", "Passive", 10));
        this->addSkill(new Skill("Neutral Barrier", "Buff", 8));
        this->addSkill(new Skill("Optical Camouflage Stance", "Buff", 5));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif