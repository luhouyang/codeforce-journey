#include <iostream>
#include <string>

std::string solve_game(int n) {
    int remainder = n % 3;
    
    if (remainder == 1) {
        return "First";
    }
    
    if (remainder == 2) {
        return "First";
    }
    
    return "Second";
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;
        std::cout << solve_game(n) << std::endl;
    }

    return 0;
}