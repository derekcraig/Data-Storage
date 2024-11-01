//This program writes data to a file
#include <iostream>
#include <fstream>
#include <string>   //For the user entered name file creator
using namespace std;

int main() 
{
 ofstream outputFile;
 outputFile.open("demofile.txt");

 cout << "Now writing data to the file.\n";

 //Write four names to the file
 outputFile << "Bach\n";
 outputFile << "Beethoven\n";
 outputFile << "Mozart\n";
 outputFile << "Chopin\n";

 //Close the file
 outputFile.close();
 cout << "Done.\n" << endl;

//This program writes user input to a file
 ofstream outputFile2;
 int number1, number2, number3;

 //Open an output file
 outputFile2.open("Numbers.txt");

 //Get three numbers from the user
 cout << "This program will save three numbers given to a file.\n";
 cout << "Enter a number: ";
 cin >> number1;
 cout << "Enter another number: ";
 cin >> number2;
 cout << "Enter the last number: ";
 cin >> number3;

 //Write the numbers to the file
 outputFile2 << number1 << endl;
 outputFile2 << number2 << endl;
 outputFile2 << number3 << endl;
 cout << "The numbers were saved.\n";

 //Close the file
 outputFile2.close();
 cout << "Done.\n" << endl;

//This program writes user input to a file with, a special twist
 ofstream outputFile3;
 string name1, name2, name3;

 //Open an output file
 outputFile3.open("Friends.txt");

 //Get the names of three friends
 cout << "Enter the names of three friends.\n";
 cout << "Friend #1: ";
 cin >> name1;
 cout << "Friend #2: ";
 cin >> name2;
 cout << "Friend #3: ";
 cin >> name3;

 //Write the names to the file
 outputFile3 << name1 << " is a dork." << endl;
 outputFile3 << name2 << " is a huge nerd." << endl;
 outputFile3 << name3 << " is also a dork." << endl;
 cout << "The names were saved to a file.\n" << endl;

 //Close the file
 outputFile3.close();

//This program reads names from a file
 ifstream inputFile;
 string name;

 inputFile.open("demofile.txt");
 cout << "Reading data from the first file.\n";

 getline(inputFile, name);    //Read name 1 from file
 cout << name << endl;        //Display name 1

 getline(inputFile, name);    //Read name 2 from file
 cout << name << endl;        //Display name 2

 getline(inputFile, name);    //Read name 3 from file
 cout << name << endl;        //Display name 3

 inputFile.close();           //Close file
 cout << endl;

//this program reads numbers from a file
 ifstream inFile;
 int value1, value2, value3, sum;

 //Open the file
 inFile.open("Numbers.txt");

 //Read the three numbers from the file
 inFile >> value1;
 inFile >> value2;
 inFile >> value3;

 //Close the file
 inFile.close();

 //Calculate the numbers
 sum = value1 + value2 + value3;

 //Display the numbers
 cout << "Here are the numbers:\n"
      << value1 << " " << value2
      << " " << value3 << endl;

 //Display their sum for fun
 cout << "Their sum is: " << sum << endl << endl;

//This program lets the user enter a filename to be read
 ifstream inputFile2;
 string filename, string;

 //Get the filename from the user
 cout << "Enter either filename demofile.txt or Friends.txt: ";
 cin >> filename;

 //Open the file
 inputFile2.open(filename);

 //If the file successfully opened, process it
 if (inputFile2)
 {
  //Read the numbers from the file and display them
    while (getline(inputFile2, string))
  {
   cout << string << endl;
  }
 //Close the file
 inputFile2.close();
 }
 else
 {
  //Dispay an error message
  cout << "Error opening the file.\n";
 }
 return 0;
}