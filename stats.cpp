#include "stats.h"
#include <limits>      // for quiet_NaN
#include <numeric>     // for accumulate
#include <algorithm>   // for min_element, max_element

namespace Statistics {

    Stats ComputeStatistics(const std::vector<float>& numbers) {
        Stats result;
        if (numbers.empty()) {
            result.average = std::numeric_limits<float>::quiet_NaN();
            result.min = std::numeric_limits<float>::quiet_NaN();
            result.max = std::numeric_limits<float>::quiet_NaN();
            return result;
        }

        result.average = std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
        result.min = *std::min_element(numbers.begin(), numbers.end());
        result.max = *std::max_element(numbers.begin(), numbers.end());

        return result;
    }

}
