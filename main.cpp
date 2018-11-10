//
//  main.cpp
//  JR Using reference to hack and bankrupting the terrorists
//
//  Created by Jose Rodriguez on 11/8/18.
//  Teacher: Tony Hilton
//

#include <iostream>

using namespace std;

void badSwap(int x, int y); // badSwap function
void goodSwap(int& x, int&y); // goodSwap Function
void programSwap() // program Swap function
{
    cout << " Welcome to the Hack program Recruit\n " << endl; // Welcoming quote
    // Information about the program
    cout << " We had received information that Terrorist have deposit a huge funds in to the Bank of terror\n ";
    cout << " with those funds the can buy multiple weapons and they can build a network of people in the USA\n";
    cout << " We need your help to prevent that, since you are the most qualifity recruit\n";
    // getting recruit's name
    char recruit;
    cout << " Please Enter your name: ";
    cin >> recruit;
    // more informations about the program
    cout << " Are you ready to hack the enemy?\n " << recruit <<  endl;
    cout << " We have located and account that you can transfer the funds\n";
    cout << " There is a local store that have being strugling for a while\n";
    cout << " The name is Joe's Coffee Shop, they could use that money\n ";
    cout << " Press Enter to Start\n " << endl; // instruction to start
    string enter; // pausing the program
    getline(cin, enter);
    getline(cin, enter);
}
void congratulations() // congratulation function
{
    // final greeting
    cout << "******Congratulations Recruit******\n You have safe many lives & help a store in need.\n";
    cout << "Thank you for your service ";
}
int main() // main function
{
    programSwap(); // calling the program Swap
    int joesCoffeShop = 1500; // value for joes's coffee shop
    int terroristAccount = 1000000; // value for terrorist account
    // display Original account values
    cout << "Original Accounts values\n";
    cout << "Joe's Coffe Shop account: " << joesCoffeShop << "\n";
    cout << "Terrorist account: " << terroristAccount << "\n";
    cout << "Press Enter to swap the accounts\n\n ";
    string enter; // pausing the program
    getline(cin, enter);
    
    // display transfer not complete, to make thinks more interesting
    cout << "Tranfer not complete, Try Harder \n" ;
    badSwap (joesCoffeShop, terroristAccount); // calling the badswap function
    // Display account values
    cout << "Joe's Coffee Shop account: " << joesCoffeShop << "\n";
    cout << "Terrorist account: " << terroristAccount << "\n\n";
    cout << "Press Enter to swap the accounts again\n\n ";
    getline(cin, enter); // pausing the program
    // display account values swap
    cout << "Transfer Complete\n ";
    goodSwap (joesCoffeShop, terroristAccount); // calling the good swapp function
    cout << "Joe's Coffee Shop account: " << joesCoffeShop << "\n";
    cout << "Terrorist account: " << terroristAccount << "\n\n";
    
    congratulations(); // calling the congratulation function
    
    return 0;
    
}

void badSwap (int x, int y)
{
    int temp =x;
    x = y;
    y = temp;
    
}

void goodSwap (int& x, int& y)
{
    int temp =x;
    x = y;
    y = temp;
    
}
