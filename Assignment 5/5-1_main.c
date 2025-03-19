#include <stdio.h>
#include <stdlib.h>
#include "ds_q5.h"

int main() {
	DamageNode_s *head = NULL, *tail = NULL;
	int m, n, L;
	int *damage;

	scanf("%d %d %d", &m, &n, &L);

	for (int i = 0; i < L; i++) {
		int dmg;
		scanf("%d", &dmg);
		if (head == NULL) {
			head = (DamageNode_s *)malloc(sizeof(DamageNode_s));
			head->damage = dmg;
			head->next = NULL;
			tail = head;
		} else {
			tail->next = (DamageNode_s *)malloc(sizeof(DamageNode_s));
			tail = tail->next;
			tail->damage = dmg;
			tail->next = NULL;
		}
	}

	damage = mapDamage(head, m, n);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", damage[i * n + j]);
		}
		printf("\n");
	}
	for (int i = 0; i < L; i++) {
		DamageNode_s *tmp = head;
		head = head->next;
		free(tmp);
	}
	free(damage);

	return 0;
}