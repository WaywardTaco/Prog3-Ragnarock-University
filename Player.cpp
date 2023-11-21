
#ifndef PLAYER_H
#define PLAYER_H

#include "Job.hpp"
#include "Player.hpp"
#include "JobPredefs.hpp"

class Player {
private:
	Job* currJob;

public:
	Player(){
		this->currJob = new Novice();
		this->currJob->initializeUpgrades();
	}
	
	void doActions(){

		cout << currJob->getName() << " Actions:" << endl;

		int skillCount = currJob->skillList().size();

		for(int i = 0; i < skillCount; i++)
			cout << "[" << i + 1 << "] " << currJob->skillList()[i]->getName() << endl;

		cout << "[" << skillCount + 1 << "] See Stats" << endl;

		if(currJob->upgradeList().size() > 0){
			cout << "[" << skillCount + 2 << "] Upgrade Job" << endl;
			cout << "[" << skillCount + 3 << "] Cancel" << endl;
		} else 
			cout << "[" << skillCount + 2 << "] Cancel" << endl;

		int choice;
		cout << "Choice: "; cin >> choice;
		cout << endl;

		if(choice >= 1 && choice <= skillCount)
			currJob->skillList()[choice - 1]->useSkill();
		
		if(choice == skillCount + 1)
			currJob->showStats();

		if(choice == skillCount + 2 && currJob->upgradeList().size() > 0)
			upgradeJob();

	}

	void upgradeJob(){
			
		cout << endl;
		cout << "Choose Job:" << endl;
		
		for(int i = 0; i < currJob->upgradeList().size(); i++)
			cout << "[" << i + 1 << "] " << currJob->upgradeList()[i]->getName() << endl;

		int choice;
		cout << "Choice: "; cin >> choice;

		if(choice > currJob->upgradeList().size())
			return;

		this->currJob = currJob->upgradeList()[choice - 1];

		cout << endl;
		cout << "Upgraded to " << currJob->getName() << "!" << endl;
		currJob->initializeUpgrades();
	}

	Job* getCurrJob(){
		return this->currJob;
	}

};

#endif