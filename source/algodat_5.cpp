/*

Karoline Brehm
117190

SS2017

Algorithmen und Datenstrukturen - Beleg 5

*/

#include <cstdlib> // std::rand
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <cmath>

// Some typedefs to make code more readable
typedef std::pair<float,float> 			point;
typedef std::vector<point> 				point_vec;
typedef std::pair<point,point>		 	dense_points;
typedef point_vec::iterator				pv_iterator;

/* returns distance between two points */
float distance(point a, point b)
{
	float x = b.first - a.first;
	float y = b.second - a.second;

	return sqrt(x*x + y*y);
}
	
/* brute force compute the most dense points */
dense_points brute_force(point_vec& pairs, pv_iterator i, int n)
{
	//iterator to first element in subarray
	pv_iterator j = i + 1;

	//pairs.end() or first element after
	//the subarray we are looking at
	pv_iterator end = i + n;

	//initialize min and most_dense_points with first pair
	float min = distance(*i,*j);
	dense_points most_dense_points = std::make_pair(*i,*j);

	//iterate subarray and overwrite initialization if more dense
	//points are found
	for (; i<end; ++i)
	{
		for (; j<end; ++j)
		{
			float dis = distance(*i, *j);
			if (dis < min)
			{
				min = dis;
				most_dense_points.first = *i;
				most_dense_points.second = *j;
			}
		}
	}
	return most_dense_points;
}

/* find if two points that have shortest distance crossing sides have
shorter distance than the most dense points of the two sides and
overwrite min_dis and most_dense_points accordingly*/
void crossing_min_dense (point_vec& median, 
	dense_points& most_dense_points, float& min_dis)
{
	//sort vector according to y-Kooridinate (pair.first)
	std::sort(median.begin(), median.end(),
		[](point const& lhs, point const& rhs)
		-> bool {return (lhs.second <= rhs.second);});

	//find any points whose distance is smaller than min_dis
	//by iterating over alle points in min range to median
	for(int i = 0; i<median.size(); ++i)
	{
		//while iterating, stop if y-distance between points becomes
		//greater than the min-distance, because those points can't have
		//a distance < min
		for(int j = i+1; j<median.size() && (median[j].second-median[i].second) < min_dis; ++j)
		{
			float dis_ij = distance(median[i],median[j]); 
			if (dis_ij < min_dis)
			{
				min_dis = dis_ij;
				most_dense_points.first = median[i];
				most_dense_points.second = median[j];
			}
		}
	}
}

/* min_dense function
takes vector of pairs and int n of vector size */
dense_points min_dense(point_vec& pairs, pv_iterator start, int n)
{
	/* check criterion for stopping rekusion */
	if (n <= 3) //2 or 3
	{
		return brute_force(pairs, start, n);
	}

	/* divide range in two halves */

	int mid = n / 2;	//find middle of (sub)vector

	/*
	call min_dense on both halves by recursively calling min_dense
	function, which gives back the clostest points directly, if n <= 3
	or itself partions points
	Example:

	n = 8, mid = 4, n-mid = 4

		  s1+mid=	s2+(n-mid)
	 s1   end1=s2   = end2
	 |       |       |
	|0|1|2|3|4|5|6|7|-

	*/
	dense_points left = min_dense(pairs, start, mid);
	dense_points right = min_dense(pairs, start + mid, n-mid);

	float dis_l = distance(left.first, left.second);
	float dis_r = distance(right.first, right.second);

	/*
	
	*/
	float min_distance;
	dense_points most_dense_points;

	if(dis_l < dis_r)
	{
		min_distance = dis_l;
		most_dense_points = left;
	}
	else
	{
		min_distance = dis_r;
		most_dense_points = right;	
	}

	/* call crossing_min_dense on vector of points within min_distance range
	from separating x-value*/
	point_vec median;

	//fill vec
	for(point p : pairs)
	{
		// x-value smaller than of pairs[mid].first by maximum min_dis or
		// greater than pairs[mid].first by maximum min_dis
		//this is smallest strip because we found most dense point on the left
		//including mid element, and on right, including mid+1 element
		//so that median is drawn at mid.x value and ell elements in min_dis range
		//from that value must be checked
		if (p.first > pairs[mid].first - min_distance &&
			p.first < pairs[mid].first + min_distance)
		{
			median.push_back(p);
		}
	}

	//call crossing_min_dense, which overwrites min_dis and most_dense_points
	//if closer points are found across the median
	crossing_min_dense (median, most_dense_points, min_distance);

	/* return the two most dense points */
	return most_dense_points;

}

int main ()
{
	//set parameters for points
	int n = 100;		//number of points
	int max = 10000;	//interval in which points shall lie [0,max]

	//create vector of n random pairs in x and y interval [0,max]
	point_vec points (n);

	for (auto& p : points)
	{
		p = std::make_pair( 0 + std::rand() % max + 1,
							0 + std::rand() % max + 1);
	}

	//sort vector according to x-Kooridinate (stored in pair.first)
	std::sort(points.begin(), points.end(),
		[](point const& lhs, point const& rhs)
		-> bool {return (lhs.first <= rhs.first);});

	/* OPTIONAL BRUTE FORCE DOUBLES ELIMINATION (manly to test algorithm, because rand()
	fuction created doubles when using two digit interval and few points)
	for(int i = 0; i<points.size()-1; ++i)
	{
		std::cout << "\npoint i: \t" << points[i].first << ", " << points[i].second;
		std::cout << "\npoint i+1: \t" << points[i+1].first << ", " << points[i+1].second;
		std::cout <<"\n";
		
		if (points[i].first == points[i+1].first)
		{
			if (points[i].second == points[i+1].second)
			{
				std::cout << "\nerase";
				points.erase(points.begin()+i+1);
			}
		}
	}
	*/

	/* OPTIONAL PRINTING OF POINTS */
	for (auto& p : points)
	{
		std::cout << p.first << ", " << p.second << "\n";
	}

	//call min_dense function on these points
	dense_points result = min_dense(points, points.begin(), points.size());

	//print result
	std::cout << "\n The closest points are: \n";
	std::cout << "(" << result.first.first << ", " << result.first.second << ")\n";
	std::cout << "(" << result.second.first << ", " << result.second.second << ")\n";

}