#include <iostream>
#include <string>
using namespace std;

string numToWord(int num);

int main()
{
	string bottle = "";
	for(int i = 99; i > 0; i--)
	{

			cout << numToWord(i) << bottle << "of beer on the wall, " << endl
				 << numToWord(i) << bottle << "of beer. You take one down, pass it around, " << endl;

		if(i-1 == 1)
			bottle = " bottle ";
		else
				bottle = " bottles ";

			cout << numToWord(i-1) << bottle << "of beer on the wall." << endl << endl; 
	}

	return 0;
}

string numToWord(int num)
{
	int ones = 0;
	int tens = 0;
	string word ="";

	tens = num / 10;
	ones = num % 10;

	if(tens == 0 && ones >= 0)
	{
		switch(ones)
		{
		case 0:
			word += "zero"; 
		 break;
		case 1:
			word += "one"; 
		 break;
		case 2:
			word += "two"; 
		 break;
		case 3:
			word += "three"; 
		 break;
		case 4:
			word += "four"; 
		 break;
		case 5:
			word += "five"; 
		 break;
		case 6:
			word += "six"; 
		 break;
		case 7:
			word += "seven"; 
		 break;
		case 8:
			word += "eight"; 
		 break;
		case 9:
			word += "nine"; 
		 break;
		}
	}

		if(tens == 1 && ones >= 0)
	{
		switch(ones)
		{
		case 0:
			word += "ten"; 
		 break;
		case 1:
			word += "eleven"; 
		 break;
		case 2:
			word += "twelve"; 
		 break;
		case 3:
			{
				word += "thir";
			}
			break;
			case 4:
			{
				word += numToWord(ones);
			}
			break;
		case 5:
			{
				word += "fif";
			}
			break;
			case 6:
			{
				word += numToWord(ones);
			}
			break;
			case 7:
			{
				word += numToWord(ones);
			}
			break;
			case 8:
			{
				word += "eigh";
			}
			break;
			case 9:
			{
				word += numToWord(ones);
			}
			break;
		}
	}

		if(tens == 1 && ones > 2)
	{
		word += "teen";
	}

	if(tens > 1 && ones == 0)
	{
		switch(tens)
		{
		case 2:
			word += "twenty "; 
		 break;
		case 3:
			word += "thirty "; 
		 break;
		case 4:
			word += "fourty "; 
		 break;
		case 5:
			word += "fifty "; 
		 break;
		case 6:
			word += "sixty "; 
		 break;
		case 7:
			word += "seventy "; 
		 break;
		case 8:
			word += "eighty "; 
		 break;
		case 9:
			word += "ninety "; 
		 break;
		}
	}

	if(tens > 1 && ones > 0)
	{
		word += numToWord(tens * 10);
		word += numToWord(ones);
	}

	return word;
}
