#include <iostream>
using namespace std;

#include "AbstractSort.h"

template<typename Comparable>
static int AbstractSort<Comparable>::size(Comparable a[]) {
	return a->size;
}

template<typename Comparable>
static int AbstractSort<Comparable>::compareTo(Comparable a, Comparable b) {
	if (a < b)return -1;
	else if (a == b)return 0;
	else return 1;
}

template<typename Comparable>
static bool AbstractSort<Comparable>::less(Comparable a, Comparable b) {
	return compareTo(a,b) < 0;
}

template<typename Comparable>
static void AbstractSort<Comparable>::exch(Comparable a[], int i, int j) {
	Comparable t = a[i];
	a[i] = a[j];
	a[j] = t;
}

template<typename Comparable>
static void AbstractSort<Comparable>::show(Comparable a[]) {
	for (int i = 0; i < size(a); i++) {
		cout << a[i] << "  ";
	}
	cout << endl;
}

template<typename Comparable>
static bool AbstractSort<Comparable>::isSorted(Comparable a[]) {
	for (int i = 1; i < size(a); i++) {
		if (less(a[i], a[i - 1]))return false;
	}
}