/*
Katie Tang
2313452
htang@chapman.edu
CPSC-250-02
Assignment 1: Tutnese Translation 
*/
 
#include <iostream>
#include "Model.h"
#include "Translator.h"
using namespace std;

Model::Model(){
//constructor
}
Model::~Model(){
//destructor
}

string Model::wordParser(std::string fullWord){
    cout << "here" << endl;
    std::string translatedWord = "";
    //for char in fullstring
    for (int i = 0; i < fullWord.length(); ++i){
        char curr = fullWord[i];
    // check if vowel
        if (curr == 'a' || 'A' || 'e' || 'E' || 'i' || 'I' || 'o'|| 'O' || 'U' || 'u'){
            //if double translate vowel double

            if (curr == fullWord[i+1]){
                translatedWord += this->translateDoubleVowel(curr);
                ++i;
            }
             //if single translate vowel single
            else{
                translatedWord += this->translateSingleVowel(curr);
            }
            
        }
    // else if regular
        else {
            //if double translate regular double
            //if (fullWord[i+1] != NULL)
            if (curr == fullWord[i+1]) {
                translatedWord += this->translateDoubleCharacter(curr);
                ++i;
            }
            //if single translate regular single 
            else {
                translatedWord += this->translateSingleCharacter(curr);
            }
            
        }
    }
    return translatedWord;  
}

std::string Model::translateDoubleCharacter(char doubleChar){
    std::string translatedChar = "";
    switch (doubleChar){

        case 'B' :
        translatedChar += "BSQUA";
        break;

        case 'b' :
        translatedChar += "bsqua";
        break;

        case 'C' :
        translatedChar += "CSQUA";
        break;

        case 'c' :
        translatedChar += "csqua";
        break;

        case 'D' :
        translatedChar += "DSQUA";
        break;

        case 'd' :
        translatedChar += "dsqua";
        break;

        case 'F' :
        translatedChar += "FSQUA";
        break;

        case 'f' :
        translatedChar += "fsqua";
        break;

        case 'G' :
        translatedChar += "GSQUA";
        break;

        case 'g' :
        translatedChar += "gsqua";
        break;

        case 'H' :
        translatedChar += "HSQUA";
        break;

        case 'h' :
        translatedChar += "hsqua";
        break;

        case 'J' :
        translatedChar += "JSQUA";
        break;

        case 'j' :
        translatedChar += "jsqua";
        break;

        case 'K' :
        translatedChar += "KSQUA";
        break;

        case 'k' :
        translatedChar += "ksqua";
        break;

        case 'L' :
        translatedChar += "LSQUA";
        break;

        case 'l' :
        translatedChar += "lsqua";
        break;

        case 'M' :
        translatedChar += "MSQUA";
        break;

        case 'm' :
        translatedChar += "msqua";
        break;

        case 'N' :
        translatedChar += "NSQUA";
        break;

        case 'n' :
        translatedChar += "nsqua";
        break;

        case 'P' :
        translatedChar += "PSQUA";
        break;

        case 'p' :
        translatedChar += "psqua";
        break;

        case 'Q' :
        translatedChar += "QSQUA";
        break;

        case 'q' :
        translatedChar += "qsqua";
        break;

        case 'R' :
        translatedChar += "RSQUA";
        break;

        case 'r' :
        translatedChar += "rsqua";
        break;

        case 'S' :
        translatedChar += "SSQUA";
        break;

        case 's' :
        translatedChar += "squa";
        break;

        case 'T' :
        translatedChar += "TSQUA";
        break;

        case 't' :
        translatedChar += "tsqua";
        break;

        case 'V' :
        translatedChar += "VSQUA";
        break;

        case 'v' :
        translatedChar += "vqua";
        break;

        case 'W' :
        translatedChar += "WSQUA";
        break;

        case 'w' :
        translatedChar += "wqua";
        break;

        case 'X' :
        translatedChar += "XSQUA";
        break;

        case 'x' :
        translatedChar += "xsqua";
        break;

        case 'Y' :
        translatedChar += "YSQUA";
        break;

        case 'y' :
        translatedChar += "ysqua";
        break;

        case 'Z' :
        translatedChar += "ZSQUA";
        break;

        case 'z' :
        translatedChar += "zqua";
        break;

        default :
        cout << "Invalid character translateDoubleCharacter" << endl;

    };

    return translatedChar;

}

