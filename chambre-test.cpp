#include "chambre.h"
#include <string>

using namespace std;

int main(void){
	chambre chambre1(100, "Single", 200);
	
	cout << "la chambre est au numero " << chambre1.getId() << " c'est une " << chambre1.getType() << " qui coute " << chambre1.getPrix() << " $" << endl;
	
	chambre1.changePrix(3000);
	chambre1.changeType("Suite");
	chambre1.changeId(101);
	
	cout << "Apres changement " << endl;
	cout << "la chambre est au numero " << chambre1.getId() << " c'est une " << chambre1.getType() << " qui coute " << chambre1.getPrix() << "$" << endl;
	
	return 0;
	
}
	

