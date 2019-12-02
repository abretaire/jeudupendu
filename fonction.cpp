#include "fonction.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int GetNombreAleatoire(int min, int max)
{
	int nbAleatoire = 0;
	srand(time(NULL));
	nbAleatoire = (rand() % (max + min + 1)) + min;

	return nbAleatoire;
}

string ChoisirMot(string mots[], int taille)
{
	int nb_rand_list = GetNombreAleatoire(0, taille - 1);
	string motAleatoire = mots[nb_rand_list];

	//cout << motAleatoire;
	return motAleatoire;
}

char GetCaractere()
{
	char lettre;
	cout << "Proposez une lettre :" << endl;
	cin >> lettre;

	return lettre;
}

string initEtoile(string mot)
{
	int taille = mot.length();
	for (int i = 0; i < taille; i++)
	{
		mot[i] = '*';
	}
	//cout << mot << endl;
	return mot;
}

bool TestCaractere(char lettre, string mot, string& motCache)
{
	int taille = motCache.length();
	bool result = false;

	for (int i = 0; i < taille; i++)
	{
		//cout << lettre << mot[i] << endl;
		if (lettre == mot[i])
		{
			motCache[i] = lettre;
			result = true;
		}

	}
	return result;
}

bool TestGagne(string mot, string motCache)
{
	return mot == motCache;
}