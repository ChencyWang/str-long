/*By bilibili @Chency_Wang_lzy All rights reserved. Violators will be prosecuted*/
#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <cstring>
int main() {
	while (true == true) {
		std::string s;
		printf("Input string :");
		std::cin >> s;
		const int len = s.size();
		std::cout << len << std::endl;
		Sleep(7000);
		system("cls");
	}
	return 0;
}