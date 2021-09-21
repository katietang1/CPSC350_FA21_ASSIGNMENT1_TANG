/*
Katie Tang
2313452
htang@chapman.edu
CPSC-250-02
Assignment 1: Tutnese Translation
*/
 
#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <string>

class Model{
    public:
    Model(); //default constructor
   ~Model(); //destructor

    std::string translateSingleCharacter( char );
    std::string translateDoubleCharacter( char );

    std::string wordParser( std::string *fullWord);
    std::string translateSingleVowel( char );
    std::string translateDoubleVowel( char );

    
   
};

#endif
