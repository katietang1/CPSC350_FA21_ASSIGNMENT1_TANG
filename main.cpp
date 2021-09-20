/*
Katie Tang
2313452
htang@chapman.edu
CPSC-250-02
Assignment 1: Tutnese Translation 
*/
#include <iostream>
#include <fstream>
using namespace std;
#include "FileProcessor.h"

int main (int arg, char** argv){
   cout << "Welcome to the Tutnese translator." << endl;
   cout << "The output file will be called KatieTangTutnese.txt" << endl;
   cout << "Please enter the name of the file you would like translated: " << endl;
   std::string fileName;
   cin >> fileName;
   FileProcessor *fp = new FileProcessor(fileName);
   fp->startTranslation();




   return 0;
}