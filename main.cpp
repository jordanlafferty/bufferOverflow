#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

void attack1()
{
    char* B = new char[10];
    string s1 = "I owe you $1000";
    string s2 = "I don't know you";
    while(true)
    {
        cout << "What's your name?"; 
        cin >> B;
        if (strstr(B,"joker"))
        {
            s1 = "I owe you $2000";
            cout << s1;
            printf("\n");
        }
        else
        {
            cout<< s2;
            printf("\n");
        }
            
    }
}

void attack2()
{
    char* B = new char[10];
    string s1 = "I owe you $1000";
    while(true)
    {
        cout << "What's your name?"; 
        cin >> B;
        s1 = "I owe you $1,000,000";
        cout << s1;
        printf("\n");
       
    }
    
}

int main()
{
    int x = 0;
    cout << "What attack number, 1 or 2?"; 
    cin >> x;
    if(x == 1)
    {
        attack1();
    }
    else
    {
        attack2();
    }
    
    return 0;
}

