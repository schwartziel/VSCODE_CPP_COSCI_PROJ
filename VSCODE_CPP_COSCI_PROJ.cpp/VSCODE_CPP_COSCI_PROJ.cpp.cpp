#include <iostream>
#include <cmath>
#include <string>
#include <math.h>

int main() {

	// This is a user friendly program that stores a few values, does a few calculations and then prints the result
	// they're all just basic area, perimiter, and radius instructions to test cpp libraries in vscode.

	int choice_of_shape = 0;
	std::cout << "welcome to geoCPP, a geometry calculator for c++!" << std::endl;
	std::cout << "please enter a number 1-3 to select the shape you would like to calculate values for..." << std::endl;
	std::cout << "select '1' for squares. " << std::endl;
	std::cout << "select '2' for triangles. " << std::endl;
	std::cout << "select '3' for circles. " << std::endl;
	std::cin >> choice_of_shape;
	//geometry for squares 
	if (choice_of_shape == 1) {
		int choice_calculation_square = 0;
		std::cout << "you have selected square geometry." << std::endl;
		std::cout << "please enter the type of value you would like to calculate." << std::endl;
		std::cout << "please enter '1' for perimeter calculation." << std::endl;
		std::cout << "please enter '2' for area calculation ." << std::endl;
		std::cin >> choice_calculation_square;
		if (choice_calculation_square == 1) {
			int perimiter_side = 0;
			std::cout << "you have entered calculation for perimiter of a square!" << std::endl;
			std::cout << "please enter a value, this program will calculate the perimiter for a square.";
			std::cin >> perimiter_side;
			std::cout << "the perimiter of the square is..." << perimiter_side + perimiter_side << std::endl;
		}
		else if (choice_calculation_square == 2) {
			int area_side = 0;
			std::cout << "you have entered calculation for area of a square!" << std::endl;
			std::cout << " please enter a value, this program will calculate the area for a square. " << std::endl;
			std::cin >> area_side;
			std::cout << "the area of the square is... " << area_side * area_side << std::endl;
		}
		else {
			std::cout << "this program doesn't support that at this time" << std::endl;
		}
	}
	//geometry for triangles
	else if (choice_of_shape == 2){
		int triangle_choice = 0;
		std::cout << "you have entered geometry for triangles!" << std::endl;
		std::cout << "please enter '1' to use the pythagorean theorem portal" << std::endl;
		std::cout << "please enter '2' to enter the trigonometry portal." << std::endl;
		std::cin >> triangle_choice; 
		//pythagorean theorem 
		if (triangle_choice == 1) {
			double pythag_a = 0;
			double pythag_b = 0;
			double pythag_c = 0;
			std::cout << "you have choosen to use the pythagorean theorem portal." << std::endl;
			std::cout << "this program will take two values and find the third vaule using the pythagorean theorem" << std::endl; 
			std::cout << "a & b values represent side lengths and c represents a hypotenuse length." << std::endl;
			std::cout << "enter an integer > 0 for two values and either enter 0 or enter when prompted to find the third value." << std::endl;
			std::cout << "please enter a value for a... (if you are looking to find this side leave blank or enter 0)" << std::endl;
			std::cin >> pythag_a;
			std::cout << "please enter a value for b... (if you are looking to find this side leave blank or enter 0)" << std::endl;
			std::cin >> pythag_b;
			std::cout << "please enter a value for c... (if you are looki
				ng to find this side leave blank or enter 0)" << std::endl;
			std::cin >> pythag_c; 
			if (pythag_a == 0) {
				pythag_a = sqrt(pow(pythag_c, 2) - pow(pythag_b, 2));
				std::cout << "the value of side 'a' is... " << pythag_a << std::endl;
			}
			else if (pythag_b == 0) {
				pythag_b = sqrt(pow(pythag_c, 2) - pow(pythag_a, 2));
				std::cout << "the value of b is... " << pythag_b << std::endl;
			}
			else if (pythag_c == 0){
				pythag_c = sqrt(pow(pythag_a, 2) + pow(pythag_b, 2)); 
				std::cout << "the value of c is... " << pythag_c << std::endl; 	
			}
			else {
				std::cout << "sorry, there was some kind of error." << std::endl; 
			}
		}
		else if (triangle_choice == 2) {
			std::cout << "you have entered the trig portal!" << std::endl; 
			std::cout << "this program will do a variety of trig funcions including, cosine operations, sine operations, tangent operations, and others.. " << std::endl;
		
		}
	}
	//geometry for circles 
	else if (choice_of_shape == 3) {

	}
}