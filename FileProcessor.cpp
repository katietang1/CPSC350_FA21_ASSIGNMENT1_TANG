/*
Katie Tang
2313452
htang@chapman.edu
CPSC-250-02
Assignment 1: Tutnese Translation
FileProcessor takes a text file with English text and produces 
an output file containing Tutnese translation.
*/

#include <iostream>
#include <fstream>
using std::ifstream;
#include "FileProcessor.h"
#include "Translator.h"
using namespace std;

Translator *translator;
std::string fileName;
std::string stringInput;
ifstream indata;

/* FileProcessor class takes the name of the english file 
and produces an output file with Tutnese translation*/
FileProcessor::FileProcessor(std::string fileName){
// constructor
    indata.open(fileName);
}
FileProcessor::~FileProcessor(){
// destructor
    delete this->translator;
}

/* startTranslation function reads the file and stores the 
content in a string, it then calls processFile to write into file*/
void FileProcessor::startTranslation(){
    std::string line;
    while (getline(indata,line)) {
        stringInput += line;

    }
    this->processFile(stringInput, "KatieTangTutnese.txt");
    indata.close();
}

/* processFile takes two arguments, a string representing text input
and a string representing translated output. It calls stringParser
then writes the translated data.*/
void FileProcessor::processFile(std::string stringInput, std::string stringOutput){
    stringOutput = translator->stringParser(stringInput);
    ofstream outdata;
    outdata.open(stringOutput);
    for (int i = 0; i < stringOutput.length(); i++){
         outdata << stringOutput[i];
    }
    outdata.close();
}