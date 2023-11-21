
#ifndef JOB_H
#define JOB_H

#include "Job.hpp"

#include <iostream>
#include <vector>

using namespace std;

class Job : public Character {

private:
    string jobName;
    vector<Skill*> jobSkills;
    vector<Job*> jobUpgrades;

public:
    Job(){

    };

    virtual void initializeUpgrades() = 0;

    void addSkill(Skill* skill){
        this->jobSkills.push_back(skill);
    }

    void addUpgrade(Job* job){
        this->jobUpgrades.push_back(job);
    }

    void setName(string name){
        this->jobName = name;
    }

    vector<Skill*> skillList(){
        return jobSkills;
    }

    vector<Job*> upgradeList(){
        return jobUpgrades;
    }

    string getName(){
        return this->jobName;
    }

};

#endif