#include <iostream>
#include <vector>
#include <algorithm>

template <class T>
T Squaring(T& a)
{
	a *= a;
	return a;
}

template <>
std::vector<int> Squaring(std::vector<int>& vect) {
	for (auto& i : vect)
		i *= i;
	return vect;
}

int main()
{
	int num = 4;

	std::cout << "[IN]: " << num << std::endl;

	Squaring(num);

	std::cout << "[OUT]: " << num << std::endl;

	std::vector<int> arr = { -1, 4, 8 };

	std::cout << "[IN]: ";
	std::for_each(arr.cbegin(), arr.cend() , [](const int& n) {std::cout << n << ", "; });
	std::cout  << std::endl;
	Squaring(arr);
	std::cout << "[OUT]: ";
	std::for_each(arr.cbegin(), arr.cend() , [](const int& n) { std::cout << n << ", "; });
	std::cout <<  std::endl;

	return 0;
}