#include <stdio.h>
#include <stdlib.h>
#include "ds_q5.h"

int main() {
	DamageNode_t *head = NULL, *tail = NULL;
	int m, n, L, k;
	int *damage;
	DamageNode_t **arr;

	scanf("%d %d %d", &m, &n, &L);
	arr = (DamageNode_t **)malloc(L * sizeof(DamageNode_t *));

	for (int i = 0; i < L; i++) {
		int dmg;
		scanf("%d", &dmg);
		if (head == NULL) {
			head = (DamageNode_t *)malloc(sizeof(DamageNode_t));
			arr[i] = head;
			head->damage = dmg;
			head->next = NULL;
			tail = head;
		} else {
			tail->next = (DamageNode_t *)malloc(sizeof(DamageNode_t));
			arr[i] = tail->next;
			tail = tail->next;
			tail->damage = dmg;
			tail->next = NULL;
		}
	}

	scanf("%d", &k);
	damage = mapRotatingDamage(head, m, n, k);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", damage[i * n + j]);
		}
		printf("\n");
	}
	for (int i = 0; i < L; i++) {
		DamageNode_t *tmp = arr[i];
		free(tmp);
	}
	free(damage);
	free(arr);

	return 0;
}