//
// Created by Niamh on 13/04/2018.
//

#ifndef COURSEWORK_INFORMATION_DIABETES_H
#define COURSEWORK_INFORMATION_DIABETES_H
#include <string>

using namespace std;

class diabetes
{
public:
    diabetes(string, string ,string ,string ,string , string);

    //setting functions for questions
    void setThirst(string);
    void setPolyrea(string);
    void getBlurredVision(string);
    void getWeightLoss(string);
    void getRecurrentInfections(string);
    void getTiredness(string);

    //getting functions for questions
    string getThirst();
    string getPolyurea();
    string getBlurredVision();
    string getWeightLoss();
    string getRecurrentInfections();
    string getTiredness();

    // member functions
private:
    string Q1_Thirst;
    string Q2_Polyurea;
    string Q3_BlurredVision;
    string Q4_WeightLoss;
    string Q5_RecurrentInfections;
    string Q5_Tiredness;

};

#endif //COURSEWORK_INFORMATION_DIABETES_H
