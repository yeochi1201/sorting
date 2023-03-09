#include <iostream>
using namespace std;

#include "AbstractSort.hpp"

int main() {
	AbstractSort<int> sort = AbstractSort<int>();

	int array[10] = { 9,8,7,6,5,4,3,2,1,0 };

	cout << sort.size(array) << endl;
}