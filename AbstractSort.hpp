#pragma once
#include <iostream>

using namespace std;

template <typename Comparable>
class AbstractSort {
public:
	int size(Comparable& a) {
		return sizeof(a);
	}

	int compareTo(Comparable a, Comparable b) {
		if (a < b)return -1;
		else if (a == b)return 0;
		else return 1;
	}

	bool less(Comparable a, Comparable b) {
		return compareTo(a, b) < 0;
	}

	void exch(Comparable a[], int i, int j) {
		Comparable t = a[i];
		a[i] = a[j];
		a[j] = t;
	}

	void show(Comparable a[]) {
		for (int i = 0; i < size(a); i++) {
			cout << a[i] << "  ";
		}
		cout << endl;
	}

	bool isSorted(Comparable a[]) {
		for (int i = 1; i < size(a); i++) {
			if (less(a[i], a[i - 1]))return false;
		}
	}
};