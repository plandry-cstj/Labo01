// But : Créer un programme qui affiche un message à l'écran en sauvegardant plusieurs versions de ce programme avec git et de l'héberger sur la plateforme GitHub.
// Auteur : Pierre-Olivier Landry
// Date : 2020-09-04

#include <iostream>		// Intègre le coffre à outils pour afficher è l'écran (o out output : sortie)
						// ou pour lire sur le clavier (i in input : entrée)

int main(/*Liste des paramètres séparés par une virgule le cas échéant*/)
{
	// Pour corriger les caractères accentués
	setlocale(LC_ALL, "");
	
	// Test GitHub
	
	// Affichage du message à l'écran
	std::cout << "Bienvenue à tous !";

	return 0;
}
