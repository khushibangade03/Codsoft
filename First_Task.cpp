#include <iostream>
using namespace std;
int main()
{
	cout << "The Number is choosen between 1 to 25 you have 5 trials to guess the number" << endl;
	int number = (rand() % 25) + 1;
	int k = 5;
	for (int i = 1; i <= k; i++)
	{
		cout << " Trial " << i << endl;
		cout << "Guess the Number" << endl;
		int input;
		cin >> input;
		if (input > number)
		{
			cout << "Oops!! You are Wrong" << endl;
			cout << "The number you have guessed is greater than actual number" << endl;
		}
		else if (input < number)
		{
			cout << "Oops!! You are Wrong" << endl;
			cout << "The number you have guessed is lesser than actual number" << endl;
		}
		else
		{
			cout << "Congratulations!!" << endl;
			cout << " You are Correct" << endl;
			break;
		}
	}
}
