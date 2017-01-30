#include<iostream>
using namespace std;


int main() {


	int remainder;
	int amount;

	cout << "How much money do you want to take out" << endl;
	cin >> amount;
	remainder = amount - 10000;
	cout << "you have " << remainder << "in your bank account";

}