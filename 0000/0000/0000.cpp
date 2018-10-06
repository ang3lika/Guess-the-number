
#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{ 
	srand(time(NULL));
	int answer = rand()%100;
	int a;
	bool notguessed = true;
	
	while (notguessed) {

		cout << "Hello, guess my number: ";
		cin >> a;

		if (a == answer) {

			cout << "Yeah! You guess the number ;)\n";  
			notguessed = false;

		}
		else if (a > answer) {

			cout << "Ohh no, the number is too high! Please try again\n";

		}
		else if (a < answer) {

			cout << "Not this time, the number is too low\n";

		}
	}


	
	return 0;

}


