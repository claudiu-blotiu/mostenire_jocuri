#include "Client.h"
Client::Client(int nr_comenzi, int total_plata):Produs("2020",15000)
{
	cout << "Constr cu 3 parametrii Client" << endl;

	this->nr_comenzi = nr_comenzi;
	this->total_plata = total_plata;
}

Client::Client(const Client& customer) :Produs(customer)
{
	cout << "Constr de copiere Client" << endl;

	this->nr_comenzi = customer.nr_comenzi;
	this->total_plata = customer.total_plata;
}

Client::Client(int nr_comenzi, int total_plata, string release_date, int price) :Produs(release_date, price)
{
	cout << "Constr cu 6 parametrii Client" << endl;

	this->nr_comenzi = nr_comenzi;
	this->total_plata = total_plata;
}

void Client::set_nr_comenzi(int nr_comenzi)
{
	this->nr_comenzi = nr_comenzi;
}
int Client::get_nr_comenzi()
{
	return this->nr_comenzi;
}

void Client::set_total_plata(int buget)
{
	this->total_plata = total_plata;
}
int Client::get_total_plata()
{
	return this->total_plata;
}

string Client::description_Client()
{
	string text = "";

	text += "nr_comenzi: " + to_string(this->nr_comenzi) + "\n";
	text += "total_plata: " + to_string(this->total_plata) + "\n";

	return text;
}