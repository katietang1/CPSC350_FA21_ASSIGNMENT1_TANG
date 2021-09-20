/*
Katie Tang
2313452
htang@chapman.edu
CPSC-250-02
Assignment 1: Tutnese Translation 
*/

#include <iostream>
#include "Translator.h"
#include "Model.h"
using namespace std;


Translator::Translator(std::string fullString){
//constructor
    //new instance of Model class
    this->model = new Model();
}
Translator::~Translator(){
//destructor
    delete this->model;
}


std::string Translator::stringParser(std::string fullText){
    std::string translatedString = "";
    std::string currSentence = "";
    // for char in fullText
    cout << "INSIDE STRING PARSER BEFORE LOOP" << endl;
    for (int i = 0; i < fullText.length(); ++i){
        char currChar = fullText[i];
        currSentence += currChar;
        //check if sentence
        if (currChar == '.'){
            translatedString += this->translateEnglishSentence(currSentence.substr(0,(currSentence.length()-1))) + '.';
        }
        else if (currChar == '!'){
            cout << "PRINTING CURRSENTNECE" << endl;
            cout << currSentence << endl;
            cout << "PRINTING SUBSTRING" << endl;
            cout << currSentence.substr(0,(currSentence.length()-1)) << endl;
            translatedString += this->translateEnglishSentence(currSentence.substr(0,(currSentence.length()-1))) + "!";
            cout << "PRINTING TRANSLATEDSTRING" << endl;
            cout << translatedString << endl;
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
    cout << "END OF SENTENCE LOOP" << endl;
    return translatedString;
}

std::string Translator::translateEnglishSentence( std::string EngSentence ){
    std::string translatedSentence = "";
    std::string currWord = "";
    for (int i = 0; i < EngSentence.length(); ++i){
        char currChar = EngSentence[i];
        currWord  += currChar;
        if (currChar == ' '){
            cout << "PRINTING SUBSTRING OF WORD" << endl;
            cout << currWord.substr(0,(currWord.length()-1)) << endl;
            translatedSentence += this->translateEnglishWord(currWord.substr(0,(currWord.length()-1))) + " ";
            cout << "PRINTING TRANSLATED SENTENCE" << endl;
            cout << translatedSentence << endl;
        }
    }
    return translatedSentence;
}

std::string Translator::translateEnglishWord( std::string EngWord){
    cout << "PRINTING ENG WORD: " << endl;
    cout << EngWord << endl;
    cout << "BEFORE WORDPARSER" << endl;
    std::string translatedWord = model->wordParser(EngWord);
    return translatedWord;
}