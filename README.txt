1. 	Katie Tang
	2313452
	htang@chapman.edu
	CPSC 350-02
	Assignment 1: Tutnese Translation

2. 	Model.h
	Model.cpp
	Translator.h
	Translator.cpp
	FileProcessor.h
	FileProcessor.cpp
	main.cpp
	Makefile.txt

3. 	A segmentation error occurs when translateEnglishWord in Translator.cpp calls
	wordParser in Model. translateEnglishWord successfully identifies and stores word by space,
	but is unable to translate it with Model. I believe this is a pointer issue, I have used 
	variety of resources such as Google and the TAs. I believe the logic of my code is correct,
	but I was unable to sort out this error.

4. 	I messaged Josh on slack and asked how to call a function from a different class. 
	I also went to Pablo's office hours on Monday and the tutoring center. 

	Switch statement: https://www.tutorialspoint.com/cplusplus/cpp_switch_statement.htm

	Debugging: http://www.richelbilderbeek.nl/CppCompileErrorDuplicateSymbol.htm
	https://www.tutorialspoint.com/cplusplus/cpp_passing_pointers_to_functions.htm
	https://stackoverflow.com/questions/29740265/receiving-segmentation-fault-11-error-after-
	calling-function-in-a-constructor-de

	File processing: https://www.cplusplus.com/doc/tutorial/files/

	https://stackoverflow.com/questions/47114450/c-read-txt-file-and-append-data-in-each-line
	
	