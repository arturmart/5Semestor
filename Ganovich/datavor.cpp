#include <iostream>
#include <unordered_map>
#include <vector>

int findJudge(int n, std::vector<std::pair<int, int>>& trust) {
	std::unordered_map<int, int> m;
	int res = -1;

	for (int i = 0; i < trust.size(); ++i) {
		--m[trust[i].first];
		++m[trust[i].second];
	}
	
	for (int i = 1; i <= n; ++i) {
		if (m[i] == n - 1) res = i;
	}

	return res;
}

int main () {
	int n = 3;
	std::vector<std::pair<int, int>> vec = {
		{2, 3},
		{1, 3},
		{3, 2}
	};

	int judge = findJudge(n, vec);
	if (judge == -1) {
		std::cout << "There is no judge\n";
	}
	else {
		std::cout << "The judge is " << judge << '\n';
	}
}