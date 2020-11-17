#include "Menus2033703.h"
#include <iostream>

using namespace std;

int afficherMenu1()
{
	int choixForme;

	cout << "Veuillez choisir une forme :" << endl;
	cout << "1. Rectangle" << endl;
	cout << "2. Triangle" << endl;
	cout << "3. Carré" << endl;
	cout << "4. Losange" << endl;
	cout << "5. Quitter" << endl;
	cout << "Votre Choix-- > ";
	cin >> choixForme;

	return choixForme;
}

int afficherMenu2()
{
	int choixRemplissage;

	cout << "\n1. Forme pleine" << endl;
	cout << "2. Forme vide" << endl;
	cout << "3. Retour au menu précédent" << endl;
	cout << "Votre Choix-- > ";
	cin >> choixRemplissage;

	return choixRemplissage;
}

int validerMenu(int choixForme, int choixRemplissage)
{
	int min = 1;
	int max = choixRemplissage;
	int choixMenu;

	switch (choixForme)
	{
	case 1:
		choixMenu = afficherMenu1();
		break;
	case 2:
		choixMenu = afficherMenu2();
	}

	while (!(choixMenu >= min && choixMenu <= max))
	{
		cout << "Erreur !" << endl;
		system("pause");
		system("cls");

		cin.clear();
		cin.ignore(10000, '\n');

		switch (choixForme)
		{
		case 1:
			choixMenu = afficherMenu1();
			break;
		case 2:
			choixMenu = afficherMenu2();

	}

	return choixMenu;
}
