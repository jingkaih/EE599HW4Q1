#include "solution.h"
bool Solution::IsEven(int i)
{
  return ((i % 2) == 0);
}
void Solution::Filter(std::vector<int> &inputs, std::vector<int> &outputs)
{ 
  auto it = std::copy_if(inputs.begin(), inputs.end(), outputs.begin(), IsEven);
  outputs.resize(std::distance(outputs.begin(), it));
}

int Solution::Square(int i)
{
  return i*i;
}
void Solution::Map(std::vector<int> &inputs, std::vector<int> &outputs)
{
  std::transform(inputs.begin(), inputs.end(), outputs.begin(), Square);
}

int Solution::Reduce(std::vector<int> &inputs)
{
  return std::accumulate(inputs.begin(), inputs.end(), 0);
}