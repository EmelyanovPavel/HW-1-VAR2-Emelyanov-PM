//Topic 1 - Basic elements of the C++ language
//Exercise 1. Write a program that calculates the value of an expression.
//2) e^-x - cosx + sin2xy

#include <cstdio>
#include <iostream> 
#include <cmath>

void task1_2()
{


	int x, y;
	std::cout << "Enter X and Y :" << std::endl;
	std::cin >> x >> y;


	std::cout << "Solution: " << std::endl;
	std::cout << " e^-" << x << " - " << round(cos(x)) << " + " << round(sin(2 * x * y)) << " = ";
	std::cout << " e^-" << x << " + " << abs(round(cos(x)) + round(sin(2 * x * y)));

}

//Exercise 2. Write a program that counts: 
//2) the area of an equilateral triangle, the perimeter of which is p.

void task2_2()
{

	double p, a;
	double S;
	std::cin >> p;

	a = p / 3;
	S = a * a * sqrt(3.0) / 4.0;
	std::cout << "the area of an equilateral triangle = " << S << std::endl;
}

//Exercise 3.
//2) Write a program that determines whether a given number is even.

void task3_2()
{

	int n;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> n;

	if (n % 2 == 0) std::cout << "Yes";
	else std::cout << "No";
}

int main()
{
	task1_2();
	task2_2();
	task3_2();

	return 0;
}
