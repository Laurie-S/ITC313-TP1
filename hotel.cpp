#include "chambre.h"
#include "hotel.h"
#include <string>
#include <vector>

using namespace std;

hotel::hotel(int id_ , string nom_, string ville_, int taille){
	id=id_;
	nom=nom_;
	ville=ville_;

	for(int i=0; i<taille; i++){
		string type;
		int prix;

		cout << "Quel type de chambre est la " << i+1 << "eme chambre ?" ;
		cin >> type;
		cout << "Combien coute t'elle ?" ;
		cin >> prix;

		chambre chambre1 (i, type, prix);

		Liste_Chambre.push_back(chambre1);
	}
}

void hotel::addChambreUser(int nombre){
	int taille = Liste_Chambre.size();
	for(int i=1; i<=nombre; i++){
		string type;
		int prix;

		cout << "Quel type de chambre est la " << i << "eme chambre a ajouter ?" ;
		cin >> type;
		cout << "Combien coute t'elle ?" ;
		cin >> prix;

		chambre chambre1 (taille+i, type, prix);
		Liste_Chambre.push_back(chambre1);

	}
}

void hotel::addChambre(string type, int prix){
	int taille = Liste_Chambre.size();


	chambre chambre1 (taille+1, type, prix);
	Liste_Chambre.push_back(chambre1);

}


chambre hotel::getChambre(int nbr){
	return Liste_Chambre.at(nbr);
}

int hotel::getId(){
	return id;
}

string hotel::getNom(){
	return nom;
}

string hotel::getVille(){
	return ville;
}

int hotel::getTaille(){
	return Liste_Chambre.size();
}