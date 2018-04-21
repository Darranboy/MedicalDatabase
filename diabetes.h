/* @author: Niamh on 13/04/2018.
*           <mccallan-n2@ulster.ac.uk>
*
*  @copyright Niamh McCallan 2018
*
*  @license Distributed under the Boost Software License, Version 1.0.
*   (See accompanying file LICENSE_1_0.txt or copy at
*   https://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef DIABETES_H
#define DIABETES_H
#include <string>

using namespace std;

class diabetes
{
public:

    // Constructor with default values
    diabetes(string = "Not answered", string = "Not answered", string = "Not answered", string = "Not answered",
             string = "Not answered",string = "Not answered", string = "Not answered",string = "Not answered",
             string = "Not answered",string = "Not answered");   //setting functions for questions

   // set functions
    void setQ1Thirst(std::string);
    void setQ2Polyurea(std::string);
    void setQ3Polyphagia(std::string);
    void setQ4BlurredVision(std::string);
    void setQ5WeightLoss(std::string);
    void setQ6RecurrentInfections(std::string);
    void setQ7Tiredness(std::string);
    void setQ8Itchiness(std::string);
    void setQ9SlowHealing(std::string);
    void setQ10SkinCondition(std::string);

    //getting functions for questions
    string getQ1Thirst();
    string getQ2Polyurea();
    string getQ3Polyphagia();
    string getQ4BlurredVision();
    string getQ5WeightLoss();
    string getQ6RecurrentInfections();
    string getQ7Tiredness();
    string getQ8Itchiness();
    string getQ9SlowHealing();
    string getQ10SkinCondition();

    // member functions

				   //member functions
	void displayQuestions();//display questions

private:
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

#endif //DIABETES_H
