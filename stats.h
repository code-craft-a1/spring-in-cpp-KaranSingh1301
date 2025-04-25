#pragma once
#include <vector>

namespace Statistics {
    struct Stats {
        float average;
        float min;
        float max;
    };

    Stats ComputeStatistics(const std::vector<float>&);
}
