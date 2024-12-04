#include <iostream>
#include <vector>
#include <algorithm>

const int N = 30;

bool havelHakimi(std::vector<int> degrees) {
    while (true) {

        while (!degrees.empty() && degrees.back() == 0) {
            degrees.pop_back();
        }

        if (degrees.empty()) break;

        std::sort(degrees.rbegin(), degrees.rend());

        int d = degrees[0];

        if (d > degrees.size() - 1) return false;

        degrees.erase(degrees.begin());

        for (int i = 0; i < d; ++i) {
            if (degrees[i] == 0) return false;
            degrees[i]--;
        }

        std::sort(degrees.rbegin(), degrees.rend());
    }

	return true;
}

void print_degrees (const std::vector<int>& degrees) {
    std::cout << "The input degrees:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "degrees[" << i << "] = " << degrees[i] << '\n';
    }
}

int main() {
    std::vector<int> degrees(N, 0);
    fill(degrees.begin(), degrees.begin() + 9, 3);  
    fill(degrees.begin() + 9, degrees.begin() + 20, 4);
    fill(degrees.begin() + 20, degrees.end(), 5);

    print_degrees(degrees);

    if (havelHakimi(degrees)) {
        std::cout << "Solution exists!" << std::endl;
    } else {
        std::cout << "No solution exists." << std::endl;
    }

    return 0;
}
