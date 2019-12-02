#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include "fonction.h"

using namespace std;


int main()
{
	int const taille = 20;
	string mots[] =
	{
		"un",
		"deux",
		"cinq",
		"rouge",
		"membre",
		"conseil",
		"donner",
		"reponse",
		"etat",
		"son",
		"armement",
		"peu",
		"apres",
		"vacances"
		"annonce",
		"mercredi",
		"evident",
		"regime",
		"affirmer",
		"arme"
	};


	int nbCoup;
	string mot;
	string motEtoile;
	string rejouer;
	char lettreDecouverte;

	cout << "====> JEU DU PENDU <====" << endl;

	do {
		nbCoup = 10;
		mot = ChoisirMot(mots, taille);
		motEtoile = initEtoile(mot);


		while (nbCoup > 0 && !TestGagne(mot, motEtoile)) {

			cout << "Il vous reste " << nbCoup << " coups :)" << endl;
			cout << "le mot secret est " << motEtoile << endl;
			lettreDecouverte = GetCaractere();
			bool reussi = false;
			reussi = TestCaractere(lettreDecouverte, mot, motEtoile);
			//cout << reussi << endl;
			if (reussi == false)
			{
				nbCoup = nbCoup - 1;
			}

			if (TestGagne(mot, motEtoile))
			{
				cout << "Bravo vous avez gagne" << endl;
			}
			if (nbCoup == 0 && !TestGagne(mot, motEtoile))
			{
				cout << "Vous avez perdu :(" << endl;
			}
		}


		cout << "Voulez vous rejouer ? Y/N" << endl;
		cin >> rejouer;

	} while (rejouer == "Y" || rejouer == "y");
	system("pause");

	return 0;
}