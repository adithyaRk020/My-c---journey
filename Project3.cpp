#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {

	int num, guess;
	int tries=0;

	srand(time(NULL));
	num = (rand() % 100) + 1;

	cout << "******************NUMBER GUESSING GAME******************\n";

	do {

		cout << "Enter a guess between (1-100):";
		cin >> guess;
		tries++;

		if (guess > num) {

			cout<<"Too high!!!!\n";

		}
		else if (guess < num) {

			cout << "Too low!!!!\n";

		}
		else {

			cout << "Correct try" << tries << '\n';

		}
		if(guess < 1 || guess > 100) {

			cout << "Enter valid input!!!!!!!!!!\n";

		}

	} while (guess != num);

	cout << "*****************************************************\n";

	return 0;
}