//////////////////////////////////////////
// Filename Pai_Lab2.cpp
// Date: September 8th, 2025
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
///     Recieves the 3 ages and names of customers, calculates ticket prices, subtotals, and totals
/// Parameters: None
/// Returns: int, process exit code
//////////////////////////////////////////

int main()
{
    using namespace std;
    //intitalize variables for each persons age
    int age1, age2, age3;
    //initalize variables for each persons ticket cost
    int ticket1, ticket2, ticket3;
    //initalize variables for each persons name
    string name1, name2, name3;

    //recieve user input for each persons last name and age
    cout << "Enter the last name of customer 1" << endl;
    cin >> name1;
    cout << "Enter the age of customer 1" << endl;
    cin >> age1;

    cout << "Enter the last name of customer 2" << endl;
    cin >> name2;
    cout << "Enter the age of customer 2" << endl;
    cin >> age2;

    cout << "Enter the last name of customer 3" << endl;
    cin >> name3;
    cout << "Enter the age of customer 3" << endl;
    cin >> age3;

    //If statements are used to determine each customers age, and their respective ticket price
    if(age1 < 5 && age1 > 0)
        ticket1 = 0;
    if(age1 > 6 && age1 < 12)
        ticket1 = 5;
    if(age1 > 13 && age1 < 17)
        ticket1 = 8;
    if(age1 > 18 && age1 < 59)
        ticket1 = 12;
    if(age1 > 60)
        ticket1 = 6;

    if(age2 < 5 && age2 > 0)
        ticket2 = 0;
    if(age2 > 6 && age2 < 12)
        ticket2 = 5;
    if(age2 > 13 && age2 < 17)
        ticket2 = 8;
    if(age2 > 18 && age2 < 59)
        ticket2 = 12;
    if(age2 > 60)
        ticket2 = 6;

    if(age3 < 5 && age3 > 0)
        ticket3 = 0;
    if(age3 > 6 && age3 < 12)
        ticket3 = 5;
    if(age3 > 13 && age3 < 17)
        ticket3 = 8;
    if(age3 > 18 && age3 < 59)
        ticket3 = 12;
    if(age3 > 60)
        ticket3 = 6;

    //sub total is calculated as a double using each ticketprice
    double sum = ticket1 + ticket2 + ticket3;
    //decimal precison is set to 2 for the double
    cout << fixed << showpoint << setprecision(2);
    //print statements are used to display each persons information and ticket cost. Final totals are printed below
    cout << "\nCustomer 1 Name: " << name1 << "\nCustomer 1 Age: " << age1 << "\nCustomer 1 Ticket: " << ticket1 << endl;
    cout << "\nCustomer 2 Name: " << name2 << "\nCustomer 2 Age: " << age2 << "\nCustomer 2 Ticket: " << ticket2 << endl;
    cout << "\nCustomer 3 Name: " << name3 << "\nCustomer 3 Age: " << age3 << "\nCustomer 3 Ticket: " << ticket3 << endl;
    cout << "________________ Calculations ________________" << endl;
    cout << "Subtotal: " << sum << endl;
    cout << "Total Charge: " << sum * 1.05 << endl;

}