#include<iostream>
#include<string>
using namespace std;


void ex02()
{
	bool hasPassedTest = 1;
	int x = rand();
	int y = rand();
	if (x > y || x == y)
	{
		cout << "X is greater than y";
	}
	double numberOfShares = 0;
	cout << "Enter number of shares:";
	cin >> numberOfShares;
	if (numberOfShares < 100)
	{
		cout << "The value is less than 100";
	}
	cout << "Enter the shelf life of the box of chocolate: ";
	int shelfLife = 0;
	cin >> shelfLife;
	cout << "Enter outside temperature: " << endl;
	double outsideTemperature = 0;
	cin >> outsideTemperature;
	if (outsideTemperature > 90)
	{
		shelfLife = shelfLife - 4;
	}
}

void ex03()
{
	cout << "Enter the area of a square: " << endl;
	double area = 0;
	cin >> area;
	//find formula output diagonal
	double diagonal = 0;
	cout << "The diagonal is: " << diagonal << endl;
	cout << "Enter y for yes or n for no" << endl;
	char choice = ' ';
	cin >> choice;
	if (choice == 'y')
	{
		cout << "yes" << endl;
	}
	if (choice == 'n')
	{
		cout << "no" << endl;
	}
	//tab character
	char tab = '/t';
	string mailingAddress = " ";
	cout << "Enter your mailing address: " << endl;
	//Empty string what?
	string emptyString = "";
	cout << emptyString << endl;
}

int doublesNumber(int i)
{
	int twice = i * 2;
	return twice;
}

int add(int i, int j)
{
	int sum = i + j;
	return sum;
}

void addOne(int& i)
{
	i = i + 1;
}


void ex04()
{
	int userEntry = 0;
	while (userEntry < 1 && userEntry > 10)
	{
		cout << "Enter a number between 1 and 10: " << endl;
		cin >> userEntry;
	}
	int counter = 1, endCount = 0, sum = 0;
	endCount = userEntry;
	while (counter < userEntry)
	{
		sum = sum + pow(counter, 3);
		counter++;
	}
	cout << "The sum of the cubes is: " << sum;
	counter = 0;
	do
	{
		cout << "*" << endl;
	} while (counter < endCount);
	for (int i = 0; i < 40; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
	
	cout << doublesNumber(userEntry) << endl;
	int randNumbOne = rand();
	int randNumbTwo = rand();
	int summation = add(randNumbOne, randNumbTwo);
	cout << summation << endl;
	int example = 2;
	addOne(example);
}

void ex05()
{
	//finish
}

int main()
{
	cout << "working?" << endl;
	int enter = 0;

	return 0;
}