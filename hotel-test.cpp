#include "chambre.h"
#include "hotel.h"
#include <string>

using namespace std;

int main(void){
	hotel hotel1(1, "bellagio", "Las Vegas", 2);

	hotel1.addChambre(2);

	cout << "l'hotel a " << hotel1.getTaille() << " chambres" << endl;
}