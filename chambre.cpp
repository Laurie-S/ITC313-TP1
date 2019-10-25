#include "chambre.h"
#include <string>

using namespace std;

chambre::chambre(int id_, string type_, int prix_) : id(id_), type(type_), prix(prix_){
}	

int chambre::getId(){
	return id;
}

string chambre::getType(){
	return type;
}

int chambre::getPrix(){
	return prix;
}

void chambre::changePrix(int nv_prix){
	prix=nv_prix;
}

void chambre::changeType(string nv_Type){
	type=nv_Type;
}

void chambre::changeId(int nv_id){
	id=nv_id;
}
