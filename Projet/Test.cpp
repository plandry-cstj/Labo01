// But : Cr�er un programme qui affiche un message � l'�cran en sauvegardant plusieurs versions de ce programme avec git et de l'h�berger sur la plateforme GitHub.
// Auteur : Pierre-Olivier Landry
// Date : 2020-09-04

#include <iostream>		// Int�gre le coffre � outils pour afficher � l'�cran (o out output : sortie)
						// ou pour lire sur le clavier (i in input : entr�e)

int main(/*Liste des param�tres s�par�s par une virgule le cas �ch�ant*/)
{
	// Pour corriger les caract�res accentu�s
	setlocale(LC_ALL, "");

	// Affichage du message � l'�cran
	std::cout << "Bienvenue � tous !";

	return 0;
}