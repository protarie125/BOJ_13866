#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto sum = int{ 0 };
	auto min = int{ 987654321 };
	auto max = int{ -1 };

	for (int i = 0; i < 4; ++i) {
		int x;
		cin >> x;

		sum += x;

		if (x < min) {
			min = x;
		}

		if (max < x) {
			max = x;
		}
	}

	auto team1 = min + max;
	auto team2 = sum - team1;
	cout << (team1 < team2 ? team2 - team1 : team1 - team2);

	return 0;
}