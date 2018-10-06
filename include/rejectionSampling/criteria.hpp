#pragma once
#include <iostream>
#include <stdio.h>
#include <map>
#include <cmath>
#include <cassert>
#include <iterator>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

namespace rejectionSampling::criteria{
    using namespace rejectionSampling;

    class IsDistanceWithinThreshold {
        private:
            const double distance;
            const double distanceThreshold;

        public:
            IsDistanceWithinThreshold(const double distance, const double distanceThreshold):
            distance(distance),
            distanceThreshold(distanceThreshold);
            
            auto operator(){
                return distance <= distanceThreshold;
            }
    };
}










