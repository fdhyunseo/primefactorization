#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	int x = 100000; // change this number, to which the computer calculate prime factors
	vector<vector<int>> list;

	for (int i = 2; i <= x; i++) {
		vector<int> num;
		int k = i;
		int j = 2;
		while(k > 1) {
			if (k % j == 0) {
				num.push_back(j);
				k /= j;
				j = 2;
				if (j > x) {
					num.push_back(i);
					break;
				}
			}
			else {
				j++;
			}
		}
		list.push_back(num);
	}

	for (int i = 0; i < list.size(); i++) {
		vector<int> num = list[i];
		cout << i + 2 << " = ";
		int stack = 1;
		for (int j = 0; j < num.size(); j++) {
			cout << num[j] << " ";
		}
		cout << "\n";
	}
}
