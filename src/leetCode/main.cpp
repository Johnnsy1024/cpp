#include "headerFile/72-editDistance.h"
#include <iostream>
int main()
{
    int res = minDistance("kitten", "sitting", 6, 7);
    std::cout << res << std::endl;
}
