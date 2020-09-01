// schoolproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;
int main()
{
    //can also use unsigned short, but cba.
    short age;
    short ageLimit = 20;
    short maxAge = 150;
    cout << "What is your age? ";
    cin >> age;
    if (age > maxAge or age < 0)
    { 
        cout << "Invalid input";
            return -1;
    }
    if (age >= ageLimit)
        cout << "You are an adult";
    else
        cout << "You are a teenager";

}
