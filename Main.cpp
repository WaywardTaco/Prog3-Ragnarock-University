
#include <iostream>
#include <string>
#include <vector>

#include "Inclusions.hpp"

using namespace std;

int main() {
	
	Player player = Player();
	bool useSkill = false;
	
	do{
		cout << endl;
		
		player.doActions();

		cout << endl;

		char choice;
		cout << "Use Skill [Y/N]: "; cin >> choice;

		if(choice == 'Y' || choice == 'y')
			useSkill = true;
		else
			useSkill = false;

	} while (useSkill);
	
	cout << endl;

	cout << "\"Exiting Program\"" << endl;

	return 0;
}