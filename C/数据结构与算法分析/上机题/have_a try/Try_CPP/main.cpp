#include <iostream>
#include<cstdio>
#include<ctime>
#include<cstdlib>
#include<cstring>

using namespace std;

int main()
{
    int i;
   char *des;
   char *src;
   des="ab]s";
   src="abzs";
   i = strcmp(des,src);
   cout << i;

}
