#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
int count = 0;


char string1[] = "Enter Your string\n2nd_Line\n3rd_lINE";


char *x = strtok(string1, "\n ");
while (x != 0)
{
count++;

x = strtok(NULL, "\n ");
}
cout<<count << endl;
} 
