#include <iostream>
#include <string>
#include <diabetes.h>
using namespace std;

char answer;

class MainEntity
{
public:
    void SetValues(void);
    void Questions(void);

private:
    char Question_Text(100);
    char option_1(40);
    char option_2(40);

};

class Diabetes
{
    MainEntity Q1; // Thirst
    MainEntity Q2; // Polyurea
    MainEntity Q3; // Blurred Vision
    MainEntity Q4; // Weight Loss
    MainEntity Q5; // Recurrent Infections
    MainEntity Q6; // Tiredness

    Q1.SetValues
};