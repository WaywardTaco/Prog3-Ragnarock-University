
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Job.hpp"

class Player {
private:
	Job* currJob;

public:
	Player();
	
	void doActions();
	void upgradeJob();

	Job getCurrJob();

};

#endif