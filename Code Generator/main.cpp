#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	system("color 0a");

	string line;
	ifstream in("code.txt");
	if (in.is_open()) {
		while (getline(in, line)) {
			for (int i = 0; i < line.size(); i++) {
				_getch();
				Sleep(5);
				cout << line[i];
			}
			cout << endl;
		}
	}
	else {
		cout << "File not found (code.txt)!" << endl;
		cout << "Creating a new file (code.txt)!" << endl;
		ofstream newfile ("code.txt");
			newfile << "Put the code here" << endl;
		newfile.close();
	}
	Sleep(5000);
}

