//
//  Palindroms.cpp
//  LogicSolutions
//
//  Created by Olha Vasylyshyn on 14/03/2025.
//

#include "Palindroms.hpp"





Palindroms::Solution::Solution(std::string problem): sourceOfProblem(problem)
{
    this->result = getPalindromsCount();
    std::cout<<result<<'\n';
}
int Palindroms::Solution::getPalindromsCount()
{
    std::map<char, int> freq;
    for ( char ch: this->sourceOfProblem)
    {
        freq[ch]++;
    }
    int size= freq.size();
    if(size==1)
    {
        return 0;
    }
    int pair = 0;
    for (auto it = freq.begin(); it != freq.end(); ++it)
    {
        auto f = it->second;
        if(f >= 2)
        {
            pair += f/2;
            size-=1;
        }
        
    }
    if(pair == (freq.size()-size))
    {
        return (freq.size()-size-1);
    }
    return std::min(pair, size);

}
Palindroms::Solution::~Solution()
{
    
    
}
