#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FilterShould, ReturnOnlyEven) {
  Solution solution;
  std::vector<int> vect = {1,2,3,4,5,6,7,8,9,10};
  std::vector<int> expected = {2,4,6,8,10};
  std::vector<int> actual(vect.size());
  solution.Filter(vect, actual);
  
  EXPECT_EQ(expected, actual);
}

TEST(MapShould, ReturnSquare) {
  Solution solution;
  std::vector<int> vect = {1,2,3,4,5,6,7,8,9,10};
  std::vector<int> expected = {1,4,9,16,25,36,49,64,81,100};
  std::vector<int> actual(vect.size());
  solution.Map(vect, actual);
  
  EXPECT_EQ(expected, actual);
}

TEST(ReduceShould, ReturnSum) {
  Solution solution;
  std::vector<int> vect = {1,2,3,4,5,6,7,8,9,10};
  int expected = 55;
  int actual = solution.Reduce(vect);
  
  EXPECT_EQ(expected, actual);
}