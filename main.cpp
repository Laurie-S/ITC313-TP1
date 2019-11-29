#include "hotel.h"
#include "chambre.h"
#include "client.h"
#include <iostream>
#include <vector>

using namespace std;

client CreerClient(int id, string prenom, string nom, int nb=0){
	client client1(id, prenom, nom, nb);
	return client1;
}

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

	vector<client> Liste_client;

	//client client1(1, "John", "Wick", 8);
	Liste_client.push_back(CreerClient(1, "John", "Wick", 8));
	Liste_client.push_back(CreerClient(2, "Danny", "Ocean", 2));
	Liste_client.push_back(CreerClient(3, "Rusty", "Ryan", 5));
	Liste_client.push_back(CreerClient(4, "Linus", "Caldwell", 18));
	Liste_client.push_back(CreerClient(5, "Basher", "Tarr"));
	Liste_client.push_back(CreerClient(6, "Reuben", "Tishkoff", 15));
	Liste_client.push_back(CreerClient(7, "Saul", "Bloom", 2));
	Liste_client.push_back(CreerClient(8, "Virgil", "Malloy"));
	Liste_client.push_back(CreerClient(9, "Turk", "Malloy"));
	Liste_client.push_back(CreerClient(10, "Tess", "Ocean"));	
	
	client client1 = Liste_client.at(1); 
	client1.afficherInfo();
}