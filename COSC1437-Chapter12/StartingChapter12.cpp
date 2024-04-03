#include <iostream>
#include <string>
#include <vector>

using std::cout; 
using std::cin; 
using std::endl; 
using std::string;

int main()
{

	int someNumber = 32; 
	//cout << sizeof(someNumber) << endl; 
	cout << "Size of integer data type (in Bytes): " << sizeof(int) << endl;

	int *pointerToSomeNumber = &someNumber; 


	cout <<"&someNumber yields: " << & someNumber << endl;
	cout << "pointerToSomeNumber yields: " << pointerToSomeNumber << endl;

	int someArray[10]; 
	//std::vector<int> nums; //nums is "dynamic" (its size can change) 
	for (int i = 0; i < 10; i++)
	{
		cout << &someArray[i] << endl;
	}


	int a = 15;
	int *pointerToA = &a; //ampersand acts as the "address of" operator 
	cout << "\n\n";
	//cout << std::showbase << std::hex << a << endl;

	int someOtherArray[5] = { 1, 8, 12, 13, 16 };

	//cout << someOtherArray[2] << endl; 

	//someOtherArray++; 


	//int* somePointer = 2; //declares a "pointer" to an integer variable 

	//Texas A & M 

	//if (1 > 0 && 1 < 0)
	//cout << (someNumber.length()) << endl; 

	//string word = "alpha"; 
	//cout << word.length() << endl; 


	return 0; 
}