#include <iostream>

using namespace std;

int c;

int main ()
{
	int array[]{1,2,3};
	for(auto item:array)
		cout << item << " ";
	cout << endl;
    return 0;
}