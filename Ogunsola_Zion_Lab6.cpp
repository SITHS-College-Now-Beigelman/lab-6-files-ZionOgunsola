//Zion Ogunsola, Benson Chen, Aaron Li
//10/15/2024
//Lab 6

 

// Programmer: type your name here
// Date completed: type today's date
// Program for practice of streams 

#include <iostream> //Includes iostream
#include <fstream> //Includdes fstream
#include <string> //includes string
using namespace std;
 
int main () //Begins function
{
    
     cout<<"Program to review streams.....\n"; //Outputs statement

    
     ifstream inFile; //Declares variable
     ofstream outFile; //Declares variable
     int intergerOne; //Declares variable
     int intergerTwo; //Declares variable
     char character1; //Declares variable
     string string1; //Declares variable


    inFile.open("inData.txt"); //Opens inFile
    outFile.open("outData.txt"); //Opens Outfile

     
    inFile >> intergerOne >> intergerTwo; //Inputs two integers into inFile
    outFile << intergerOne + intergerTwo << endl; //Outputs sum of the two integers into outFile
    
    inFile >> character1; //Inputs character into inFile
    char followingCharacter = character1 + 1; //Declares variable 
    outFile << followingCharacter << endl; /Outputs following character in ASICC chart into outFile

     
    inFile >> string1; //Inputs string into inFile
    outFile << string1; //Outputs string into outFile
    
    inFile.close(); //Closes inFile
    outFile.close(); //Closes outFile

     
     return 0; 
}
