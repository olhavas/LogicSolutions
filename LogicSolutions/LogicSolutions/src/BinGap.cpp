//
//  BinGap.cpp
//  LogicSolutions
//
//  Created by Olha Vasylyshyn on 16/03/2025.
//

#include "BinGap.hpp"

int solution(int N) {
    // Implement your solution here
    int maxCount = 0, temp =0,bit1count =0;

    while (N)
    {
        if(N&1)
        {
            bit1count++;

            if(temp>=maxCount)
            {
                maxCount = temp;
            }
            temp=0;
        }
        else
        {
            if(bit1count>0)
            {
                temp++;
            }
            
        }
        N = N>>1;
        

    }
    if(bit1count<=1)
    {
        return 0;
    }
    return maxCount;
}
