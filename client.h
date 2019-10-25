#ifndef _client_h
#define _client_h

#include <iostream>
#include <string>

using namespace std;

class client {
public:
	client(int id_, string prenom_, string nom_, int nb_reservation_ = 0);
	int getId();
	string getNom();
	string getPrenom();
	int getNombreReservation();
	void modifClient(int nv_id);
	void addReserv();

private:
	int id;
	string nom;
	string prenom;
	int nb_reservation;
};


#endif 
