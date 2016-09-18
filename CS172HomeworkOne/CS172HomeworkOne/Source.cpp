//Name: Alyssa La Fleur
//Class: CS 172
//Homework: #1
//Due Date: 9/20/16
//Exercises 01_01-01_04

#include<iostream>
#include<string>
using namespace std;

//EX01_01:
//ex02 void function with no inputs 
void ex02()
{
	//a) declare hasPassedTest, and initialize it to true
	bool hasPassedTest = true;
	//b) Declare x and y as two random numbers, then output which is larger
	//Decleration of variables
	int x = rand();
	int y = rand();
	//If statement to outut if x is greater than or equal to y
	if (x > y || x == y)
	{
		cout << "X is greater than y" << endl;
	}
	else
	{
		cout << "X is not greater than y" << endl;
	}
	//c) Declaring the numberOfShares, having the user input a value for it, and then outputting if it is less than 100
	//Declaring the variable
	double numberOfShares = 0;
	//Getting user input for value
	cout << "Enter number of shares:" << endl;
	cin >> numberOfShares;
	//If statement to determin if the value is less than 100 and if so output that it is
	if (numberOfShares < 100)
	{
		cout << "The value is less than 100" << endl;
	}
	else
	{
		cout << "The value is not less than 100" << endl;
	}
	//d) Prompts user for box and book width, then determines if the box width is evenly divisible by the book width
	//Declaring variables, getting user entry for both values
	int boxWidth = 0, bookWidth = 0;
	cout << "Enter box width: " << endl;
	cin >> boxWidth;
	cout << "Enter book width: " << endl;
	cin >> bookWidth;
	//if-else statements using modulus to determine if the box width is evenly divisible by the book width, and outputting the result
	if (boxWidth % bookWidth == 0)
	{
		cout << "The box width is evenly divisible by the book width" << endl;
	}
	else
	{
		cout << "The box width is not evenly divisible by the book width." << endl;
	}
	//e) Getting shelf life of a box of chocolate and reducing it by four if the value is over 90
	//Asking for user input
	cout << "Enter the shelf life of the box of chocolate: ";
	//declaring variable
	int shelfLife = 0;
	//Getting value
	cin >> shelfLife;
	//Repeat process for temperature
	cout << "Enter outside temperature: " << endl;
	double outsideTemperature = 0;
	cin >> outsideTemperature;
	//if statement to determine if the shelf life will be reduced
	if (outsideTemperature > 90)
	{
		shelfLife = shelfLife - 4;
		cout << "Shelf life is now" << shelfLife << endl;
	}
	else
	{
		cout << "The Shelf life is unchanged" << endl;
	}
}

//EX01_02:
//ex03 void function with no inputs
void ex03()
{
	//a)Prompts user for area of square and outputs diagonal for that square
	//Declaring variables, and getting length of square
	cout << "Enter the area of a square: " << endl;
	double area = 0;
	cin >> area;
	//finding diagonal length from area
	double diagonal = sqrt(area)*sqrt(2);
	//Outputting diagonal length
	cout << "The diagonal is: " << diagonal << endl;
	//b)Prompts user for y/n entry, then outputs yes for y and no for n
	//Prompting user to enter y/n
	cout << "Enter y for yes or n for no" << endl;
	char choice = ' ';
	cin >> choice;
	//Two if statements to output if y or n was entered, with y outputting yes and n outputting no
	if (choice == 'y')
	{
		cout << "Yes" << endl;
	}
	if (choice == 'n')
	{
		cout << "No" << endl;
	}
	//c) Initializing a variable 'tab' to the tab character
	char tab = '/t';
	//d)Declare a string mailingAddress, and prompt user to enter their address
	//Declaring variable
	string mailingAddress = " ";
	//Prompting user to enter address
	cout << "Enter your mailing address: " << endl;
	cin >> mailingAddress;
	//d) Initialize a string variable to the emtpy string
	string emptyString = "";
}

//Functions for EX01_03:
//Function to double a integer input, input of a int, output of a int
int doublesNumber(int i)
{
	int twice = i * 2;
	return twice;
}

//Function to add two integers, input of an int, output of the int plus one
int add(int i, int j)
{
	int sum = i + j;
	return sum;
}

