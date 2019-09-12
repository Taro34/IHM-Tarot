// IHM Tarot.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#using <System.dll>

using namespace std;
using namespace System;

void creaTable()
{
	Console::SetCursorPosition(0, 0); // ligne du haut
	for (int i = 0; i < 80; i++)
	{
		Console::SetCursorPosition(i,0);
		cout << "*";
	}
	for (int i = 0; i < 25; i++) // colonne de gauche
	{
		Console::SetCursorPosition(0, i);
		cout << "*";
	}

	for (int i = 0; i < 80; i++) //ligne du bas 
	{
		Console::SetCursorPosition(i, 25);
		cout << "*";
	}
	for (int i = 0; i <= 25; i++) // colonne de droite 
	{
		Console::SetCursorPosition(80, i);
		cout << "*";
	} 

	//Contour de la table fait 

}

void saisieJoueur()
{

	Console::SetCursorPosition(30, 5);
	cout << "Joueur 1 : ";
	Console::SetCursorPosition(30, 10);
	cout << "Joueur 2 : ";
	Console::SetCursorPosition(30, 15);
	cout << "Joueur 3 : ";
	Console::SetCursorPosition(30, 20);
	cout << "Joueur 4 : ";
	Console::SetCursorPosition(66, 23);
	cout << "Creer partie!";


}

void cleanJoueur()
{
	for (int i = 30; i < 40; i++)
	{
		Console::SetCursorPosition(i,5);
		cout << " ";
	}//effacer ligne joueur 1


	for (int i = 30; i < 40; i++)
	{
		Console::SetCursorPosition(i, 10);
		cout << " ";
	}//effacer ligne joueur 2


	for (int i = 30; i < 40; i++)
	{
		Console::SetCursorPosition(i, 15);
		cout << " ";
	}//effacer ligne joueur 3


	for (int i = 30; i < 40; i++)
	{
		Console::SetCursorPosition(i, 20);
		cout << " ";
	}//effacer ligne joueur 4

	for (int i = 66; i < 79 ; i++)
	{
		Console::SetCursorPosition(i, 23);
		cout << " ";
	}//effacer creer partie
	
	
}

void ecranPrincipal()
{
	Console::SetCursorPosition(1, 1);
	cout << "Joueur 1 ";
	Console::SetCursorPosition(1, 2);
	cout << "Joueur 2 ";
	Console::SetCursorPosition(1, 3);
	cout << "Joueur 3 ";
	Console::SetCursorPosition(1, 4);
	cout << "Joueur 4 ";
	Console::SetCursorPosition(74, 1);
	cout << "PAUSE";
}

void point(int point)
{
	Console::SetCursorPosition(1, 23);
	cout << "Total point : " << point  ;
}

void effacerPoint()
{
	for (int i = 1; i < 18; i++)
	{
		Console::SetCursorPosition(i, 23);
		cout << " ";
	}
}

void annonce(char symbole)
{
	Console::SetCursorPosition(56, 8);
	cout << "Annonce roi :";
	switch (symbole)
	{
	case 't':
		Console::SetCursorPosition(70, 8);
		cout << "trefle";
		break;
	case 'c':
		Console::SetCursorPosition(70, 8);
		cout << "carreau" ;
		break;
	case 'p':
		Console::SetCursorPosition(70, 8);
		cout << "pique" ;
		break;
	case 'k':
		Console::SetCursorPosition(70, 8);
		cout << "coeur";
		break;

	}
}

int main()
{
	creaTable();
	saisieJoueur();
	getchar(); //pause
	cleanJoueur();
	ecranPrincipal();
	getchar();//pauseeee
	point(22);
	// char symbole = 'c'; // test pour la demande roi
	annonce(symbole);
	getchar();
	return(0);

}