std::string Model::translateSingleCharacter(char singleChar){
    std::string translatedChar = "";
    switch (singleChar){
        case 'B' :
        translatedChar += "BUB";
        break;

        case 'b' :
        translatedChar += "bub";
        break;

        case 'C' :
        translatedChar += "CASH";
        break;

        case 'c' :
        translatedChar += "cash";
        break;

        case 'D' :
        translatedChar += "DUD";
        break;

        case 'd' :
        translatedChar += "dud";
        break;

        case 'F' :
        translatedChar += "FUF";
        break;

        case 'f' :
        translatedChar += "fuf";
        break;

        case 'G' :
        translatedChar += "GUG";
        break;

        case 'g' :
        translatedChar += "gug";
        break;

        case 'H' :
        translatedChar += "HASH";
        break;

        case 'h' :
        translatedChar += "hash";
        break;

        case 'J' :
        translatedChar += "JAY";
        break;

        case 'j' :
        translatedChar += "jay";
        break;

        case 'K' :
        translatedChar += "KUCK";
        break;

        case 'k' :
        translatedChar += "kuck";
        break;

        case 'L' :
        translatedChar += "LUL";
        break;

        case 'l' :
        translatedChar += "lul";
        break;

        case 'M' :
        translatedChar += "MUM";
        break;

        case 'm' :
        translatedChar += "mum";
        break;

        case 'N' :
        translatedChar += "NUN";
        break;

        case 'n' :
        translatedChar += "nun";
        break;

        case 'P' :
        translatedChar += "PUB";
        break;

        case 'p' :
        translatedChar += "pub";
        break;

        case 'Q' :
        translatedChar += "QUACK";
        break;

        case 'q' :
        translatedChar += "quack";
        break;

        case 'R' :
        translatedChar += "RUG";
        break;

        case 'r' :
        translatedChar += "rug";
        break;

        case 'S' :
        translatedChar += "SUS";
        break;

        case 's' :
        translatedChar += "sus";
        break;

        case 'T' :
        translatedChar += "TUT";
        break;

        case 't' :
        translatedChar += "tut";
        break;

        case 'V' :
        translatedChar += "VUV";
        break;

        case 'v' :
        translatedChar += "vuv";
        break;

        case 'W' :
        translatedChar += "WACK";
        break;

        case 'w' :
        translatedChar += "wack";
        break;

        case 'X' :
        translatedChar += "EX";
        break;

        case 'x' :
        translatedChar += "ex";
        break;

        case 'Y' :
        translatedChar += "YUB";
        break;

        case 'y' :
        translatedChar += "yub";
        break;

        case 'Z' :
        translatedChar += "ZUB";
        break;

        case 'z' :
        translatedChar += "zub";
        break;

        default :
        cout << "Invalid character translateSingleCharacter" << endl;

    }

    return translatedChar;
}
std::string Model::translateDoubleVowel(char doubleVowel){
    std::string translatedChar = "";
    switch (doubleVowel) {
        case 'A' :
        translatedChar += "SQUATA";
        break;

        case 'a' :
        translatedChar += "squata";
        break;

        case 'E' :
        translatedChar += "SQUATE";
        break;

        case 'e' :
        translatedChar += "squate";
        break;
        
        case 'I' :
        translatedChar += "SQUATI";
        break;

        case 'i' :
        translatedChar += "squati";
        break;

        case 'O' :
        translatedChar += "SQUATO";
        break;

        case 'o' :
        translatedChar += "squato";
    
        break;

        case 'U' :
        translatedChar += "SQUATU";
        break;

        case 'u' :
        translatedChar += "squatu";
        break;

        default:

        cout << "Invalid character translateDoubleVowel" << endl;


    }

    return translatedChar;

}
std::string Model::translateSingleVowel(char singleVowel){
    std::string translatedChar = "";
    switch (singleVowel) {
        case 'A' :
        translatedChar += "A";
        break;

        case 'a' :
        translatedChar += "a";
        break;

        case 'E' :
        translatedChar += "E";
        break;

        case 'e' :
        translatedChar += "e";
        break;
        
        case 'I' :
        translatedChar += "I";
        break;

        case 'i' :
        translatedChar += "i";
        break;

        case 'o' :
        translatedChar += "o";
        break;

        case 'O' :
        translatedChar += "O";
        break;

        case 'U' :
        translatedChar += "U";
        break;

        case 'u' :
        translatedChar += "u";
        break;

        default:

        cout << "Invalid character translateSingleVowel" << endl;


    }

    return translatedChar;

}


 
 