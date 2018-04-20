#ifndef STOMACH_H
#define STOMACH_H

/** 
*This class has a purpose of using the information it has been given to try accurately diagnose abdominal pain
*
*@author Laura Goudy <goudy-l@ulster.ac.uk>
*@license Distributed under the Boost Software License, Version 1.0.
* (See accompanying file LICENSE_1_0.txt or copy at
*         https://www.boost.org/LICENSE_1_0.txt)
*@copyright Laura Goudy 2018
*
*/

#include <iostream>
#include <string>
using namespace std;

class Stomach
{
public:

	//constructor with default values for if there is no answer provided
	Stomach(string = "Not answered", string = "Not answered", string = "Not answered", string = "Not answered", string = "Not answered", string = "Not answered", string = "Not answered");

	//setting the functions for the class

	void setQAbPain(std::string); //set question for abdominal pain
	void setQDiarrhea(std::string); //set question for diarrhea
	void setQVomit(std::string); //set question for vomitting
	void setQAppetite(std::string); //set question for loss of apetite
	void setQFever(std::string); //set question for fever
	void setQFatigue(std::string); //set question for weakness and/or fatigue
	void setQNausea(std::string); //set question for nausea
	void setQHeadaches(std::string); //set question for headaches
	void setQJoint(std::string); //set question for joint pain 
	void setQSweat(std::string); //set question for sweating
	void setQWeight(std::string); //set question for weightloss
	void setQBloat(std::string); //set question for bloating
	void setQPoo(std::string); //set question for constipation
	void setQIndigestion(std::string); //set question for indigestion
	void setQUrine(std::string); //set question for dark urine
	void setQStool(std::string); //set question for bloody stool
	void setQJaundice(std::string); //set question for jaundice symptoms


	//getting the functions for the class
	

	string getQAbPain(std::string); //get question for abdominal pain
	string getQDiarrhea(std::string); //get question for diarrhea
	string getQVomit(std::string); //get question for vomitting
	string getQAppetite(std::string); //get question for loss of apetite
	string getQFever(std::string); //get question for fever
	string getQFatigue(std::string); //get question for weakness and/or fatigue
	string getQNausea(std::string); //get question for nausea
	string getQHeadaches(std::string); //get question for headaches
	string getQJoint(std::string); //get question for joint pain 
	string getQSweat(std::string); //get question for sweating
	string getQWeight(std::string); //get question for weightloss
	string getQBloat(std::string); //get question for bloating
	string getQPoo(std::string); //get question for constipation
	string getQIndigestion(std::string); //get question for indigestion
	string getQUrine(std::string); //get question for dark urine
	string getQStool(std::string); //get question for bloody stool
	string getQJaundice(std::string); //get question for jaundice symptoms

	//member functions

	void displayQuestions();//display questions

private:

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


};

#endif
