#include"Platforma.h"
class Produs :public Dezvoltator
{
private:

	string release_date = "";
	int price = 1;

public:

	Produs()
	{
		cout << "Constr cu 0 parametrii Proiect" << endl;
	}

	Produs(string, int);

	Produs(const Produs& product);

	Produs(string, int, string, int, string, bool); // Constructor de initializare

	void set_release_date(string);
	string get_release_date();

	void set_price(int);
	int get_price();

	string description_Produs();
	

};

