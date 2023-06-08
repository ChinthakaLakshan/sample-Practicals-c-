

#include <iostream>
#include <string.h>
using namespace std;


int main()
{
	char Array1[100];
	char Array2[100];


	cout<< "Enter the first String --> \n";
	cin.getline(Array1,100);
	cout<< "Enter the second String -->\n";
	cin.getline(Array2,100);


	int resultCode = strcmp(leftArray, rightArray);


	if(resultCode == 0)
	{
		cout<< "Strings are equal";
	}
	else if(resultCode < 0)
	{
		cout << "First string is less than the second string";
	}
	else
	{
		cout << "First string is greater than the second string";
	}
}



