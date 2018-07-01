#include <iostream>

using namespace std;

int c;

int main ()
{
	int arr[]{1,2,3};
	for(auto item:arr)
		cout << item << " ";
	cout << endl;
    return 0;
}