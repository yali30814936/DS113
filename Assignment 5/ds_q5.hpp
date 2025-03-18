// Header file for assignment 5.
/* ---------------- DO NOT MODIFY THIS FILE. ---------------- */
#ifndef DS_Q5_HPP
#define DS_Q5_HPP

#include <vector>

typedef struct DamageList {
	int damage;
	struct DamageList *next;
} DamageList_s;

std::vector<std::vector<int>> visualizeDamage(DamageList_s *head, int m, int n);

std::vector<std::vector<int>> visualizeDamage2(DamageList_s *head, int m, int n, int k);

#endif
