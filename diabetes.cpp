/* @author: Niamh on 13/04/2018.
*          <mccallan-n2@ulster.ac.uk>
*
*  @copyright Niamh McCallan 2018
*
*  @license Distributed under the Boost Software License, Version 1.0.
*  (See accompanying file LICENSE_1_0.txt or copy at
*  https://www.boost.org/LICENSE_1_0.txt)
*/

#include <iostream>
#include "diabetes.h"
#include <string>

using namespace std;

/*class diabetes
{
    string Thirst;
    string Polyurea;
    string Polyphagia;
    string BlurredVision;
    string WeightLoss;
    string RecurrentInfections;
    string Tiredness;
    string Itchiness;
    string SlowHealing;
    string SkinCondition;

};
*/

diabetes::diabetes(string a, string b, string c, string d, string e,string f, string g,string h, string i,string j)
//constructor with parameters
{
    setQ1Thirst(a);
    setQ2Polyurea(b);
    setQ3Polyphagia(c);
    setQ4BlurredVision(d);
    setQ5WeightLoss(e);
    setQ6RecurrentInfections(f);
    setQ7Tiredness(g);
    setQ8Itchiness(h);
    setQ9SlowHealing(i);
    setQ10SkinCondition(j);
}
//set functions
void diabetes::setQ1Thirst(string a) //set question a
{
	Thirst = a;
}
void diabetes::setQ2Polyurea(string b) //set question b
{
	Polyurea = b;
}
void diabetes::setQ3Polyphagia(string c) //set question c
{
	Polyphagia = c;
}
void diabetes::setQ4BlurredVision(string d) //set question d
{
	BlurredVision = d;
}
void diabetes::setQ5WeightLoss(string e) //set question e
{
	WeightLoss = e;
}
void diabetes::setQ6RecurrentInfections(string f) //set question f
{
	RecurrentInfections = f;
}
void diabetes::setQ7Tiredness(string g) //set question g
{
	Tiredness = g;
}
void diabetes::setQ8Itchiness(string h) //set question h
{
	Itchiness = h;
}
void diabetes::setQ9SlowHealing(string i) //set question i
{
	SlowHealing = i;
}
void diabetes::setQ10SkinCondition(string j) //set question j
{
	SkinCondition = j;
}

//get functions
string diabetes::getQ1Thirst() //get month
{
	return Thirst;
}
string diabetes::getQ2Polyurea() //get month
{
	return Polyurea;
}
string diabetes::getQ3Polyphagia() //get month
{
	return Polyphagia;
}
string diabetes::getQ4BlurredVision() //get month
{
	return BlurredVision;
}
string diabetes::getQ5WeightLoss() //get month
{
	return WeightLoss;
}
string diabetes::getQ6RecurrentInfections() //get month
{
	return RecurrentInfections;
}
string diabetes::getQ7Tiredness() //get month
{
	return Tiredness;
}
string diabetes::getQ8Itchiness() //get month
{
	return Itchiness;
}
string diabetes::getQ9SlowHealing() //get month
{
	return SlowHealing;
}
string diabetes::getQ10SkinCondition() //get month
{
	return SkinCondition;
}


//member functions
void diabetes::displayQuestions() //display date in mm/yyyy format
{
	std::cout << Thirst << "\n";
	std::cout << Polyurea << "\n";
	std::cout << Polyphagia << "\n";
	std::cout << BlurredVision << "\n";
	std::cout << WeightLoss << "\n";
	std::cout << RecurrentInfections << "\n";
	std::cout << Tiredness << "\n";
	std::cout << Itchiness << "\n";
	std::cout << SlowHealing << "\n";
	std::cout << SkinCondition;
}
