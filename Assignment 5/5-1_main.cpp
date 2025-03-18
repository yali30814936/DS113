#include <iostream>
#include "ds_q5.hpp"

int main() {
	DamageList_s *head = nullptr, *tail = nullptr;
	int m, n, L;

	std::cin >> m >> n >> L;

	for (int i = 0; i < L; i++) {
		int dmg;
		scanf("%d", &dmg);
		if (head == nullptr) {
			head = new DamageList_s;
			head->damage = dmg;
			head->next = nullptr;
			tail = head;
		} else {
			tail->next = new DamageList_s;
			tail = tail->next;
			tail->damage = dmg;
			tail->next = nullptr;
		}
	}

	std::vector<std::vector<int>> damage = visualizeDamage(head, m, n);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", damage[i * n + j]);
		}
		printf("\n");
	}
	for (int i = 0; i < L; i++) {
		DamageList_s *tmp = head;
		head = head->next;
		delete tmp;
	}

	return 0;
}