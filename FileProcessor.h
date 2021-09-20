/*
Katie Tang
2313452
htang@chapman.edu
CPSC-250-02
Assignment 1: Tutnese Translation
*/
 
#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <iostream>
#include <fstream>
#include "Translator.h"


class FileProcessor{
    public:

    Translator *translator;
    std::string stringInput;

    FileProcessor(std::string fileName);
    ~FileProcessor();

    void startTranslation();
    void processFile( std::string, std::string );



};

#endif
