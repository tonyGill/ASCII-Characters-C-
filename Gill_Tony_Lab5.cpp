/*

Algorithm was designed in the following series of steps:
1) Define special character variable array pointer to display ASCII non-visible characters
2) Define character variable for remaining ASCII chracters
3) Create for loop for non-visible special ASCII characters range 0 to 31
5) Use conditional if statement to ensure each line outputs 16 characters
6) Create for loop for remaining ASCII characters range 32 to 127, last character 127 is also special represent as "DEL"
7) Output all ASCII characters range 0 to 127

Functions/Formulas

Function in this case was the main function with c variable for ASCII characters range 32 to 127, outside main
characters for the special ASCII range 0 to 31 were defined and initialized

Formula for 16 characters per line: if(count % 16 == 0) cout << endl;


Revision History:
February 3, 2019: first version created, revised and completed


*/

#include<iostream>
using namespace std;

// Defines and initializes character array that points to ASCII special characters index 
char const* specialChar[] = { "\\a", "\\b", "\\c", "\\d", "\\e", "\\f", "\\g", "\\h","\\i","\\j","\\k","\\l","\\o","\\m","\\o", "\\p",
"\\q", "\\r", "\\s", "\\t", "\\u", "\\v", "\\y", "\\x",
"\\y", "\\z", "\\", "\\A", "\\B", "\\C", "\\D", "\\E" };

int main()
{
	// Defines the character variable for ASCII 
	char c;

	// For loop for special ACSII characters that are non-visibile range 0 to 31
	for (int count = 0; count < 32; count++)
	{

		// Conditional ensures 16 characters are displayed per line 
		if (count % 16 == 0)
			cout << endl;

		// Outputs the ASCII special characters based on pointer
		cout << specialChar[count] << " ";

	}
	// For loop for remaining ASCII characters range 32 to 127
	for (int count = 32; count <= 127; count++) {

		// Conditional ensures 16 characters are displayed per line
		if (count % 16 == 0)
			cout << endl;

		// Outputs ASCII remaining characters
		cout << c << " ";

		//Increments character count to display ascending ASCII characters
		c++;

		// Last special character is represented as "DEL"
		if (count == 127) {
			cout << "DEL";
		}
	}
	return 0;

}


