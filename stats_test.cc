
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "stats.hh"

using namespace std;

TEST_CASE("stats functions", "[stats]") {
  vector<int> empty, seven, increasing, decreasing;
  seven.push_back(7);
  for (int i = 0; i < 10; ++i) {
    increasing.push_back(i);
  }
  decreasing.assign(increasing.rbegin(), increasing.rend());

  REQUIRE( seven.size() == 1);
  REQUIRE( seven[0] == 7 );
  REQUIRE( increasing.size() == 10 );
  REQUIRE( decreasing.size() == 10 );
  for (int i = 0; i < 10; ++i) {
    REQUIRE( increasing[i] == i );
    REQUIRE( increasing[i] == decreasing[9 - i] );
  }

  SECTION("undefined min") {
    bool thrown(false);
    try {
      stats_min(empty);
    } catch (UndefinedException e) {
      thrown = true;
    }
    REQUIRE( thrown == true );
  }

  SECTION("defined min") {
    REQUIRE( stats_min(seven) == 7 );
    REQUIRE( stats_min(increasing) == 0 );
    REQUIRE( stats_min(decreasing) == 0 );
  }

  SECTION("defined max") {
    REQUIRE( stats_min(seven) == 7 );
    REQUIRE( stats_min(increasing) == 0 );
    REQUIRE( stats_min(decreasing) == 0 );
  }
}
