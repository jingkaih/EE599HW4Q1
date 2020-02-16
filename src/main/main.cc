#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> inputs = {1,2,3,4,5,6,7,8,9,10};
    
    std::vector<int> outputs1(inputs.size());
    solution.Filter(inputs,outputs1);
    for(auto x : outputs1)
    std::cout << x << std::endl;

    std::vector<int> outputs2(inputs.size());
    solution.Map(inputs, outputs2);
    for(auto x : outputs2)
    std::cout << x <<' ';

    std::cout << '\n' << solution.Reduce(inputs);
    return EXIT_SUCCESS;
}