
#include <vector>
#include <random>
#include <iostream>

void test(std::vector<int> const & data);


int main()
{
	constexpr std::size_t N = 32 * 1024;

	std::vector<int> data(N);
	{
		std::mt19937 eg;
		for (std::size_t i = 0; i < N; ++i)
		{
			data[i] = eg() % N;
		}
	}

	// data = {3, 2, 8, 7, 2};

	test(data);

	return 0;
}
