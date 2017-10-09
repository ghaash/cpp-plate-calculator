/**************************************************************************
** Author: Daniel Silverman
** Date: Saturday, September 25, 2017
** Description: Program that calculates what plates to put on a barbell.
**************************************************************************/

#include <iostream>

int main()
{
	//ints defined
	int weight, fortyFives, thirtyFives, twentyFives, tens, fives, ones, halves;

	//user gets asked for weight and inputs it
	std::cout << "Please enter a weight." << std::endl;
	std::cin >> weight;

	//output for weight
	std::cout << "Your plates will be:" << std::endl;

	//divided weight by 2
//	weight = weight/2;

	//algorithm for plates
	fortyFives = ((weight-45)/2) / 45;
	thirtyFives = (weight % 45) / 35;
	twentyFives = ((weight % 45) % 35) / 25;
	tens = (((weight % 45) % 35) % 25) / 10;
	fives = ((((weight % 45) % 35) % 25) % 10) / 5;
	ones = (((((weight % 45) % 35) % 25) % 10) % 5) / 1;
	halves = ((((((weight % 45) % 35) % 25) % 10) % 5) % 1) / 0.5;

	/*if elseif else logic
	 * any variable has to be == 2
	 * So, just solve the problem for half the weight and apply that set of weights to each side
	*/

	//out for 45s, 35s, 25s, 15s, 10s, 5s, 1s

	//std::cout << "45's: " << (fortyFives-45) / 45; is possible make those changes
	std::cout << "Here are the plates you need to put on both sides of the bar." << std::endl;
	std::cout << "45's: " << fortyFives << std::endl;
	std::cout << "35's: " << thirtyFives << std::endl;
	std::cout << "25's: " << twentyFives << std::endl;
	std::cout << "10's: " << tens << std::endl;
	std::cout << "5's: " << fives << std::endl;
	std::cout << "1's: " << ones << std::endl;
	std::cout << ".5's: " << halves << std::endl;

	return 0;
}
