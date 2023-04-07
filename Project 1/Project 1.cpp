// Project 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;


int start();
void add();
void sub();
void multi();
void div();
void radical();
void power();
void prime();
void sort();
void pascal();
void phi();
void gcd();
void lcm();
void game();
long long int bast(int, int);
long long int fac(long long int);


int main()
{
	cout << "Welcome to Achromo-Calculator!" << endl;
	start();
	return 0;
}


int start() {
	cout << "Please enter a number from below:\n";
	cout << "1. Aggregation action\n" << "2. Subtraction action\n" << "3. Multiplication\n" << "4. Division\n" << "5. Square root\n" << "6. Power\n" << "7. Prime Number check\n" << "8. Sort\n" << "9. Pascal's pyramid\n" << "10. Phi\n" << "11. Greatest Common Divisor (GCD)\n" << "12. Least Common Multiple (LCM)\n" << "13. Game!\n.\n.\nyou cant quit by entering '0'\n\n";
	int a;
	cin >> a;
	while (a < 0 || a > 13) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: ";
		}
		cin >> a;
	}
	switch (a)
	{
	case 1:
		system("CLS");
		add();
		break;
	case 2:
		system("CLS");
		sub();
		break;
	case 3:
		system("CLS");
		multi();
		break;
	case 4:
		system("CLS");
		div();
		break;
	case 5:
		system("CLS");
		radical();
		break;
	case 6:
		system("CLS");
		power();
		break;
	case 7:
		system("CLS");
		prime();
		break;
	case 8:
		system("CLS");
		sort();
		break;
	case 9:
		system("CLS");
		pascal();
		break;
	case 10:
		system("CLS");
		phi();
		break;
	case 11:
		system("CLS");
		gcd();
		break;
	case 12:
		system("CLS");
		lcm();
		break;
	case 13:
		system("CLS");
		game();
		break;
	case 0:
		return 0;
		break;
	}
}
void add() {
	cout << "\nHow many numbers you want to add?\n";
	int j;
	cin >> j;
	while (j < 2) {
		try {
			throw 002;
		}
		catch (int x) {
			cout << "Error " << x << "! you can add at least 2 numbers.\n\nHow many numbers you want to add?\n";
		}
		cin >> j;
	}
		cout << "Please enter your numbers in each line: \n";
	float a;
	long double sum = 0;
	for (int i = 0; i < j; i++) {
		cin >> a;
		if (a > 1000|| a < -1000) {
			try {
				throw 003;
			}
			catch (int x) {
				cout << "Error " << x << "! numbers should be smaller than 1000 and greater than -1000. please enter an other number:\n";
				i--;
			}
		}
		else {
			sum += a;
		}
	}
	cout << "your answer is: " << sum << endl;
	cout << "to add numbers again enter \"1\" or to return to main menu enter \"0\"\n";
	int c;
	cin >> c;
	while (c<0 ||c>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	switch (c) {
	case 1:
		system("CLS");
		add();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
void sub() {
	cout << "\nHow many numbers you want to sub?\n";
	int j;
	cin >> j;
	while (j < 2) {
		try {
			throw 002;
		}
		catch (int x) {
			cout << "Error " << x << "! you can sub at least 2 numbers.\n\nHow many numbers you want to add?\n";
		}
		cin >> j;
	}
	cout << "Please enter your numbers in each line: \n";
	float a;
	long double num = 0;
	for (int i = 0; i < j; i++) {
		cin >> a;
		if (i ==0) {
			num = a;
		}
		else {
			num -= a;
		}
			if (a > 1000 || a < -1000) {
				try {
					throw 003;
				}
				catch (int x) {
					cout << "Error " << x << "! numbers should be smaller than 1000 and greater than -1000. please enter an other number:\n";
					i--;

				}
				continue;
			}
	}
	cout << "your answer is: " << num << endl;
	cout << "to sub numbers again enter \"1\" or to return to main menu enter \"0\"\n";
	int c;
	cin >> c;
	while (c<0 || c>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	switch (c) {
	case 1:
		system("CLS");
		sub();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
void multi() {
	cout << "\nHow many numbers you want to multiply?\n";
	int j;
	cin >> j;
	while (j < 2) {
		try {
			throw 002;
		}
		catch (int x) {
			cout << "Error " << x << "! you can multiply at least 2 numbers.\n\nHow many numbers you want to multiply?\n";
		}
		cin >> j;
	}
	cout << "Please enter your numbers in each line: \n";
	float a;
	long double sum = 1;
	for (int i = 0; i < j; i++) {
		cin >> a;
		if (a > 1000 || a < -1000) {
			try {
				throw 003;
			}
			catch (int x) {
				cout << "Error " << x << "! numbers should be smaller than 1000 and greater than -1000. please enter an other number:\n";
				i--;
			}
		}
		else {
			sum *= a;
		}
	}
	cout << "your answer is: " << sum << endl;
	cout << "to multiply numbers again enter \"1\" or to return to main menu enter \"0\"\n";
	int c;
	cin >> c;
	while (c<0 || c>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	switch (c) {
	case 1:
		system("CLS");
		multi();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
void div() {
	cout << "Please enter 2 numbers. first number will be divided to second one.\n";
	float a, b;
	long double num;
	cin >> a >> b;
	if (a > 1000 || a < -1000 || b > 1000 || b < -1000) {
		try {
			throw 003;
		}
		catch (int x) {
			cout << "Error " << x << "! numbers should be smaller than 1000 and greater than -1000.\n";
			div();
		}
	}
	if (b == 0 && a!=0) {
		try {
			throw 004;
		}
		catch (int x) {
			cout << "Error " << x << "! numbers can not be divided to \"0\".\n";
		}
		div();
	}
	else if (a!=0 && b!=0) {
		num = a / b;
		cout << "your answer is " << num << endl;
		cout << "to divide numbers again enter \"1\" or to return to main menu enter \"0\"\n";
		int c;
		cin >> c;
		while (c<0 || c>1) {
			try {
				throw 001;
			}
			catch (int x) {
				cout << "Error " << x << "! Number not Found.\n";
				cout << "Please enter a number: \n";
			}
			cin >> c;
		}
		switch (c) {
		case 1:
			system("CLS");
			div();
			break;
		case 0:
			system("CLS");
			start();
			break;
		}
	}
	else {
		num = 0;
		cout << "your answer is " << num << endl;
		cout << "to divide numbers again enter \"1\" or to return to main menu enter \"0\"\n";
		int c;
		cin >> c;
		while (c<0 || c>1) {
			try {
				throw 001;
			}
			catch (int x) {
				cout << "Error " << x << "! Number not Found.\n";
				cout << "Please enter a number: \n";
			}
			cin >> c;
		}
		switch (c) {
		case 1:
			system("CLS");
			div();
			break;
		case 0:
			system("CLS");
			start();
			break;
		}
	}
}
void radical() {
	cout << "Please enter a number:\n";
	float a;
	cin >> a;
	if (a > 1000) {
		try {
			throw 003;
		}
		catch (int x) {
			cout << "Error " << x << "! numbers should be smaller than 1000.\n";
			radical();
		}
	}
	if (a < 0) {
		try {
			throw 005;
		}
		catch (int x) {
			cout << "Error " << x << "! you entered a negative number!!\n";
			radical();
		}
	}
	cout << "your answer is: " << sqrt(a) << endl;
	cout << "to do this again enter \"1\" or to return to main menu enter \"0\"\n";
	int c;
	cin >> c;
	while (c<0 || c>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	switch (c) {
	case 1:
		system("CLS");
		radical();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
void power() {
	cout << "Please enter 2 numbers, frst number to the power of second number\n";
	double x, y;
	cin >> x >> y;
	if (x > 1000 || y>1000 || x<-1000 || y<-1000) {
		try {
			throw 003;
		}
		catch (int x) {
			cout << "Error " << x << "! numbers should be smaller than 1000 and greater than -1000.\n";
			power();
		}
	}
	cout << "your answer is: " << pow(x, y) << endl;
	cout << "to do this again enter \"1\" or to return to main menu enter \"0\"\n";
	int c;
	cin >> c;
	while (c<0 || c>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	switch (c) {
	case 1:
		system("CLS");
		power();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
void prime() {
	cout << "Pime chek!\ncheck if the number is prime or not.\nPlease enter a number:\n";
	int n;
	cin >> n;
	if (n > 1000 || n<2) {
		try {
			throw 003;
		}
		catch (int x) {
			cout << "Error " << x << "! numbers should be smaller than 1000 and greater than 2.\n";
			prime();
		}
	}
	int i = 0, s = 2, a = sqrt(n);
	while (s <= a) {
		if (n%s == 0) {
			i++;
			s++;
		}
		else {
			s++;
		}
	}
	if (i == 0) {
		cout << "that is a prime number!" << endl;
	}
	else {
		cout << "that is not a prime number!" << endl;
	}
	cout << "to check an other number, enter \"1\" or to return to main menu enter \"0\"\n";
	int c;
	cin >> c;
	while (c<0 || c>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	switch (c) {
	case 1:
		system("CLS");
		prime();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
void sort() {
	cout << "sort numbers!\nHow many numbers you want to sort?\n";
	int a, temp;
	cin >> a;
	int *n;
	n = new int [a];
	cout << "Please enter your numbers:\n";
	for (int i = 0; i < a; i++) {
		cin >> n[i];
		if (n[i] > 1000 || n[i] < -1000) {
			try {
				throw 003;
			}
			catch (int x) {
				cout << "Error " << x << "! numbers should be smaller than 1000 and greater than -1000. please enter an other number:\n";
				i--;
			}
		}
	}
	bool f = true;
	cout << "choose an option:\n" << "1. sorting ascending\n" << "2. sorting descending\n";
	int c;
	cin >> c;
	while (c<1 || c>2) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	if (c == 1) {
		for (int i = 1; i < a && f; i++) {
			f = false;
			for (int j = 0; j < a - 1; j++) {
				if (n[j + 1] < n[j]) {
					temp = n[j + 1];
					n[j + 1] = n[j];
					n[j] = temp;
					f = true;
				}
			}
		}
	}
	else if (c == 2) {
		for (int i = 1; i < a && f; i++) {
			f = false;
			for (int j = 0; j < a - 1; j++) {
				if (n[j + 1] > n[j]) {
					temp = n[j];
					n[j] = n[j + 1];
					n[j + 1] = temp;
					f = true;
				}
			}
		}
	}
	cout << "Here is your output:\n";
	for (int i = 0; i < a; i++) {
		cout << n[i] << " ";
	}
	cout << "\nto sort numbers again, enter \"1\" or to return to main menu enter \"0\"\n";
	cin >> c;
	while (c<0 || c>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	switch (c) {
	case 1:
		system("CLS");
		sort();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
void pascal() {
	cout << "Please enter \"n\" to make the pyramid:\n";
	int n;
	cin >> n;
	if (n < 2 || n > 13 ) {
		try {
			throw 003;
		}
		catch (int x) {
			cout << "Error " << x << "! numbers should be at least 2 and at last 13.\n";
			pascal();
		}
	}
	int j = 0,h;
	for (int i = 0; i < n - j; j++) {
		h = j;
		for (int t = 0; t < n - h; h++) {
			cout << " ";
		}
		for (int k = 0; k <= j; k++) {
			cout << bast(j, k) << " ";
		}
		cout << endl;
	}
	cout << "\nto do this again, enter \"1\" or to return to main menu enter \"0\"\n";
	int c;
	cin >> c;
	while (c<0 || c>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	switch (c) {
	case 1:
		system("CLS");
		pascal();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
void phi() {
	cout << "phibonatchi members.from beginning to member 'n'\nPlease enter 'n':\n";
	int n;
	cin >> n;
	if (n > 1000 || n<3) {
		try {
			throw 003;
		}
		catch (int x) {
			cout << "Error " << x << "! numbers should be smaller than 1000 and greater than 3.\n";
			phi();
		}
	}
	int a = 1, b = 1;
	long long unsigned int c;
	cout << "1 1 ";
	for (int i = 1; i <= n - 2; i++) {
		c = a + b;
		a = b;
		b = c;
		cout << c << " ";
	}
	cout << endl;
	
	cout << "to do this agin, enter \"1\" or to return to main menu enter \"0\"\n";
	int t;
	cin >> t;
	while (t<0 || t>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> t;
	}
	switch (t) {
	case 1:
		system("CLS");
		phi();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
void gcd() {
	cout << "Please enter 2 numbers:\n";
	long int a, b, temp;
	cin >> a >> b;
	if (a > 1000 || b>1000 || a<-1000 || b<-1000) {
		try {
			throw 003;
		}
		catch (int x) {
			cout << "Error " << x << "! numbers should be smaller than 1000 and greater than -1000.\n";
			gcd();
		}
	}
	long int bmm;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	bmm = a%b;
	if (bmm != 0) {
		while (a%b>0) {
			bmm = a%b;
			a = b;
			b=bmm;
		}
		cout << "Greatest common divisor is: " << bmm << endl;
	}
	else {
		cout << "Greatest common divisor is: " << b << endl;
	}
	cout << "to do this again, enter \"1\" or to return to main menu enter \"0\"\n";
	int c;
	cin >> c;
	while (c<0 || c>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	switch (c) {
	case 1:
		system("CLS");
		gcd();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
void lcm() {
	cout << "Please enter 2 numbers:\n";
	long int a, b, n, m, temp;
	cin >> a >> b;
	if (a > 1000 || b>1000 || a<-1000 || b<-1000) {
		try {
			throw 003;
		}
		catch (int x) {
			cout << "Error " << x << "! numbers should be smaller than 1000 and greater than -1000.\n";
			lcm();
		}
	}
	n = a;
	m = b;
	long int bmm, kmm;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	bmm = a%b;
	if (bmm != 0) {
		while (a%b>0) {
			bmm = a%b;
			a = b;
			b = bmm;
		}
	}
	else {
		bmm = b;
	}
	kmm = n / bmm*m;
	cout << "Least common mutiple is: " << kmm << endl;
	cout << "to do this again, enter \"1\" or to return to main menu enter \"0\"\n";
	int c;
	cin >> c;
	while (c<0 || c>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	switch (c) {
	case 1:
		system("CLS");
		lcm();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
void game() {
	cout << "Lets make a LoZenge!\nPlease enter the diameter size: ";
	int n;
	cin >> n;
	char **a;
	a = new char*[2*n+1];
	for (int i = 0; i < 2*n+1; i++) {
		a[i] = new char[2*n+1];
	}
	for (int i = 0; i < 2 * n + 1; i++) {
		for (int j = 0; j < 2 * n + 1; j++) {
			a[i][j] = ' ';
		}
	}
	for (int i = 0; i < n + 1; i++) {
		int p = 0;
		for (int j = i; j < n + 1 + i; j++) {
			int k = n + i - p;
				a[j][k] = '*';
				p++;
		}
	}
	for (int i = 0; i < 2 * n + 1; i++) {
		for (int j = 0; j < 2 * n + 1; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}
	cout << "play again :), enter \"1\" or to return to main menu enter \"0\"\n";
	int c;
	cin >> c;
	while (c<0 || c>1) {
		try {
			throw 001;
		}
		catch (int x) {
			cout << "Error " << x << "! Number not Found.\n";
			cout << "Please enter a number: \n";
		}
		cin >> c;
	}
	switch (c) {
	case 1:
		system("CLS");
		game();
		break;
	case 0:
		system("CLS");
		start();
		break;
	}
}
long long int bast(int n, int r) {
	if (n == r || r == 0) {
		return 1;
	}
	else {
		return fac(n) / (fac(r)*fac(n - r));
	}
}
long long int fac(long long int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n*fac(n - 1);
	}
}