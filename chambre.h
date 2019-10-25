#ifndef _chambre_h
#define _chambre_h

#include <iostream>
#include <string>

using namespace std;

class chambre {
public:
	chambre(int id_, string type_, int prix_);
	int getId();
	string getType();
	int getPrix();
	void changePrix(int nv_prix);
	void changeType(string nv_Type);
	void changeId(int nv_id);

private:
	int id;
	string type;
	int prix;
};


#endif 
