
#include "Inclusions.hpp"

void Novice::initializeUpgrades(){
    this->addUpgrade(new Swordsman());
    this->addUpgrade(new Magician());
    this->addUpgrade(new Acolyte());
    this->addUpgrade(new Archer());
    this->addUpgrade(new Thief());
    this->addUpgrade(new Merchant());
}

void Swordsman::initializeUpgrades(){
    this->addUpgrade(new Knight());
    this->addUpgrade(new Crusader());
}
void Knight::initializeUpgrades(){
    this->addUpgrade(new LordKnight());
}
void LordKnight::initializeUpgrades(){
    this->addUpgrade(new RuneKnight());
}
void RuneKnight::initializeUpgrades(){
    
}
void Crusader::initializeUpgrades(){
    this->addUpgrade(new Paladin());
}
void Paladin::initializeUpgrades(){
    this->addUpgrade(new RoyalGuard());
}
void RoyalGuard::initializeUpgrades(){
    
}

void Magician::initializeUpgrades(){
    this->addUpgrade(new Wizard());
    this->addUpgrade(new Sage());
}
void Wizard::initializeUpgrades(){
    this->addUpgrade(new HighWizard());
}
void HighWizard::initializeUpgrades(){
    this->addUpgrade(new Warlock());
}
void Warlock::initializeUpgrades(){
    
}
void Sage::initializeUpgrades(){
    this->addUpgrade(new Scholar());
}
void Scholar::initializeUpgrades(){
    this->addUpgrade(new Sorcerer());
}
void Sorcerer::initializeUpgrades(){
    
}

void Acolyte::initializeUpgrades(){
    this->addUpgrade(new Priest());
    this->addUpgrade(new Monk());
}
void Priest::initializeUpgrades(){
    this->addUpgrade(new HighPriest());
}
void HighPriest::initializeUpgrades(){
    this->addUpgrade(new ArcBishop());
}
void ArcBishop::initializeUpgrades(){
    
}
void Monk::initializeUpgrades(){
    this->addUpgrade(new Champion());
}
void Champion::initializeUpgrades(){
    this->addUpgrade(new Sura());
}
void Sura::initializeUpgrades(){
    
}

void Archer::initializeUpgrades(){
    this->addUpgrade(new Hunter());
    this->addUpgrade(new Bard());
    this->addUpgrade(new Dancer());
}
void Hunter::initializeUpgrades(){
    this->addUpgrade(new Sniper());
}
void Sniper::initializeUpgrades(){
    this->addUpgrade(new Ranger());
}
void Ranger::initializeUpgrades(){
    
}
void Bard::initializeUpgrades(){
    this->addUpgrade(new Minstrel());
}
void Minstrel::initializeUpgrades(){
    this->addUpgrade(new Maestro());
}
void Maestro::initializeUpgrades(){
    
}
void Dancer::initializeUpgrades(){
    this->addUpgrade(new Gypsy());
}
void Gypsy::initializeUpgrades(){
    this->addUpgrade(new Wanderer());
}
void Wanderer::initializeUpgrades(){
    
}

void Thief::initializeUpgrades(){
    this->addUpgrade(new Assassin());
    this->addUpgrade(new Rogue());
}
void Assassin::initializeUpgrades(){
    this->addUpgrade(new AssassinCross());
}
void AssassinCross::initializeUpgrades(){
    this->addUpgrade(new GuillotineCross());
}
void GuillotineCross::initializeUpgrades(){
    
}
void Rogue::initializeUpgrades(){
    this->addUpgrade(new Stalker());
}
void Stalker::initializeUpgrades(){
    this->addUpgrade(new ShadowChaser());
}
void ShadowChaser::initializeUpgrades(){
    
}

void Merchant::initializeUpgrades(){
    this->addUpgrade(new Blacksmith());
    this->addUpgrade(new Alchemist());
}
void Blacksmith::initializeUpgrades(){
    this->addUpgrade(new Whitesmith());
}
void Whitesmith::initializeUpgrades(){
    this->addUpgrade(new Mechanic());
}
void Mechanic::initializeUpgrades(){
    
}
void Alchemist::initializeUpgrades(){
    this->addUpgrade(new Biochemist());
}
void Biochemist::initializeUpgrades(){
    this->addUpgrade(new Geneticist());
}
void Geneticist::initializeUpgrades(){
    
}