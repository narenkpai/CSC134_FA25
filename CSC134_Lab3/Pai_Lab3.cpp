//////////////////////////////////////////
// Filename Pai_Lab3.cpp
// Date: September 16th, 2025
// Programmer: Naren Pai
// Description:
//     Program to recieve age and name data to calculate
//          total costs for tickets to an event
/////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
//////////////////////////////////////////
/// Function: main
///
/// Description:
///     Function recieves user input in a loop about which calculation to do with two numbers
/// Parameters: None
/// Returns: int, process exit code
//////////////////////////////////////////
int main() {
    using namespace std;
    //initalize variables for each value need from user
    int userChoice;
    double num1;
    double num2;
    bool cont = true;
    //generate the external while loop which runs till the user types -1
    while (cont) {
        //print user to prompt for their choice
        cout <<" 1) Add Two Numbers \n"
            << " 2) Subtract Two Numbers \n"
            << "3) Multiply Two Numbers \n"
            << "4) Divide Two Numbers \n" << endl;
        cout << "Enter selection (1,2,3,4) or enter -1 to exit: __" << endl;
        //recieve user input and store it to a variable to use later
        cin >> userChoice;

        //if statement which determines if user wants to quit program
        if (userChoice == -1) {
            cont = false;
        }else {
            //prompt user for two numbers to compute operation
            cout << "Enter first number: ";
            cin >> num1 ;
            cout << "Enter Second number: ";
            cin >> num2 ;
        }
        //4 if statements to determine and print the result from the computation the user wanted to complete
        if(userChoice == 1) {
            cout << "Answer is " << num1 + num2 << endl;
        }
        else if(userChoice == 2) {
            cout << "Answer is " << num1 - num2 << endl;
        }
        else if(userChoice == 3) {
            cout << "Answer is " << num1 * num2 << endl;
        }
        else if(userChoice == 4) {
            //if statement which handles division by 0
            if (num2 == 0) {
                cout << "Unable to divide by zero." << endl;
                continue;
            }
            cout << "Answer is " << num1 / num2 << endl;
        }
    }
}