#include <iostream>

using namespace std;

int main()
{
    int a = 42; 

    cout << a << endl; 

    int* pointerToA = &a; 

    cout << *pointerToA << endl; 
    *pointerToA = 62838; 

    cout << "What is a's value now? " << a << endl; 
    string notAPalindrome = "car";
    std::reverse(notAPalindrome.begin(), notAPalindrome.end());

    //begin and end functions are returning something "similar to" a POINTER!
    cout << notAPalindrome << endl; 
    return 0;
}