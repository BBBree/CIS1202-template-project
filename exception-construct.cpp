//Brianna Persinger
//CIS1202 s.201
//4-28-24
//This program

#include<iostream>
using namespace std;

char character(char start, int offset);



int main()
{
	char letter; //input 
	int offsetAmt; //input
	string exceptionThrown;
	bool marker = false; //to keep status of if exception was thrown, for loops

	//Try block to collect a letter and offset from user
	try
	{
		cout << "Please enter a starting letter: ";
		cin >> letter;
		cout << "\nPlease enter amount to offset amount: ";
		cin >> offsetAmt;
		character(letter, offsetAmt); //Function call to test user data
	}



	//Catch an error for invalid range
	catch (string invalidRangeException)
	{
		marker = true;
		invalidRangeException;
	}
	//Catch an error for invalid letter entered
	//catch (string invalidCharacterException)
	//{
	//	marker = true;
	//	invalidCharacterException;
	//}



	cout << endl << endl;
	system("pause");
	return 0;
}


char character(char start, int offset)
{
	//creates a variable to return if valid
	int result = start + offset;
	//these strings will hold exceptions to throw for errors
	string
		invalidCharacterException =
		"ERROR: You have entered an invalid character.",
		invalidRangeException =
		"ERROR: The result is out of range.";


	//IF/ELSE block for start character evaluation
	//and result evaluation

	//Evaluate if start is lowercase
	if (start >= 'a' && start <= 'z')
	{
		//Perform this block if start is lowercase
		//Evaluate if result is within range
		if (result < 'a' || result > 'z')
		{
			throw invalidRangeException;
		} //throw message if result is invalid

		else
		{
			return result;
		} //return result if it is valid
	}

	//If start is not lowercase, evaluate if it is uppercase
	else if (start >= 'A' && start <= 'Z')
	{
		//Perform this block if start is uppercase
		//Evaluate if result is within range
		if (result < 'A' || result > 'Z')
		{
			throw invalidRangeException;
		} //throw message if result is invalid
	}

	else //If start is not a letter, perform this block
	{
		throw invalidCharacterException;
	} //throw message if an invalid character is entered




	if (start >= 'A' && start <= 'Z')
	{
		if (start + offset < 'A' || start + offset > 'Z')
		{
			throw "The result is out of range.";
		}
		else
		{
			return start;
		}
	}
	else
	{
		throw "You have entered an invalid character.";
	}
}