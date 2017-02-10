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
	Avion(char* producator, char* model, int viteza, int nrLocuri)
	{
		int dimProducator=strlen(producator)+1;
		int dimModel=strlen(model)+1;
		_producator=(char*)malloc(dimProducator);
		_model=(char*)malloc(dimModel);
		strcpy_s(_producator,dimProducator,producator);
		strcpy_s(_model,dimModel,model);
		_vitezaMaxima=viteza;
		_nrLocuri=nrLocuri;
	}

	void AfisareInformatii()
	{
		cout << "Producator: " << _producator << endl;
		cout << "Model: " << _model << endl;
		cout << "Viteza maxima: " << _vitezaMaxima << endl;
		cout << "Nr locuri: " << _nrLocuri << endl;
	}

};

int main()
{
	Avion unAvion("Bombardier Inc.","Learjet 40 XR" , 810, 7);
	unAvion.AfisareInformatii();
	getchar();
	return 0;

}