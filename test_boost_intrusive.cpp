/**
 * @file       test_boost_intrusive.cpp
 * @brief
 * @date       2024-01-12
 * @author     Peter
 * @copyright
 *      Peter of [ThinkSpirit Laboratory](http://thinkspirit.org/)
 *   of [Nanjing University of Information Science & Technology](http://www.nuist.edu.cn/)
 *   all rights reserved
 */

#include <vector>
#include <iostream>

#include <boost/intrusive/set.hpp>


struct MyClass : public boost::intrusive::set_base_hook<>
{
	int data;

	MyClass(int data) : data(data)
	{
	}

	bool operator<(const MyClass & with) const noexcept
	{
		return this->data < with.data;
	}
};

using BaseSet = boost::intrusive::set<MyClass>;


void test(std::vector<int> const & data)
{
	std::vector<MyClass> nodes;
	{
		nodes.reserve(data.size());
		for (int i : data)
		{
			nodes.emplace_back(i);
		}
	}

	BaseSet base_set;

	{
		clock_t start = clock();


		base_set.insert_unique(nodes.begin(), nodes.end());


		clock_t finish = clock();
		double duration = (double)(finish - start) / CLOCKS_PER_SEC * 1000;

		printf("%lf\n", duration);
	}

	// for (auto const & e : base_set)
	// {
	// 	std::cout << e.data << std::endl;
	// }

}


