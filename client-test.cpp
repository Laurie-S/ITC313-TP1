#include "client.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
	client client1(1, "John", "Smith");		// creation d'un client sans reservation
	client client2(2, "Jack", "Smith", 12); // creation d'un client avec 12 reservation
	
	
	cout << "Le client n°" << client1.getId() << " est " << client1.getPrenom() << " " << client1.getNom() << endl;
	cout << "Le client n°" << client2.getId() << " a " << client2.getNombreReservation() << " reservations " << endl;
	
	client2.addReserv();
	
	int nb = client2.getNombreReservation();
	cout << "Le client n°" << client2.getId() << " a maintenant " << nb << " reservations" << endl;
	
	client1.modifClient(9);
	cout << client1.getPrenom() << " " << client1.getNom() << " a change d'id il est maintenant n°" << client1.getId() << endl;
	
	return 0;
}
