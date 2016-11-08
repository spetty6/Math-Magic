/*
Program: MathMagic.cpp
Author: Samuel Petty
Lab Section: ITCS1212-L04
Date: 1/29/14
Purpose: Calculates any number below the integer value 10 and makes it equal to 3 by multiplying by 2, adding 6, dividing by 2, and subtracting by the integer value below 10.
*/


#include <iostream>

using namespace std;

int main()
{
    int numberBelowTen; //Stores an integer value below 10
    int doubleNumber; // Stores double of number BelowTen
    int addSix; // Stores the result of sum of 6 and doubleNumber
    int halfNumber; // Stores the result of half the answer
    int finalAnswer; // Stores the result of the subtraction of numberBelowTen

    cout << "Math Magic: Enter any number and I will generate 3" << endl;
    cin >> numberBelowTen;

    doubleNumber = numberBelowTen * 2;
    addSix = doubleNumber + 6;
    halfNumber = addSix / 2;
    finalAnswer = halfNumber - numberBelowTen;

    cout << endl;
    cout << "And the result is:" << finalAnswer << endl;


    return 0;
}
