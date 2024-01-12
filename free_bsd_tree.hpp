/**
 * @file       free_bsd_tree.hpp
 * @brief
 * @date       2024-01-12
 * @author     Peter
 * @copyright
 *      Peter of [ThinkSpirit Laboratory](http://thinkspirit.org/)
 *   of [Nanjing University of Information Science & Technology](http://www.nuist.edu.cn/)
 *   all rights reserved
 */

#ifndef FREE_BSD_TREE_HPP
#define FREE_BSD_TREE_HPP

#include <stdint.h>

typedef uintptr_t __uintptr_t;

#include <sys/sys/tree.h>

struct node {
	RB_ENTRY(node) entry;
	int i;
};

RB_HEAD(inttree, node);

#endif // FREE_BSD_TREE_HPP
