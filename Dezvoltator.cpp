#include "Dezvoltator.h"

Dezvoltator::Dezvoltator(string nume, int buget, string clasa, bool bursa)
{
	cout << "Eu sunt constrcutorul cu patru paramterii al bazei"<<endl;
	this->nume = nume;
	this->buget = buget;
	this->clasa = clasa;
	this->bursa = bursa;
}

Dezvoltator::Dezvoltator(const Dezvoltator& developer)
{
	cout << "Constr de copiere baza" << endl;

	this->nume = developer.nume;
	this->buget = developer.buget;
	this->clasa = developer.clasa;
	this->bursa = developer.bursa;
}

void Dezvoltator::set_nume(string nume)
{
	this->nume = nume;
}
string Dezvoltator::get_nume()
{
	return this->nume;
}

void Dezvoltator::set_buget(int buget)
{
	this->buget = buget;
}
int Dezvoltator::get_buget()
{
	return this->buget;
}

void Dezvoltator::set_clasa(string clasa)
{
	this->clasa = clasa;
}
string Dezvoltator::get_clasa()
{
	return this->clasa;
}

void Dezvoltator::set_bursa(bool bursa)
{
	this->bursa = bursa;
}
bool Dezvoltator::get_bursa()
{
	return this->bursa;
}

string Dezvoltator::description_Dezvoltator()
{
	string text = "";

	text += "nume: " + this->nume + "\n";
	text += "buget: " + to_string(this->buget) + "\n";
	text += "clasa: " + this->clasa + "\n";
	text += "bursa: " + to_string(this->bursa) + "\n";

	return text;
}

string Dezvoltator::to_save()
{
	string text = "";

	text += this->nume + " ";
	text += to_string(this->buget) + " ";
	text += this->clasa + " ";
	text += to_string(this->bursa);

	return text;
}