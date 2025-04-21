//Topic 1 - Basic elements of the C++ language
#include <cstdio>
#include <iostream> 
#include <iomanip>
#include <cmath>

//Exercise 1. Write a program that calculates the value of an expression.
//2) e^-x - cosx + sin2xy

void task1()
{
    // Declaring variables
    double x, y, result;
    
    //Entering data
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;
    
    // Evaluating an expression value
    result = exp(-x) - cos(x) + sin(2 * x * y);
    
    //Output the result with an accuracy of up to 4 decimal places
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Result: " << result << std::endl;

}

//Exercise 2. Write a program that counts: 
//2) the area of an equilateral triangle, the perimeter of which is p.

void task2()
{
    //Declaring variables
	double p, a, s;
	std::cin >> p;
	
    //Finding the side length of an equilateral triangle and its area
	a = p / 3;
	s = a * a * sqrt(3.0) / 4.0;
	std::cout << "the area of an equilateral triangle = " << s << std::endl;
}

//Exercise 3.
//2) Write a program that determines whether a given number is even.

void task3()
{
	//Declaring variable
	int number;
	
	//Entering a number
        std::cout << "Input a number: ";
        std::cin >> number;
    
        //Using the ternary operator
        std::cout << "Number '" << number << "' is " << (number % 2 == 0 ? "even" : "odd") << std::endl;
}

int main()
{
	task1();
	task2();
	task3();

	return 0;
}
