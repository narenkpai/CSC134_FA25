#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//////////////////////////////////////////
// Filename main.cpp
// Date: September 5th, 2025
// Programmer: Naren Pai
// Description:
//     recieve 5 numbers from user input, and return the average of the grade.
//     Also write into a average file.
/////////////////////////////////////////

//////////////////////////////////////////
/// Function: main
///
/// Description:
///     Function recieves user input and calculates average, additionally creates output.txt file
/// Parameters: None
/// Returns: int, process exit code
//////////////////////////////////////////

int main()
{
    std::ofstream outFile; // Output file stream
    // Initialized Double variables for each test grade
    double num1;
    double num2;
    double num3;
    double num4;
    double num5;

    // User prompts for each test grade, and assigning each input to a declared variable
    cout << "enter test grade 1: ";
    cin >> num1;
    cout << "enter test grade 2: ";
    cin >> num2;
    cout << "enter test grade 3: ";
    cin >> num3;
    cout << "enter test grade 4: ";
    cin >> num4;
    cout << "enter test grade 5: ";
    cin >> num5;
    cout << endl;
    //Set decimal precision of the output to 1 decimal point
    cout << fixed << showpoint << setprecision(1);

    //compute the average by summing test scores and diving by the total number, assign it to a double variable
    double average = (num1 + num2 + num3 + num4 + num5)/5.0;

    //Print statement printing all the test grades and calculated average with 1 decimal point precision
    cout << "Grade for Test 1: " << num1 << "\nGrade for Test 2: " << num2 << "\nGrade for Test 3: " << num3 << "\nGrade for Test 4: " << num4 << "\nGrade for Test 5: " << num5;
    cout << "\ntest average: " << average;

    //creates testaverage.txt as the output file
    outFile.open("testaverage.txt");

    //writes test grades and average in the output.txt file
    outFile <<  "Grade for Test 1: " << num1 << "\nGrade for Test 2: " << num2 << "\nGrade for Test 3: " << num3 << "\nGrade for Test 4: " << num4 << "\nGrade for Test 5: " << num5;
    outFile << "\ntest average: " << average;
    outputFile.close();

    return 0;
}