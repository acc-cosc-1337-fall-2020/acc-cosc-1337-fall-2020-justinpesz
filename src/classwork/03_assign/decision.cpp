//cpp
#include "decision.h"
#include<string>

std::string get_letter_grade_using_if(int grade)
{
    if(grade >= 90 && grade <= 100)
    {
        return "A";
    }
    if(grade >= 80 && grade < 90)
    {
        return "B";
    }
    if(grade >= 70 && grade < 80)
    {
        return "C";
    }
    if(grade >= 60 && grade < 70)
    {
        return "D";
    }
    if(grade >= 0 && grade < 60)
    {
        return "F";
    }

    return "";
}

/*std::string get_letter_grade_using_switch(int grade)
{
    
}*/