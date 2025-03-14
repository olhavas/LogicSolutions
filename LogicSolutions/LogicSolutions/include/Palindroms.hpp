//
//  Palindroms.hpp
//  LogicSolutions
//
//  Created by Olha Vasylyshyn on 14/03/2025.
//

#ifndef Palindroms_hpp
#define Palindroms_hpp

#include <string>
#include <map>
#include <stdio.h>
#include <iostream>

namespace Palindroms
{
    class Solution
    {
        const std::string sourceOfProblem;
        int result;
        
    public:
        Solution(std::string problem);
        int getPalindromsCount();
        ~Solution();
        
    };
}

#endif /* Palindroms_hpp */
