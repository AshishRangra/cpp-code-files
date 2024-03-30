#include <algorithm>
#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arraysort{ 4,2,3,5,1 };
    sort(arraysort.begin(), arraysort.end());
    for (int i = 0; i < arraysort.size(); i++) {
        cout << arraysort[i] << " ";
    }
	return 0; 
}