//Function to add one to an integer using pass by reference, input of an int, no output
void addOne(int& i)
{
	i = i + 1;
}

//EX01_03:
//Void function ex04 with no inputs
void ex04()
{
	//a)Ask a user for input between 1 and 10, loop until correct value is entered
	//Declaring user entry variable
	int userEntry = 0;
	//Loop for initial entry, and subsequent re entries if applicable
	while (userEntry < 1 || userEntry > 10)
	{
		cout << "Enter a number between 1 and 10: " << endl;
		cin >> userEntry;
	}
	//b) Output the sum of the cubes of number from a)
	//Declaring variables for loop
	double counter = 1, endCount = 0, sum = 0;
	endCount = userEntry;
	//while loop using counter variables to add up the sums of the cubes
	//if statement to deal with the case of entry is 1
	if (counter == userEntry)
	{
		sum = 1;
	}
	while (counter < userEntry)
	{
		sum = sum + pow(counter, 3);
		counter++;
	}
	//Outputting the sum of the cubes
	cout << "The sum of the cubes is: " << sum << endl;
	//C) Output a number of asterisks equal to the number from a) using a do-while loop
	//Resetting coutner variable
	counter = 0;
	//Do while loop, with same end condition as above
	do
	{
		cout << "*";
		counter++;
	} while (counter < endCount);
	cout << endl;
	//d) A loop to output the even numbers between 2 and 40
	//For loop to ouput numbers
	for (int i = 2; i < 41; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
	//e)Using a separate function to double the user entry
	cout << "The number doubled is " << doublesNumber(userEntry) << endl;
	//f) Using a separate function that adds to integers on two random numbers
	//Declaring and initializign random numbers
	int randNumbOne = rand();
	int randNumbTwo = rand();
	//Calling the function on the two numbers
	int summation = add(randNumbOne, randNumbTwo);
	cout << "The sum of two random numbres is " << summation << endl;
	//g) Adding one to a number using pass by reference in a separate function
	//Declaring a test variable
	int example = 2;
	//Using the function to add one with pass by reference
	addOne(example);
	cout << "Example pass by reference value is " << example << endl;
}

//Function for ex05 for array display
//void function to display all elements of an array, input array, size of array, no output
void arrayDisplay( int exarray[], int exArraySize)
{
	for (int i = 0; i < exArraySize; i++)
	{
		cout << exarray[i] << " ";
	}
}

//Function for ex05 for determining if a value is in an array
void arrayLocate(int exArray[], int exArraySize)
{
	//Prompting user to enter value to locate
	cout << "Enter integer value to determine if array contains: " << endl;
	int locate = 0;
	cin >> locate;
	int counter = 0, endCount = exArraySize;
	//While loop to determine if the number is contained in the array
	for (int i = 0; i < exArraySize; i++)
	{
		int testAgainst = exArray[i];
		if (testAgainst == locate)
		{
			cout << "The value is in the array" << endl;
		}
		else
		{
			cout << "The value is not in the array" << endl;
		}
	}
}

//EX01_05:
//void function ex05 with no inputs and no returned values
void ex05()
{
	//a) Loop to ask for five integers from user and store in array
	const int LIMIT = 4;
	int intArray[LIMIT];
	int counter = 0, countEnd = 5;
	while (counter < countEnd)
	{
		cout << "Enter a integer: " << endl;
		cin >> intArray[counter];
		counter++;
	}
	//b)Code to output sum and product of stored integers
	//Declaring variables
	int sum = 0, product = 1;
	//Resetting counter variable
	counter = 0;
	//While loop to find sum of integers
	while (counter < countEnd)
	{
		sum = sum + intArray[counter];
		counter++;
	}
	//Displaying the sum of the integers
	cout << "The sum of the integers is " << sum << endl;
	//While loop to find the product of the integers
	//Resetting counter
	counter = 0;
	while (counter < countEnd)
	{
		product = product * intArray[counter];
		counter++;
	}
	//Displaying product of integers
	cout << "The product of the integers is " << product << endl;
	//c) Calling array displaying function on array
	arrayDisplay(intArray, 5);
	cout << endl;
	//d) Calling function to determine if value is in an array
	arrayLocate(intArray, 5);
}

int main()
{
	//Calling all exercises to run
	ex02();
	ex03();
	ex04();
	ex05();
	return 0;
}