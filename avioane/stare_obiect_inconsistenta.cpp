#include <iostream>
using namespace std;

class Avion
{
private:
	char* _producator;
	char* _model;
	int _vitezaMaxima;
	int _nrLocuri;

public:
	void AfisareInformatii()
	{
		cout << "producator: " << _producator << endl;
		cout << "model: " << _model << endl;
		cout << "viteza maxima: " << _vitezaMaxima << endl;
		cout << "numar locuri: " << _nrLocuri << endl;

	}
};

int main()
{
	Avion unAvion;
	unAvion.AfisareInformatii();
	return 0;
}
