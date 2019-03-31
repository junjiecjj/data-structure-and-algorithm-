/*************************************************************************
>> File Name: 调整数组顺序使奇数位于偶数前面.cpp
>> Author: chenjunjie
>> Mail: 2716705056qq.com
>> Created Time: 2019.03.31

题目描述
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，
所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
************************************************************************/

#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    void reOrderArray(vector<int> &vect)
    {
        vector<int> result;

        int len = vect.size();
        for(int i = 0; i < len; i++)
        {
            if(vect[i]%2 == 1)
                result.push_back(vect[i]);
        }
        for(int i = 0; i < len; i++)
        {
            if(vect[i]%2 == 0)
                result.push_back(vect[i]);
        }
        vect = result;
        
    }
};
