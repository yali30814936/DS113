// Header file for assignment 5.
/* ---------------- DO NOT MODIFY THIS FILE. ---------------- */
#ifndef DS_Q5_HPP
#define DS_Q5_HPP

#include <vector>

typedef struct DamageNode {
	int damage;
	struct DamageNode *next;
} DamageNode_t;

std::vector<std::vector<int>> mapDamage(DamageNode_t *head, int m, int n);

std::vector<std::vector<int>> mapRotatingDamage(DamageNode_t *head, int m, int n, int k);

#endif
