#include "Game_Classes.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	Minerva north, south, east, west;

	north.setSetting("Volcano");
	north.setItem("Uranium");

	south.setSetting("Liquid Streams");
	south.setItem("Hydrazine");

	east.setSetting("Cave");
	east.setItem("Copper");

	west.setSetting("Clusters of Rock");
	west.setItem("Fluorine");

	string Starting_Items[8] = { "Pickaxe","Drill","Bucket","Flask","Knife","Gun","Flashlight","Lantern" };

	mainMenu();

	cout << "While looking through the wreckage of the Demeter, you found out that the exploration dispensery was damaged, but still operational." << endl
		<< "When you selected the tools needed, the dispensery can only operate to an extent that it can only dispense one item of each catagory." << endl
		<< "for exploration, the catagories are:" << endl << endl <<  "Excavation" << endl << "Liquid contaiment" << endl <<"Weaponry" << endl << "Illumination" << endl << endl
		<< "In the feild of Excavation, would you prefer:" << endl << "Pickaxe" << endl << "or" << endl << "Drill" << endl;


	system("pause");
	return 0;
}