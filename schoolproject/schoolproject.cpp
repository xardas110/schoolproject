// schoolproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    int age;
    cout << "What is your age? ";
    cin >> age;
    if (age >= 20)
        cout << "\nYou are an adult";
    else
        cout << "\nYou are a teenager";

}
