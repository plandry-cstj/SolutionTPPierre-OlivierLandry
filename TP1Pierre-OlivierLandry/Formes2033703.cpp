#include "Formes2033703.h"
#include <iostream>

using namespace std;

int traiterRectangle(int choixRemplissage)
{
    if (choixRemplissage != 0)
    {
        int largeur;
        int hauteur;

        cout << "Veuillez entrer une largeur : ";
        cin >> largeur;
        cout << "Veuillez entrer une hauteur : ";
        cin >> hauteur;

        dessinerRectangle(choixRemplissage);
    }

    return 0;
}

int traiterTriangle(int choixRemplissage)
{
    if (choixRemplissage != 0)
    {
        int hauteur;

        cout << "Veuillez entrer une hauteur : ";
        cin >> hauteur;

        dessinerTriangle(choixRemplissage);
    }

    return 0;
}

int traiterCarre(int choixRemplissage)
{
    if (choixRemplissage != 0)
    {
        int largeur;
        int hauteur;

        cout << "Veuillez entrer une largeur : ";
        cin >> largeur;
        cout << "Veuillez entrer une hauteur : ";
        cin >> hauteur;

        dessinerCarre(choixRemplissage);
    }

    return 0;
}

int traiterLosange(int choixRemplissage)
{
    if (choixRemplissage != 0)
    {
        int hauteur;

        cout << "Veuillez entrer une hauteur : ";
        cin >> hauteur;

        dessinerLosange(choixRemplissage);
    }

    return 0;
}


int dessinerRectangle(int choixRemplissage)
{
    if (choixRemplissage == 1)
    {
        cout << "Rectangle plein" << endl;
        system("pause");
        system("cls");
    }
    else if (choixRemplissage == 2)
    {
        cout << "Rectangle vide" << endl;
        system("pause");
        system("cls");
    }

    return 0;
}

int dessinerTriangle(int choixRemplissage)
{
    if (choixRemplissage == 1)
    {
        cout << "Triangle plein" << endl;
        system("pause");
        system("cls");
    }
    else if (choixRemplissage == 2)
    {
        cout << "Triangle vide" << endl;
        system("pause");
        system("cls");
    }

    return 0;
}

int dessinerCarre(int choixRemplissage)
{
    if (choixRemplissage == 1)
    {
        cout << "Carré plein" << endl;
        system("pause");
        system("cls");
    }
    else if (choixRemplissage == 2)
    {
        cout << "Carré vide" << endl;
        system("pause");
        system("cls");
    }

    return 0;
}

int dessinerLosange(int choixRemplissage)
{
    if (choixRemplissage == 1)
    {
        cout << "Losange plein" << endl;
        system("pause");
        system("cls");
    }
    else if (choixRemplissage == 2)
    {
        cout << "Losange vide" << endl;
        system("pause");
        system("cls");
    }

    return 0;
}