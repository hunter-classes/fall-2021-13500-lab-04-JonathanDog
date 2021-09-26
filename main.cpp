/*
Author: Jonathan Shnayder
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 4
 
Program will call functions that print shapes/designs on to the screen
*/

#include <iostream>
#include "funcs.h"

int main() {
	std::cout << "--------------------------------------\n";	
	std::cout << "Task A \n\n";
	std::cout << "box(3,5): \n" << box(3,5) << "\n";
	std::cout << "box(8,4): \n" << box(8,4);
	std::cout << "\n--------------------------------------\n";

    std::cout << "Task B \n\n";
    std::cout << "checkerBoard(3, 5): \n" << checkerBoard(3,5) << "\n";
    std::cout << "checkerBoard(8, 4): \n" << checkerBoard(8,4);
    std::cout << "\n--------------------------------------\n";

	std::cout << "Task C \n\n";
    std::cout << "cross(6): \n" << cross(6) << "\n";
    std::cout << "cross(5): \n" << cross(5);
    std::cout << "\n--------------------------------------\n";

	std::cout << "Task D \n\n";
    std::cout << "lower(6): \n" << lower(6) << "\n";
    std::cout << "lower(4): \n" << lower(4);
    std::cout << "\n--------------------------------------\n";

	std::cout << "Task E \n\n";
    std::cout << "upper(6): \n" << upper(6) << "\n";
    std::cout << "upper(5): \n" << upper(5);
    std::cout << "\n--------------------------------------\n";
	
	std::cout << "Task F \n\n";
    std::cout << "trapezoid(12, 5): \n" << trapezoid(12, 5) << "\n";
    std::cout << "trapezoid(5, 3): \n" << trapezoid(5, 3) << "\n";
	std::cout << "trapezoid(12,7): \n" << trapezoid(12, 7);
    std::cout << "\n--------------------------------------\n";

	std::cout << "Task G \n\n";
    std::cout << "checkerboard3x3(16, 11): \n" << checkerboard3x3(16, 11) << "\n";
	std::cout << "checkerboard3x3(27, 27): \n" << checkerboard3x3(27, 27);
    std::cout << "\n--------------------------------------\n";

	return 0;
}
