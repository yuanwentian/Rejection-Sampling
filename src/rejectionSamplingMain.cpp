#include <stdio.h>
#include <map>
#include <string>
#include <vector>
#include <cassert>
#include <functional>
#include <iostream>
#include <algorithm>
#include <functional>

#include "rejectionSampling/criteria.hpp"

int main(int argc, const char **argv)
{
	int distance=3;
	int distanceThreshold=4;
	std::cout << IsDistanceWithinThreshold(distance, distanceThreshold) << std::endl;
}
