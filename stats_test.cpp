
#include <cassert>
#include <iostream>

#include "stats.hpp"

using namespace std;

int main() {
  vector<int> empty, seven, increasing, decreasing;
  seven.push_back(7);
  for (int i = 0; i < 10; ++i) {
    increasing.push_back(i);
  }
  decreasing.assign(increasing.rbegin(), increasing.rend());

  assert( seven.size() == 1);
  assert( seven[0] == 7 );
  assert( increasing.size() == 10 );
  assert( decreasing.size() == 10 );
  for (int i = 0; i < 10; ++i) {
    assert( increasing[i] == i );
    assert( increasing[i] == decreasing[9 - i] );
  }

  cout << "undefined min throws exception" << endl;
  {
    bool thrown(false);
    try {
      stats_min(empty);
    } catch (invalid_argument e) {
      thrown = true;
    }
    assert( thrown == true );
  }

  cout << "stats_min computes correct minimum" << endl;
  {
    assert( stats_min(seven) == 7 );
    assert( stats_min(increasing) == 0 );
    assert( stats_min(decreasing) == 0 );
  }

  cout << "stats_max computes correct minimum" << endl;
  {
    assert( stats_max(seven) == 7 );
    assert( stats_max(increasing) == 9 );
    assert( stats_max(decreasing) == 9 );
  }

  return 0;
}
