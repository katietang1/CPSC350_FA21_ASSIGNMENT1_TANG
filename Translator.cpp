/*
Katie Tang
2313452
htang@chapman.edu
CPSC-250-02
Assignment 1: Tutnese Translation 
Translator.cpp breaks down the full english string into sentences
and words 
*/

#include <iostream>
#include "Translator.h"
#include "Model.h"
using namespace std;

/* Translator class takes in the full string Input and 
translates english sentences. */
Translator::Translator(std::string fullString){
//constructor
    //new instance of Model class
    this->model = new Model();
}
Translator::~Translator(){
//destructor
    delete this->model;
}

/* stringParser function takes in the full string input and 
    determines sentences based on puncuation. It returns the 
    fully translated Tutnese string.*/
std::string Translator::stringParser(std::string fullText){
    std::string translatedString = "";
    std::string currSentence = "";
    // for char in fullText
    for (int i = 0; i < fullText.length(); ++i){
        char currChar = fullText[i];
        currSentence += currChar;
        //check if sentence
        if (currChar == '.'){
            translatedString += this->translateEnglishSentence(currSentence.substr(0,(currSentence.length()-1))) + '.';
        }
        else if (currChar == '!'){
            translatedString += this->translateEnglishSentence(currSentence.substr(0,(currSentence.length()-1))) + "!";
        }

        else if (currChar == '?'){
            translatedString += this->translateEnglishSentence(currSentence.substr(0,(currSentence.length()-1))) + '?';
             
        }

        else if (currChar == ','){
            translatedString += this->translateEnglishSentence(currSentence.substr(0,(currSentence.length()-1))) + ',';
             
        }

        else if (currChar == ':'){
            translatedString += this->translateEnglishSentence(currSentence.substr(0,(currSentence.length()-1))) + ':';
             
        }

        else if (currChar == ';'){
            translatedString += this->translateEnglishSentence(currSentence.substr(0,(currSentence.length()-1))) + ';';
             
        }

    }
    return translatedString;
}

/* translateEnglishSentence function takes in an english sentence and
breaks it down words based on spaces. It returns the translated sentence.*/
std::string Translator::translateEnglishSentence( std::string EngSentence ){
    std::string translatedSentence = "";
    std::string currWord = "";
    for (int i = 0; i < EngSentence.length(); ++i){
        char currChar = EngSentence[i];
        currWord  += currChar;
        if (currChar == ' '){
            translatedSentence += this->translateEnglishWord(currWord.substr(0,(currWord.length()-1))) + " ";
        }
    }
    return translatedSentence;
}
/* translateEnglishWord function takes in an english word and
calls wordParser, then returns the translated word. (This is where 
the segmentation error begins) */
std::string Translator::translateEnglishWord( std::string EngWord){
    std::string translatedWord = model->wordParser(&EngWord);
    return translatedWord;
}