
#include "gtest/gtest.h"

#include "stats.hh"

using namespace std;

TEST(UndefinedException, Correctness) {
  UndefinedException ex;
}

class StatsTest : public testing::Test {
protected:
  vector<double> empty, seven, increasing, decreasing;

  void SetUp() {
    seven.push_back(7);
    for (int i = 0; i < 10; ++i) {
      increasing.push_back(i);
    }
    decreasing.assign(increasing.rbegin(), increasing.rend());
  }
};

TEST_F(StatsTest, DefinedMin) {
  EXPECT_EQ(7, stats_min(seven));
  EXPECT_EQ(0, stats_min(increasing));
  EXPECT_EQ(0, stats_min(decreasing));
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
