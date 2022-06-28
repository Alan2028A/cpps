#include <string>
#include <iostream>

int main() {
	std::string n;

	std::cout << "Enter number: ";
	std::cin >> n;

	for (const auto& c : n)
		std::cout << c << '\n';
}
// Change to other mode than 98 to run this program.
