#ifndef _hotel_h
#define _hotel_h

#include <iostream>
#include <string>
#include <vector>
#include "chambre.h"

using namespace std;

class hotel {

	public :
	hotel(int id_ , string nom_, string ville_, int taille=0);
	void addChambreUser(int nombre=1);
	void addChambre(string type, int prix);
	chambre getChambre(int nbr);
	int getId();
	string getNom();
	string getVille();
	int getTaille();

	private :
	int id;
	string nom;
	string ville;
	vector<chambre> Liste_Chambre;
};


#endif 
