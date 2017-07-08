/*

Karoline Brehm
117190

SS2017

Algorithmen und Datenstrukturen - Beleg 3

*/

#include <cstdlib> // std::rand
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <cmath>

// Some typedefs to make code more readable
typedef std::pair<float,float> 										point;
typedef std::vector<std::pair<float,float>> 						point_vec;
typedef std::pair<std::pair<float,float>,std::pair<float,float>> 	dense_points;

/* returns distance between two points */
float distance(point a, point b)
{
	float x = b.first - a.first;
	float y = b.second - a.second;

	return sqrt(x*x + y*y);
}

/* returns two points that have shortest distance crossing sides*/
dense_points crossing_min_dense ()
{
	/*  */
}
	
/* brute force compute the most dense points */
dense_points brute_force(point_vec pairs, int n)
{
	float min = distance(pairs[0], pairs[1]);
	std::pair<point,point> dense = std::make_pair(pairs[0],pairs[1]);

	for (int i = 0; i<n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			float dis = distance(pairs[i], pairs[j]);
			if (dis < min)
			{
				min = dis;
				dense.first = pairs[i];
				dense.second = pairs[j];
			}
		}
	}
	return dense;
}

/* min_dense function
takes vector of pairs and int n of vector size */
dense_points min_dense(point_vec pairs, int n)
{
	/* check criterion for stopping rekusion */
	if (n <= 3) //2 or 3
	{
		return brute_force(pairs, n);
	}

	/* divide range in two halves */


	/* call min_dense on both halves */

	/* min(dl,dr) = min_distance */

	/* call crossing_min_dense on vector of points within min_distance range
	from separating x-value*/
	point_vec middle;
	//fill vec
	//call crossing_min_dense

	/* return the two most dense points */
}

int main ()
{
	//set parameters for points
	int n = 100;		//number of points
	int max = 1000;	//interval in which points shall lie [0,max]

	//create vector of n random pairs in x/y intervals [0,max]
	point_vec points (100);

	for (auto& p : points)
	{
		p = std::make_pair( 0 + std::rand() % max + 1,
							0 + std::rand() % max + 1);
	}

	//sort vector according to x-Kooridinate (pair.first)
	std::sort(points.begin(), points.end(),
		[](point const& lhs, point const& rhs)
		-> bool {return (lhs.first <= rhs.first);});

	//print points
	for (auto& p : points)
	{
		std::cout << p.first << ", " << p.second << "\n";
	}

	//call min_dense function on these points
	dense_points result = min_dense(points, n);

}