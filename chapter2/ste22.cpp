//File Name: ste22.cpp
//Author: Phong N
//Description: Self-Test Excersises 22 for Problem_Solving_with_C++_(9th_Savitch) chapter 2 page 83
//savings and expenses are variables type double that the user inputs
//if savings is greater than expenses, the word Solvent will be outputted, savings will be decresed by expenses and expenses will equal 0
//else the word Bankrupt will be outputted

#include <iostream>
using namespace std;

int main()
{
    double savings = 0, expenses = 0;
    cout << "Enter savings\n";
    cin >> savings;
    cout << "Enter expenses \n";
    cin >> expenses;
    
    if (savings > expenses)
    {
        cout << "Solvent\n";
        savings -= expenses;
        expenses = 0;
    }
    else
        cout << "Bankrupt\n";

    // cout << "savings: " << savings << endl << "expenses: " << expenses;

    return 0;
}
