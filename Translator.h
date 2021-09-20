/*
Katie Tang
2313452
htang@chapman.edu
CPSC-250-02
Assignment 1: Tutnese Translation
*/
 
#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>
#include "Model.h"

class Translator{
    public:
    Model *model;

    Translator(std::string); //default constructor 
    ~Translator(); //default destructor 

    std::string stringParser(std::string);
    std::string translateEnglishWord( std::string );
    std::string translateEnglishSentence( std::string );

};

#endif
