#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <vector>
#include <algorithm>
#include <numeric>

class Solution {
public:
  static bool IsEven(int);//have to declare a static function there
  static int Square(int);
  void Filter(std::vector<int> &, std::vector<int> &);
  void Map(std::vector<int> &, std::vector<int> &);
  int Reduce(std::vector<int> &);
};

#endif