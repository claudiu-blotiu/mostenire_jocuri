#include<iostream>
#include<string>
using namespace std;

class Dezvoltator
{
private:

	string nume = "";
	int buget = 1;
	string clasa = "";
	bool bursa = false;

public:

	Dezvoltator()
	{
		cout << "Eu sunt constructorul fara parametrii al bazei"<<endl;
	}

	Dezvoltator(string, int, string, bool);

	Dezvoltator(const Dezvoltator& developer);

	void set_nume(string);
	string get_nume();

	void set_buget(int);
	int get_buget();

	void set_clasa(string);
	string get_clasa();

	void set_bursa(bool);
	bool get_bursa();

	string description_Dezvoltator();

	string to_save();

	












};

