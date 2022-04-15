/*************************************************************************
	> File Name: 001.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 07:14:50 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 3; i < 1000; i ++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    
    int t3 = (3 + 999) * 333 /2;
    int t5 = (5 + 995) * 199 /2;
    int t15 = (15 + 990) * 66 /2;
    
    cout << "sum 2 = " << t3 + t5 - t15 << endl;
    cout << "sum 1 = " << sum << endl;
    return 0;

}
