#include <stdio.h>
#include <stdlib.h>
#include "ds_q5.h"

int main() {
	DamageList_s *head = NULL, *tail = NULL;
	int sz, m, n;
	int *damage;

	scanf("%d %d %d", &m, &n, &sz);

	for (int i = 0; i < sz; i++) {
		int dmg;
		scanf("%d", &dmg);
		if (head == NULL) {
			head = (DamageList_s *)malloc(sizeof(DamageList_s));
			head->damage = dmg;
			head->next = NULL;
			tail = head;
		} else {
			tail->next = (DamageList_s *)malloc(sizeof(DamageList_s));
			tail = tail->next;
			tail->damage = dmg;
			tail->next = NULL;
		}
	}

	damage = visualizeDamage(head, m, n);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", damage[i * n + j]);
		}
		printf("\n");
	}
	free(damage);

	return 0;
}