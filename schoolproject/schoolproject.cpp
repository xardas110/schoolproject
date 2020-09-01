// schoolproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    short age;
    cout << "What is your age? ";
    cin >> age;
    if (age >= (short)20)
        cout << "You are an adult";
    else
        cout << "You are a teenager";

}
