#include"Dezvoltator.h"

class Platforma :public Dezvoltator
{
private:
	
	string categorie = "";
	string generatie = "";

public:

	Platforma()
	{
		cout << "Constr cu 0 parametrii Platforma" << endl;
	}

	Platforma(string,string);
	
	Platforma(const Platforma& platform);

	Platforma(string, string, string, int, string, bool);

	void set_categorie(string);
	string get_categorie();

	void set_generatie(string);
	string get_generatie();

	string description_Platforma();



};

