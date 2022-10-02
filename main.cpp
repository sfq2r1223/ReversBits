#include <iostream>

template <typename T>
T bitsRevers(T value)
{
	T temp = 0;
	const std::size_t countOfBits = sizeof(T) * 8;

	for (std::size_t i = 0; i < countOfBits; ++i)
		if (value & 1 << i)
			temp = temp | 1 << (countOfBits - i - 1);

	return temp;
}

template <typename T>
void showBitSet(T value)
{
	const std::size_t countOfBits = sizeof(T) * 8;

	for (int i = countOfBits - 1; i >= 0; --i)
		std::cout << ((value & 1 << i) == 0 ? "0" : "1");
}

int main()
{
	unsigned int a = 5;

	a = bitsRevers(a);
	std::cout << a << std::endl;

	showBitSet(a);

	return 0;
}