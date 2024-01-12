/**
 * @file       outside_cmp.cpp
 * @brief
 * @date       2024-01-12
 * @author     Peter
 * @copyright
 *      Peter of [ThinkSpirit Laboratory](http://thinkspirit.org/)
 *   of [Nanjing University of Information Science & Technology](http://www.nuist.edu.cn/)
 *   all rights reserved
 */

#include "free_bsd_tree.hpp"


extern "C"
int
intcmp_outside(struct node *e1,	struct node *e2)
{
	return (e1->i <	e2->i ?	-1 : e1->i > e2->i);
}
