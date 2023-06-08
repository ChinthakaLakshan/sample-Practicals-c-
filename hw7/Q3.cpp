#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
#include <ctype.h>



using namespace std;
int main()
{
          char characters[100];
           string string1;

           string1 = "midfsdfnsdj";

           cout << "Enter Your String : ";
             cin >> string1;
            int n = string1.length();

strcpy(characters, string1.c_str());

   for (int i = 0; i < n; i++)
    {
        characters[i] = toupper(characters[i]);
     }

               for (int i = 0; i < n; i++)
          {
         cout << characters[i];
           }
            cout << endl;

           for (int i = 0; i < n; i++)
        {      
               characters[i] = tolower(characters[i]);
              }

             for (int i = 0; i < n; i++)
             {
              cout << characters[i];
              }

          return 0;
}
