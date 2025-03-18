// Header file for assignment 5.
/* ---------------- DO NOT MODIFY THIS FILE. ---------------- */
#ifndef DS_Q5_H
#define DS_Q5_H

typedef struct DamageList {
	int damage;
	struct DamageList *next;
} DamageList_s;

int* visualizeDamage(DamageList_s *head, int m, int n);

int* visualizeDamage2(DamageList_s *head, int m, int n, int k);

#endif
