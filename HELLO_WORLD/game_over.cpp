/*
GAME OVER
The first C++ programm
*/ 
#include <iostream>
#include <string>
int main() {
	int age = 26;
	std::string txtAge = "years old";
	std::string name = "Roman";
	std::string finish = "Game Over";

	std::cout << finish << ", " << name 
		<< ", " << age << ' ' << txtAge
		<< '!' << std::endl;
	return 0;
}