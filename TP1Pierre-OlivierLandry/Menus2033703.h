#pragma once

int afficherMenu1();	// Fonction qui affiche le menu 1

int afficherMenu2();	// Fonction qui affiche le menu 2


int validerMenu(int choixForme, int choixRemplissage);	// Fonction qui lie le choix de l'utilisateur et v�rifie que le choix est bien parmis les choix offerts dans le menu
										// Informations pass�s en param�tres. Cette fonction retourne le choix valid�. L'utilisateur peut taper n'importe quoi au clavier.
										// Le programme ne part pas en boucle infini.