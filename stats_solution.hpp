
#pragma once

#include <algorithm>
#include <stdexcept>
#include <vector>

int stats_min(const std::vector<int>& v) throw(std::invalid_argument) {
  if (v.empty()) {
    throw std::invalid_argument("stats_min: vector must not be empty");
  } else {
    return *min_element(v.begin(), v.end());
  }
}

int stats_max(const std::vector<int>& v) throw(std::invalid_argument) {
  if (v.empty()) {
    throw std::invalid_argument("stats_max: vector must not be empty");
  } else {
    return *max_element(v.begin(), v.end());
  }
}
