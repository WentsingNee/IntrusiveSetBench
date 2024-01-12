/**
 * @file       test_std_set.cpp
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

#include <set>


void test(std::vector<int> const & data)
{

	auto * p = new std::set<int>();
	// auto * p = new kerbal::container::avl_set<int>();

	{
		clock_t start = clock();


		p->insert(data.cbegin(), data.cend());


		clock_t finish = clock();
		double duration = (double)(finish - start) / CLOCKS_PER_SEC * 1000;

		printf("%lf\n", duration);
	}

	// for (auto const & e : base_set)
	// {
	// 	std::cout << e.data << std::endl;
	// }

}


