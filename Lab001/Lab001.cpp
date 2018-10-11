// Lab001.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cmath>



using namespace std;

int main()
{
	bool bEndGame = false;
	do
	{
		srand(time(NULL));
		int iRandomNumber = rand() % 1000 + 1;
		int iChosenNumber;
		int iChances = 8;
		int iInput;
		char cInput;


		do
		{
			cout << "Chances left: " << iChances << endl;
			cout << "Please choose a number:" << endl;
			cin >> iInput;
			if (iInput == iRandomNumber)
			{
				break;
			}
			if (iInput < iRandomNumber)
			{
				cout << "Higher" << endl;
			}
			else
			{
				cout << "Lower" << endl;
			}

			iChances--;

		} while (iChances != 0);
		if (iInput == iRandomNumber)
		{
			cout << "Well Done! You have successfully guessed the number. Press 'R' to try again or press any key to close."<<endl;
		}
		else
		{
			cout << "You lose! Press 'R' to try again or press any key to close." << endl;
		}

		cin >> cInput;
		if (cInput == 'r' || cInput == 'R')
		{
			system("cls");
			bEndGame = false;
		}
		else 
		{
			bEndGame = true;
		}

	} while (!bEndGame);

}

