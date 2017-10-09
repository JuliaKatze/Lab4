#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;
const int i = 200; // òî÷êà 1
int main()
{
char s[i]; //ìàññèâ
std::cout « "Please enter your text \n";
std::cin.getline(s,200);

for (int j = 0; j < i && (s[j] != '.'); j++) if (s[j] >= '0' && s[j] <= '9') std::cout « s[j]; exit; 
std::cout « endl; 

for (int j = 0; j < i && (s[j] != '.'); j++) if (s[j] < '0' || s[j] > '9') std::cout « s[j] ; exit; 
std::cout « endl;


return 0;
}
