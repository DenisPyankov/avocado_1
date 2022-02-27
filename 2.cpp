#include <iostream>
#include <string>
using namespace std;

struct Student {
	int age;
	string name;
	string drink;
};

int main()
{

	cout << "number of students" << endl;
	int x;
	cin >> x;
	Student* s = new Student[x];
	int max = -12435;
	string maxi = "";

	for (int i = 0; i < x; i++) {
		cout << "age ";
		cin >> s[i].age;
		cout << "name ";
		cin.get();
		getline(cin, s[i].name);
		cout << "drink ";
		cin.get();
		getline(cin, s[i].drink);
		if (max < s[i].age) 
			max = s[i].age;
	}

	cout << max << endl;
	for (int i = 0; i < x; i++) {
		if (max == s[i].age)
			cout << s[i].name << endl;
	}

}
