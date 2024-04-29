//Brianna Persinger
//CIS1202 - C++ Dev. I
//4-28-24
//This project will demonstrate the use of a template 
//which is able to accept more than one data type.
//Int type will have it's own construction.


#include <iostream>
#include <iomanip>

using namespace std;

//This template will work with floats and doubles
template <typename type>
type half(type num)
{
	return num / 2;
}

//This template (function) will work with ints

int halfInt(int num)
{
	return num / 2;
}



int main()
{

	//create variables which will be passed as parameters into the functions
	double doubleNum = 5;
	float floatNum = 20;
	int intNum = 7;

	//print the operations
	cout << doubleNum << ", a double, halved is " << half(doubleNum) << endl;
	cout << floatNum << ", a float halved is " << half(floatNum) << endl;
	
	//sets the value of intNum halved to a new integer
	int newIntNum = halfInt(intNum);

	//evaluates if the value is a whole number
	if (newIntNum != floor(newIntNum))
	{
		newIntNum = static_cast<int>(round(newIntNum)); //if the value is not a whole number, round it
	}

	//print the operation
	cout << intNum << ", an int, halved is " << newIntNum;



	cout << endl << endl;
	system("pause");
	return 0;

}