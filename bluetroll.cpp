#include <string>
#include <sstream>

#include "bluetroll.h"


std::string BlueTroll::generateQuestion()
{
    int left = 1 + rand()%9;
    int right = 1 + rand()%9;

    std::stringstream question;
    question << left << " * " << right << ": ";
    my_answer = left * right;
    return question.str();
}
