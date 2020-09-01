// schoolproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;


void Baby()
{
    cout << "You are still a baby";
}
int main()
{
#if defined IFELSE

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
    if (age >= (short)10 and age < ageLimit)
    {
        cout << "You are a teenager";
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
    //Can also use an array for better performance
#else
    //Precomputed, requires more memory but better runtime performance
    constexpr char baby[] = "You are still a baby";
    constexpr char teenager[] = "You are a teenager";
    constexpr char adult[] = "You are an Adult";
    constexpr char child[] = "You are a child";
    constexpr unsigned __int8 ageLimit = (unsigned __int8)150;
    short currentAge;
    DWORD ageArray[ageLimit];

    for (int i = 0; i < 4; i++)
        ageArray[i] = (DWORD)baby;
    for (int i = 4; i < 10; i++)
        ageArray[i] = (DWORD)child;
    for (int i = 10; i < 20; i++)
        ageArray[i] = (DWORD)teenager;
    for (unsigned __int8 i = (unsigned __int8)20; i < ageLimit; i++)
        ageArray[i] = (DWORD)adult;
    
    cout << "What's your age? ";
    cin >> currentAge;

    if (currentAge < 0 or currentAge >= ageLimit)
    { 
        cout << "Invalid Input";
        return -1;
    }

    cout << (const char*)ageArray[currentAge] << endl;

#endif
}
