#include <iostream>
#include <string>
#include <cstdlib>

#ifndef H_FONCTION
#define H_FONCTION 

int GetNombreAleatoire(int min, int max);
std::string ChoisirMot(std::string mots[], int taille);
std::string initEtoile(std::string motCacher);
char GetCaractere();
bool TestCaractere(char lettre, std::string mot, std::string& motCache);
bool TestGagne(std::string mot, std::string motCache);


#endif