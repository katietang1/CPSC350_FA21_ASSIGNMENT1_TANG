/*
Katie Tang
2313452
htang@chapman.edu
CPSC-250-02
Assignment 1: Tutnese Translation
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

FileProcessor::FileProcessor(std::string fileName){
    indata.open(fileName);
}
FileProcessor::~FileProcessor(){
//destructor
    delete this->translator;
}

void FileProcessor::startTranslation(){
    std::string line;
    while (getline(indata,line)) {
        stringInput += line;

    }
    this->processFile(stringInput, "KatieTangTutnese.txt");
    indata.close();
}

void FileProcessor::processFile(std::string stringInput, std::string stringOutput){
    cout << "INSIDE PROCESS FILE before string parser" << endl;
    stringOutput = translator->stringParser(stringInput);
    cout << "EXITED STRING PARSER" << endl;
    ofstream outdata;
    outdata.open(stringOutput);
    for (int i = 0; i < stringOutput.length(); i++){
         outdata << stringOutput[i];
    }
    outdata.close();
}