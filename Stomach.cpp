/**
*The class defines the questions and the variables that are to be used as a diagnosis tool within
*this code.
*
*@author Laura Goudy <goudy-l@ulster.ac.uk>
*@license Distributed under the Boost Software License, Version 1.0.
* (See accompanying file LICENSE_1_0.txt or copy at
*         https://www.boost.org/LICENSE_1_0.txt)
*@copyright Laura Goudy 2018
*
*Within this code the patient user will be asked multiple questions to help direct the programme to 
*diagnose the condition as accurately as posible.
*
*@param 
*@return 
*/
#include <iostream>
#include "Stomach.h"
#include <string>

using namespace std;

int main(void);

int main(void)
{
	//Defining all of the variables a name before using in the code.

	char AbPain;
	char Diarrhea;
	char Vomit;
	char Appetite;
	char Fever;
	char Fatigue;
	char Nausea;
	char Headaches;
	char Joint;
	char Sweat;
	char Weight;
	char Bloat;
	char Poo;
	char Indigestion;
	char Urine;
	char Stool;
	char Jaundice; 

	//Simple statement to the user to define the correct keys to use for answering

	cout << "Please anser these following questions with a Y, meaning yes, or N, meaning no." << endl;

	//All questions that link to checkpoints on the excel sheet of symptoms and diseases

	cout << "Have you experianced abdominal pain? ";
	cin >> AbPain;

	cout << "Have you experianced Diarrhea? ";
	cin >> Diarrhea;

	cout << "Have you experianced vomiting? ";
	cin >> Vomit;

	cout << "Have you had a loss of appetite? ";
	cin >> Appetite;

	cout << "Have you had a fever? ";
	cin >> Fever;

	cout << "Have you experianced weakness or fatigue ";
	cin >> Fatigue;

	cout << "Have you been feeling nauseous? ";
	cin >> Nausea;

	cout << "Have you been having more headaches than normal? ";
	cin >> Headaches;

	cout << "Have you been experiancing joint pain? ";
	cin >> Joint;

	cout << "Have you been sweating without cause for sweating? ";
	cin >> Sweat;

	cout << "Have you been losing weight without explanation? ";
	cin >> Weight;

	cout << "Have you felt bloated? ";
	cin >> Bloat;

	cout << "Have you been constipated? ";
	cin >> Poo;

	cout << "Have you had indigestion? ";
	cin >> Indigestion;

	cout << "Has your urine been dark or discoloured? ";
	cin >> Urine;

	cout << "Has your stool contained blood? ";
	cin >> Stool;

	cout << "Have you noticed yellowing of skin or eyes that could be Jaundice? ";
	cin >> Jaundice;

	//Below begin the string of if statements that will link the suspected illness to the patient by comparing the symptoms they have to the ones collectively linked to the diesease.
	//Initially the programme was run with no N parameters, as it was thought that the lack of a symptom would not 
	//mean the lack of the illness.
	//This proved problematic so more defined symptoms were put in place to make a more specific diagnosis tool.


	if (AbPain == 'Y' && Diarrhea == 'Y' && Vomit == 'Y' && Appetite == 'Y' && Fever == 'Y' && Fatigue == 'Y' && Nausea == 'Y' && Headaches == 'Y' && Joint == 'N' && Sweat == 'N' && Weight == 'N' && Bloat == 'N' && Poo == 'N' && Indigestion == 'N' && Urine == 'N' && Stool == 'N' && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of food poisoning. You should seek medical attention!" << endl;
	}
	
	if (AbPain == 'Y' && Diarrhea == 'Y' && Vomit == 'Y' && Appetite == 'Y' && Fever == 'Y' && Fatigue == 'Y' && Nausea == 'Y' && Headaches == 'Y' && Joint == 'Y' && Sweat == 'Y' && Weight == 'Y' && Bloat == 'N' && Poo == 'N' && Indigestion == 'N' && Urine == 'N' && Stool == 'N' && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of Gastroenteritis. You should seek medical attention!" << endl;
	}

	if (AbPain == 'Y' && Diarrhea == 'Y' && Vomit == 'N' && Appetite == 'N' && Fever == 'N' && Fatigue == 'N' && Nausea == 'N' && Headaches == 'N' && Joint == 'N' && Sweat == 'N' && Weight == 'N' && Bloat == 'Y' && Poo == 'Y' && Indigestion == 'N' && Urine == 'N' && Stool == 'N' && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of IBS. You should seek medical attention!" << endl;
	}

	if (AbPain == 'Y' && Diarrhea == 'Y' && Vomit == 'Y' && Appetite == 'Y' && Fever == 'Y' && Fatigue == 'N' && Nausea == 'Y' && Headaches == 'N' && Joint == 'N' && Sweat == 'N' && Weight == 'N' && Bloat == 'Y' && Poo == 'N' && Indigestion == 'N' && Urine == 'N' && Stool == 'N' && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of Appendicitus. You should seek medical attention!" << endl;
	}

	if (AbPain == 'Y' && Diarrhea == 'Y' && Vomit == 'Y' && Appetite == 'N' && Fever == 'N' && Fatigue == 'N' && Nausea == 'Y' && Headaches == 'N' && Joint == 'N' && Sweat == 'N' && Weight == 'N' && Bloat == 'N' && Poo == 'N' && Indigestion == 'Y' && Urine == 'Y' && Stool == 'N' && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of Gallstones. You should seek medical attention!" << endl;
	}

	if (AbPain == 'Y' && Diarrhea == 'N' && Vomit == 'Y' && Appetite == 'Y' && Fever == 'N' && Fatigue == 'N' && Nausea == 'Y' && Headaches == 'N' && Joint == 'Y' && Sweat == 'N' && Weight == 'Y' && Bloat == 'N' && Poo == 'N' && Indigestion == 'Y' && Urine == 'Y' && Stool == 'Y' && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of a Peptic ulcer. You should seek medical attention!" << endl;
	}

	if (AbPain == 'Y' && Diarrhea == 'Y' && Vomit == 'Y' && Appetite == 'Y' && Fever == 'N' && Fatigue == 'N' && Nausea == 'Y' && Headaches == 'Y' && Joint == 'N' && Sweat == 'N' && Weight == 'Y' && Bloat == 'Y' && Poo == 'N' && Indigestion == 'N' && Urine == 'N' && Stool == 'N' && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of Giardiasis. You should seek medical attention!" << endl;
	}

	if (AbPain == 'Y' && Diarrhea == 'Y' && Vomit == 'Y' && Appetite == 'N' && Fever == 'Y' && Fatigue == 'N' && Nausea == 'Y' && Headaches == 'N' && Joint == 'N' && Sweat == 'Y' && Weight == 'N' && Bloat == 'Y' && Poo == 'N' && Indigestion == 'N' && Urine == 'N' && Stool == 'N' && Jaundice == 'Y')
	{
		cout << "Oh dear, you are showing symptoms of Pancreatitis. You should seek medical attention!" << endl;
	}

	if (AbPain == 'Y' && Diarrhea == 'N' && Vomit == 'Y' && Appetite == 'Y' && Fever == 'N' && Fatigue == 'N' && Nausea == 'Y' && Headaches == 'N' && Joint == 'N' && Sweat == 'N' && Weight == 'Y' && Bloat == 'N' && Poo == 'N' && Indigestion == 'Y' && Urine == 'N' && Stool == 'Y'  && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of a Stomach ulcer. You should seek medical attention!" << endl;
	}

	if (AbPain == 'Y' && Diarrhea == 'Y' && Vomit == 'N' && Appetite == 'N' && Fever == 'Y' && Fatigue == 'Y' && Nausea == 'N' && Headaches == 'N' && Joint == 'N' && Sweat == 'N' && Weight == 'Y' && Bloat == 'N' && Poo == 'N' && Indigestion == 'N' && Urine == 'N' && Stool == 'Y' && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of Crohns Disease. You should seek medical attention!" << endl;
	}

	if (AbPain == 'Y' && Diarrhea == 'Y' && Vomit == 'Y' && Appetite == 'N' && Fever == 'Y' && Fatigue == 'N' && Nausea == 'N' && Headaches == 'N' && Joint == 'N' && Sweat == 'N' && Weight == 'Y' && Bloat == 'Y' && Poo == 'N' && Indigestion == 'N' && Urine == 'N' && Stool == 'Y' && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of Colitis. You should seek medical attention!" << endl;
	}

	if (AbPain == 'Y' && Diarrhea == 'N' && Vomit == 'Y' && Appetite == 'N' && Fever == 'Y' && Fatigue == 'N' && Nausea == 'Y' && Headaches == 'N' && Joint == 'N' && Sweat == 'N' && Weight == 'N' && Bloat == 'N' && Poo == 'N' && Indigestion == 'N' && Urine == 'Y' && Stool == 'N' && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of Kidney stones. You should seek medical attention!" << endl;
	}

	if (AbPain == 'Y' && Diarrhea == 'Y' && Vomit == 'Y' && Appetite == 'N' && Fever == 'N' && Fatigue == 'N' && Nausea == 'N' && Headaches == 'N' && Joint == 'N' && Sweat == 'N' && Weight == 'Y' && Bloat == 'Y' && Poo == 'Y' && Indigestion == 'N' && Urine == 'N' && Stool == 'N' && Jaundice == 'N')
	{
		cout << "Oh dear, you are showing symptoms of Celiac disease. You should seek medical attention!" << endl;
	}

	else
	{
		cout << "You are not showing any sysmptoms specific to any of the main diseases or problems in this data base related to abdominal pain." << endl;
			cout << "Please consult a medical professional for a more accuarte diagnosis." << endl;
	}
	
	system("PAUSE");
return(0);
}
//(AbPain == 'Y' && Diarrhea && Vomit && Appetite && Fever && Fatigue && Nausea && Headaches && Joint && Sweat && Weight && Bloat && Poo && Indigestion && Urine && Stool && Jaundice)
