#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	vector<int> list{ a,b,c };
	sort(list.begin(), list.end());

	auto diff1 = list[1] - list[0];
	auto diff2 = list[2] - list[1];

	if (diff1 == diff2) {
		if (list[2] + diff1 <= 100) {
			cout << list[2] + diff1;
			return 0;
		}
		else {
			cout << list[0] - diff1;
			return 0;
		}
	}
	else if (diff1 < diff2) {
		cout << (list[1] + list[2]) / 2;
		return 0;
	}
	else {
		cout << (list[0] + list[1]) / 2;
		return 0;
	}

	return 0;
}