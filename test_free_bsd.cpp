/**
 * @file       test_free_bsd.cpp
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

#include <err.h>
#include <stdio.h>
#include <time.h>

#include "free_bsd_tree.hpp"

int
intcmp(struct node *e1,	struct node *e2)
{
	return (e1->i <	e2->i ?	-1 : e1->i > e2->i);
}

RB_GENERATE(inttree, node, entry, intcmp)


void test(std::vector<int> const & data)
{
	inttree head = RB_INITIALIZER(&head);

	std::vector<struct node> nodes(data.size());
	{
		for (std::size_t i = 0; i < data.size(); ++i)
		{
			nodes[i].i = data[i];
		}
	}


	{
		clock_t start = clock();


		for (std::size_t i = 0; i < data.size(); ++i)
		{
			RB_INSERT(inttree, &head, &nodes[i]);
			// node * p = new node;
			// p->i = data[i];
			// RB_INSERT(inttree, &head, p);
		}

		clock_t finish = clock();
		double duration = (double)(finish - start) / CLOCKS_PER_SEC * 1000;

		printf("%lf\n", duration);
	}

	// struct node * e;
	// RB_FOREACH(e, inttree, &head)
	// {
	// 	std::cout << e->i << std::endl;
	// }

}
