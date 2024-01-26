#include <iostream>
#include <list>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void main() {
	srand(time(0));
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(rand() % 10);

	for (auto i : v)
		cout << i << " ";
	cout << endl;

	//reverse(v.begin() + 2, v.end() - 2); 
	//sort(v.begin() + 5, v.end());

	//for (auto i : v)
	//	cout << i << " ";
	//cout << endl; 

	//auto i = min_element(v.begin(), v.end());

	//i = max_element(v.begin(), v.end());

	//auto sum = accumulate(v.begin(), v.end(), 0);

	//auto count1 = count(v.begin(), v.end(), 0);
	//cout << count1 << endl;
	sort(v.begin(), v.end());
	auto i = find(v.begin(), v.end(), 5);
	cout << boolalpha << binary_search(v.begin(), v.end(), 5);
	// hakuna matata
}