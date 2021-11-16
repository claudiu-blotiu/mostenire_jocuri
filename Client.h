#include"Produs.h"
class Client:public Produs
{
private:

	int nr_comenzi = 1;
	int total_plata = 1;

public:

	Client()
	{
		cout << "Constr cu 0 parametrii Client" << endl;
	}

	Client(int, int);

	Client(const Client& customer);

	Client(int, int, string, int);

	void set_nr_comenzi(int);
	int get_nr_comenzi();

	void set_total_plata(int);
	int get_total_plata();

	string description_Client();

};

