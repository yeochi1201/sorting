#pragma once
#include <iostream>
using namespace std;

template <typename Comparable>
class AbstractSort {
public:
	static int size(Comparable a[]);

	static int compareTo(Comparable a, Comparable b);

	static bool less(Comparable a, Comparable b);

	static void exch(Comparable a[], int i, int j);

	static void show(Comparable a[]);

	static bool isSorted(Comparable a[]);
};