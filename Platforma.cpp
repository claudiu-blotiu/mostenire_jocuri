#include "Platforma.h"

Platforma::Platforma(string categorie, string generatie) :Dezvoltator("Ubisoft",24,"Quebec",0) //apleaza Constructorul"Persoana"cu parametrii
{
	cout << "Constr cu 3 parametrii Platforma" << endl;
	this->categorie = categorie;
	this->generatie = generatie;
	
}

Platforma::Platforma(const Platforma& platform):Dezvoltator(platform)
{
	cout << "Constr copiere Platforma" << endl;

	this->categorie = platform.categorie;
	this->generatie = platform.generatie;
}

Platforma::Platforma(string categorie, string generatie, string nume, int buget,string clasa,bool bursa) :Dezvoltator(nume, buget, clasa,bursa)
{
	cout << "Constr cu 6 parametrii Platforma" << endl;

	this->categorie = categorie;
	this->generatie = generatie;
}

void Platforma::set_categorie(string categorie)
{
	this->categorie = categorie;
}
string Platforma::get_categorie()
{
	return this->categorie;
}

void Platforma::set_generatie(string tara)
{
	this->generatie = generatie;
}
string Platforma::get_generatie()
{
	return this->generatie;
}

string Platforma::description_Platforma()
{
	string text = "";

	text += "categorie: " + this->categorie + "\n";
	text += "generatie " + this->generatie + "\n";

	return text;
}