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
    if (age > maxAge or age < (short)0)
    { 
        cout << "Invalid input";
            return -1;
    }
    if (age >= ageLimit)
    { 
        cout << "You are an adult";
        return 1;
    }
    if (age >= (short)0 and age <= (short)3)
    { 
        cout << "You are still a baby";
        return 1;
    }
    if (age > (short)3 and age < (short)10)
    {
        cout << "You are a child";
        return 1;
    }
    if (age >= (short)10 and age < ageLimit)
    { 
        cout << "You are a teenager";
        return 1;
    }
    //Can also use an array for better performance
}
