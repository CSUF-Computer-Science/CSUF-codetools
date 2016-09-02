
#pragma once

#include <algorithm>
#include <vector>

class UndefinedException {
};

int stats_min(const std::vector<int>& v) throw(UndefinedException) {
  auto iter = min_element(v.begin(), v.end());
  if (iter == v.end()) {
    throw UndefinedException();
  } else {
    return *iter;
  }
}

int stats_max(const std::vector<int>& v) throw(UndefinedException) {
  auto iter = max_element(v.begin(), v.end());
  if (iter == v.end()) {
    throw UndefinedException();
  } else {
    return *iter;
  }
}
