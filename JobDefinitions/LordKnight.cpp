
#ifndef LORD_KNIGHT_H
#define LORD_KNIGHT_H

#include "../JobPredefs.hpp"

class LordKnight : public Knight {

public:
    LordKnight(){
        this->setName("Lord Knight");

        adjustStats(4,0,0,0,0,0);

        this->addSkill(new Skill("Head Crush", "Buff", 15));
        this->addSkill(new Skill("Concentration", "Buff", 5));
        this->addSkill(new Skill("Spiral Pierce", "Attack", 20));
        this->addSkill(new Skill("Joint Beat", "Attack", 10));
        this->addSkill(new Skill("Lord's Aura", "Buff", 10));
        this->addSkill(new Skill("Frenzy", "Buff", 10));
        this->addSkill(new Skill("Call Of Justice", "Passive", 5));
        this->addSkill(new Skill("Sword Parry", "Buff", 10));
        this->addSkill(new Skill("HP Alight", "Buff", 15));
    }

    void initializeUpgrades();
};

#endif