
#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	system("color 04");
	SYSTEMTIME tm;
	while (true) {
		Sleep(200); 
		for (int i = 1; i <= 256; i++) 
		{
			if (GetAsyncKeyState(i)) {
				GetLocalTime(&tm);
				cout << tm.wDay << "." << tm.wMonth << "." << tm.wYear << "\n";
				cout << tm.wHour << ":" << tm.wMinute << " >> ID(" << i << ")\n\n";
			}
		}
	}
}




