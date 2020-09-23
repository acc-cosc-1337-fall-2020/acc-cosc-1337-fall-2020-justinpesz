//cpp
#include "decision.h"
#include<string>

std::string get_letter_grade_using_if(int grade)
 {
    if(grade >= 90)
    {
        return "A";
    }
    else if(grade >= 80 && grade < 90)
    {
        return "B";
    }
    else if(grade >= 70 && grade < 80)
    {
        return "C";
    }
    else if(grade >= 60 && grade < 70)
    {
        return "D";
    }
    else
    {
        return "F";
    }
    return 0;
}

std::string get_letter_grade_using_switch(int grade)
{
    if(grade > 100)
    {
        grade = 100;
    }    
    
    switch(grade/10)
    {
    case 10:
        return "A";
        break;    
    case 9:
        return "A";
        break;
    case 8:
        return "B";
        break;
    case 7:
        return "C";
        break;
    case 6:
        return "D";
        break;
    default:
        return "F";
    }
    return 0;
}

/*std::string get_letter_grade_using_switch(int grade)
{
     
    switch(grade)
    {
    case 1:
        return "A";
        break;
    case 2:
        return "B";
        break;
    case 3:
        return "C";
        break;
    case 4:
        return "D";
        break;
    case 5:
        return "F";
        break;
    default:
        return "";
    } 
}

int convert_number_grade(int grade)
{
    if (grade >= 90 && grade <= 100)
    {
        return 1;
    }
    else if (grade >= 80 && grade < 90)
    {
        return 2;
    }
    else if (grade >= 70 && grade < 80)
    {
        return 3;
    }
    else if (grade >= 60 && grade < 70)
    {
        return 4;
    }
    else if (grade >= 0 && grade < 60)
    {
        return 5;
    }
    else
    {
        return 0;
    }    
}*/