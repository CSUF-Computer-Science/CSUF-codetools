
#pragma once

#include <vector>

class UndefinedException {
};

int stats_min(const std::vector<int>& v) throw(UndefinedException) {
  throw UndefinedException();
}

int stats_max(const std::vector<int>& v) throw(UndefinedException) {
  throw UndefinedException();
}
