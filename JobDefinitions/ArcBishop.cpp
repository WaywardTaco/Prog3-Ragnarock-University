
#ifndef ARC_BISHOP_H
#define ARC_BISHOP_H

#include "../JobPredefs.hpp"

class ArcBishop : public HighPriest {

public:
	ArcBishop(){
		this->setName("Arc Bishop");

		adjustStats(0,0,6,0,0,0);

        this->addSkill(new Skill("Sacrament", "Buff", 5));
        this->addSkill(new Skill("Comprehend", "Passive", 5));
        this->addSkill(new Skill("Deny", "Debuff", 10));
        this->addSkill(new Skill("Duple Light", "Buff", 15));
        this->addSkill(new Skill("Oratio", "Debuff", 10));
        this->addSkill(new Skill("Epiclesis", "Revive", 10));
        this->addSkill(new Skill("Coluceo Heal", "Heal", 10));
        this->addSkill(new Skill("Exhort", "Passive", 10));
        this->addSkill(new Skill("Expiatio", "Passive", 10));
        this->addSkill(new Skill("Adoramus", "Attack", 15));
        this->addSkill(new Skill("Son's Radiance", "Passive", 6));
        this->addSkill(new Skill("Slow Poison", "Buff", 3));
        this->addSkill(new Skill("Song", "Buff", 5));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif