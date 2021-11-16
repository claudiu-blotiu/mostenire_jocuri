#include "Produs.h"

Produs::Produs(string release_date, int price):Dezvoltator("Blizzard",25,"Chicago",1)
{
	cout << "Constr cu 3 parametrii Produs" << endl;
	this->release_date = release_date;
	this->price = price;
}

Produs::Produs(const Produs& product) :Dezvoltator(product)
{
	cout << "Constr de copiere Produs" << endl;
	this->release_date = product.release_date;
	this->price = product.price;
}

Produs::Produs(string release_date, int price, string nume, int buget, string clasa, bool bursa) : Dezvoltator(nume, buget, clasa, bursa)
{
	cout << "Constr cu 7 parametrii Produs" << endl;

	this->release_date = release_date;
	this->price = price;
}


void Produs::set_release_date(string release_date)
{
	this->release_date = release_date;
}
string Produs::get_release_date()
{
	return this->release_date;
}

void Produs::set_price(int price)
{
	this->price = price;
}
int Produs::get_price()
{
	return this->price;
}


string Produs::description_Produs()
{
	string text = "";

	text += "release_date: " + this->release_date + "\n";
	text += "price: " + to_string(this->price) + "\n";
	
	return text;
}


