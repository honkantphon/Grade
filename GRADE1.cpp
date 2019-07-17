#include <iostream>
using namespace std;
int main()
{
	int score;
	cout <<  "Enter score : ";
	cin >> score ;
	cout << "Your  Grade is   :   ";
	
	if (score>=101) {
		cout << "Error \n";
	}
	
	else if (score>=90) {
		cout << "Grade A  \n";
	}

	else if (score>=80) {
		cout << "\nGrade B  \n";
	}
	else if (score>=70) {
		cout << "\nGrade C  \n";
	}
	else if (score>=60) {
		cout << "\nGrade D  \n";
	}
	else if (score<=59) {
		cout << "\nGrade  F \n";
	}
	
	return (0);
}