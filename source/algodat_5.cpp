/*

Karoline Brehm
117190

SS2017

Algorithmen und Datenstrukturen - Beleg 3

*/

#include <cstdlib> // std::rand
#include <vector>
#include <iostream>

int main ()
{
	//create vector of 100 random pairs in x/y intervals [0,100]
	std::vector<std::pair<float,float>> points (100);

	for (auto& p : points)
	{
		p = std::make_pair(std::rand(), std::rand());
	}



}