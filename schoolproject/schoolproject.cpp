// schoolproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

int main()
{
#if defined IFELSE

    //can also use unsigned short, but cba.
    short age;
    constexpr short ageLimit = 20;
    constexpr short maxAge = 150;
    label:
    cout << "What is your age? ";
    cin >> age;
    if (age > maxAge or age < (short)0 or !cin)
    { 
        cin.clear();
        system("CLS");
        cout << "Invalid Input\n";
        goto label;
        return -1;
    }
    if (age >= ageLimit)
    { 
        cout << "You are an adult";
        return 1;
    }
    if (age >= (short)13 and age < ageLimit)
    {
        cout << "You are a teenager";
        return 1;
    }
    if (age >= (short)0 and age <= (short)3)
    { 
        cout << "You are still a baby";
        return 1;
    }
    if (age >= (short)3 and age < (short)13)
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
    for (int i = 4; i < 13; i++)
        ageArray[i] = (DWORD)child;
    for (int i = 13; i < 20; i++)
        ageArray[i] = (DWORD)teenager;
    for (unsigned __int8 i = (unsigned __int8)20; i < ageLimit; i++)
        ageArray[i] = (DWORD)adult;
    
    label:
    cout << "What's your age? ";
    cin >> currentAge;

    if (currentAge < 0 or currentAge >= ageLimit or !cin)
    {     
        cin.clear();
        system("CLS");
        cout << "Invalid Input\n";
        goto label;
    }

    cout << (const char*)ageArray[currentAge] << endl;

#endif
    cin.clear();
}
