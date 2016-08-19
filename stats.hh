
#pragma once

#include <vector>

class UndefinedException {
};

int stats_min(const std::vector<double>& v) throw(UndefinedException) {
  throw UndefinedException();
}

int stats_max(const std::vector<double>& v) throw(UndefinedException) {
  throw UndefinedException();
}

double stats_mean(const std::vector<double>& v) throw(UndefinedException) {
  throw UndefinedException();
}
