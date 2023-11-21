
#ifndef JOB_H
#define JOB_H

#include <iostream>
#include <vector>

#include "Character.hpp"
#include "Skill.hpp"

using namespace std;

class Job : public Character {

private:
    string jobName;
    vector<Skill*> jobSkills;
    vector<Job*> jobUpgrades;

public:
    Job();

    virtual void initializeUpgrades() = 0;

    void addSkill(Skill* skill);
    void addUpgrade(Job* job);

    void setName(string name);

    vector<Skill> *skillList();
    vector<Job*> upgradeList();

    string getName();
    
};

#endif