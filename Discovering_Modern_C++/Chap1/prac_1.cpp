#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	cout << "How old are you? ";
	int age;
	cin >> age;
	cout << "You are " << age << " years old." << endl;
	ofstream fout;
	fout.open("age.txt");
	if (fout.good())
		fout << "You are " << age << " years old." << endl;
	fout.close();
	return 0;
}
