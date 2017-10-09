#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;
const int i = 200; 
int main()
{
char s[i]; 
std::cout « "Please enter your text \n";
std::cin.getline(s,200);

for (int j = 0; j < i; j++) if (s[j] >= '0' && s[j] <= '9') std::cout « s[j]; exit; 
std::cout « endl; 

for (int j = 0; j < i; j++) if (s[j] < '0' || s[j] > '9') std::cout « s[j] ; exit; 
std::cout « endl;
system("pause");

return 0;
}
