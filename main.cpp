#include "hotel.h"
#include "chambre.h"
#include <iostream>

using namespace std;

int main(){
	hotel hotel1(1, "le Bellagio", "Las Vegas");

	for(int i=0; i<3; i++){ // creation des 3 chambres single
		hotel1.addChambre("single", 100);
	}

	for(int i=0; i<5; i++){ // creation des 5 chambres Double
		hotel1.addChambre("Double", 125);
	}
	for(int i=0; i<2; i++){ // creation des 2 suites
		hotel1.addChambre("Suite", 210);
	}

	hotel1.affichage();
	hotel1.affichageChambre();

}