#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

int multiply(int z);
int add(int a, int b);
void add_one(int &j);
void output(int arr[]);
void check(int arr[]);

void ex02()
{
	bool hasPassedTest = true;
	srand(time(NULL));
	int x = rand() % 100;
	int y = rand() % 100;
	if (x > y)
		cout << "x=" << x << "     y=" << y << endl << "x is greater than y\n";
	else if (x=y)
		cout << "x=" << x << "     y=" << y << endl << "x is equal to y\n";
	else
		cout << "x=" << x << "     y=" << y << endl << "x is less than y\n";
	cout << "__________________________________________________________________________\n";
	
	int numberOfShares;
	cout << "Please enter the number of shares: \n";
	cin >> numberOfShares;
	if (numberOfShares < 100)
		cout << "Number of shares is less than 100\n";
	else
		cout << "Number of shares is not less than 100\n";
	cout << "__________________________________________________________________________\n";

	int box_width, book_width;
	cout << "Please enter the box width: \n";
	cin >> box_width;
	cout << "Please enter the book width: \n";
	cin >> book_width;
	if (box_width % book_width==0)
		cout << "The box width is evenly divisble by the book width!\n";
	else
		cout << "The box width is not evenly divisble by the book width!\n";
	cout << "__________________________________________________________________________\n";

	double shelf_life, temperature;
	cout << "Please enter the shelf life for the box of chocolate in days: \n";
	cin >> shelf_life;
	cout << "Please enter the outside temperature: \n";
	cin >> temperature;
	if (temperature > 90)
		cout << "The shelf life for the box of chocolate is now " << shelf_life - 4 << " days, due to the high temperature.\n";
	cout << "__________________________________________________________________________\n";
}

void ex03()
{
	double area, diagonal;
	cout << "Please enter the area of a square: \n";
	cin >> area;
	diagonal = (sqrt(area))*(sqrt(2));
	cout << "The diagonal for that square is " << diagonal << endl << "__________________________________________________________________________\n";
	char answer;
	cout << "Please answer yes or no (y or n): \n";
	cin >> answer;
	if (answer = 'y')
		cout << "yes\n";
	else if (answer = 'n')
		cout << "no\n";
	cout << "__________________________________________________________________________\n";

	char tab = '\t';
	string mailingAddress;
	cout << "Please enter your mailing address: \n";
	cin >> mailingAddress;
	cout << "__________________________________________________________________________\n";
}

void ex04()
{
	int valid_ans=0;
	while (valid_ans <= 1 || valid_ans>=10)
	{
		cout << "Please enter a number between 1 and 10: \n";
		cin >> valid_ans;
	}
	cout << "__________________________________________________________________________\n";

	int sum = 0;
	for (int x = 1; x <= valid_ans; x++)
	{
		sum += (pow(x, 3));
	}
	cout << "The sum of the cubes from 1 to your number is " << sum << endl;
	cout << "__________________________________________________________________________\n";

	int n=1;
	do{
		cout << "* ";
		n++;
	} while ( n <= valid_ans);
	cout << endl << "__________________________________________________________________________\n";

	for (int i = 0; i <= 40; i += 2){
		cout << i << ", ";
	}
	cout << endl << "__________________________________________________________________________\n";

	int hey = multiply(valid_ans);
	cout << "Your new integer = " << hey << endl;
	cout << "__________________________________________________________________________\n";

	
	srand(time(NULL));
	int a = rand() % 100;
	int b = rand() % 100;
	int total=add(a, b);
	cout << "The total of the random numbers is " << total << endl;
	cout << "__________________________________________________________________________\n";

	int k = 2;
	cout << "parameter = " << k << endl;
	add_one(k);
	cout << "parameter = " << k << endl;
	cout << "__________________________________________________________________________\n";

}

int multiply(int z)
{
	int ans = z * 2;
	return ans;
}

int add(int a, int b)
{
	cout << a << ", " << b << endl;
	int c = a + b;
	return c;
}

void add_one(int &j)
{
	j++;
}

void ex05()
{
	const int five = 5;
	int integers[five];
	int sum = 0;
	int product = 1;


	cout << "Please enter 5 numbers to get the sum and the product: \n";

	for (int i = 0; i<5; i++)
	{
		cin >> integers[i];
	}

	int j = 0;
	while (j<5)
	{
		sum += integers[j];
		product *= integers[j];
		j++;
	}

	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;
	cout << "__________________________________________________________________________\n";

	output(integers);
	cout << "__________________________________________________________________________\n";

	check(integers);
	cout << "__________________________________________________________________________\n";
}

void output(int arr[])
{
	cout << "Element 0: " << arr[0] << endl;
	cout << "Element 1: " << arr[1] << endl;
	cout << "Element 2: " << arr[2] << endl;
	cout << "Element 3: " << arr[3] << endl;
	cout << "Element 4: " << arr[4] << endl;
}

void check(int arr[])
{
	int check;
	int i = 0;
	cout << "Please enter an integer: \n";
	cin >> check;
	if (check == arr[i])
		cout << "The array contains that integer!\n";
	else
		cout << "Sorry, the array does not contain that integer.\n";

}

int main()
{
	ex02();
	ex03();
	ex04();
	ex05();
	return 0;
}