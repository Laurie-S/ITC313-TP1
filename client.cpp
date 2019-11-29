#include "client.h"
#include <string>

using namespace std;

client::client(int id_, string prenom_, string nom_, int nb_reservation_) : id(id_), nom(nom_), prenom(prenom_), nb_reservation(nb_reservation_){
}																																					// constucteur

int client::getId(){ // recupere l id
	return id;
}

string client::getNom(){
	return nom;
}	

string client::getPrenom(){
	return prenom;
}

int client::getNombreReservation(){
	return nb_reservation;
}

void client::modifClient(int nv_id){ // modifie l'id du client (seule chose qui peut vraiment changer)
	id = nv_id;
}

void client::addReserv(){	// ajoute 1 reservation au client
	nb_reservation++;
}

void client::afficherInfo(){
	cout << "Information Client " << endl << endl;
	cout << "Identifiant : " << id << endl << "Nom : " << nom << endl << "Prenom : " << prenom << endl << "Nombre de Reservations : " << nb_reservation << endl;
	cout << endl << endl; 
}