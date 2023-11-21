
#ifndef RUNE_KNIGHT_H
#define RUNE_KNIGHT_H

#include "../JobPredefs.hpp"

class RuneKnight : public LordKnight {

public:
    RuneKnight(){
        this->setName("Rune Knight");

        adjustStats(6,0,0,0,0,0);

        this->addSkill(new Skill("Dragon Training", "Passive", 5));
        this->addSkill(new Skill("Phantom Thrust", "Attack", 10));
        this->addSkill(new Skill("Power Of Rune", "Passive", 10));
        this->addSkill(new Skill("Rune Mastery", "Function", 5));
        this->addSkill(new Skill("Enchant Blade", "Buff", 10));
        this->addSkill(new Skill("Dragon Howling", "Debuff", 10));
        this->addSkill(new Skill("Hundred Spears", "Attack", 10));
        this->addSkill(new Skill("Rune Mastery", "Passive", 10));
        this->addSkill(new Skill("Dragon Breath", "Attack", 10));
        this->addSkill(new Skill("Dragon's Protection", "Passive", 10));
        this->addSkill(new Skill("Sink Or Swim", "Buff", 10));
        this->addSkill(new Skill("Deep Cut", "Passive", 10));
        this->addSkill(new Skill("Dragon's Water Breath", "Attack", 10));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
    }

    void initializeUpgrades();
};

#endif