#include <iostream>
#include "diabetes.h"
#include <string>

using namespace std;

void diabetesproblems()
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


	diabetes bproblems;//create date object

	std::cout << "Q1: Have you been feeling abnormally thirsty?" << endl;
	std::getline(std::cin, Thirst);

	std::cout << "Q2: Have you been urinating more often than normal, particularly at night?" << endl;
	std::getline(std::cin, Polyurea);

	std::cout << "Q3: Do you often feel hungry, particularly if you feel hungry shortly after eating? " << endl;
	std::getline(std::cin, Polyphagia);

	std::cout << "Q4: Have you been experiencing episodes of blurred vision? " << endl;
	std::getline(std::cin, BlurredVision);

	std::cout << "Q5: Have you recently experienced sudden weight loss or loss of muscle mass? " << endl;
	std::getline(std::cin, WeightLoss);

	std::cout << "Q6: Have you been experiencing recurrent infections recently? " << endl;
	std::getline(std::cin, RecurrentInfections);

	std::cout << "Q7: Have you been feeling tired during the day, particularly after meals? " << endl;
	std::getline(std::cin, Tiredness);

    std::cout << "Q8: Have you been experiencing any itching of skin, particularly around genitals? " << endl;
	std::getline(std::cin, Itchiness);

	std::cout << "Q9: Have you been experiencing slow healing of any wounds or cuts? " << endl;
	std::getline(std::cin, SlowHealing);

    std::cout << "Q10: Have you developed any skin conditions i.e psoriasis or acanthosis nigricans?" << endl;
	std::getline(std::cin, SkinCondition);

	bproblems.setQ1Thirst(Thirst);
	bproblems.setQ2Polyurea(Polyurea);
	bproblems.setQ3Polyphagia(Polyphagia);
	bproblems.setQ4BlurredVision(BlurredVision);
	bproblems.setQ5WeightLoss(WeightLoss);
	bproblems.setQ6RecurrentInfections(RecurrentInfections);
	bproblems.setQ7Tiredness(Tiredness);
	bproblems.setQ8Itchiness(Itchiness);
	bproblems.setQ9SlowHealing(SlowHealing);
	bproblems.setQ10SkinCondition(SkinCondition);
	bproblems.displayQuestions();




}

int main()
{

	//GeneralQuestions();
	diabetesproblems();



}

