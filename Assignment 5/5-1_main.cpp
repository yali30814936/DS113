#include <iostream>
#include "ds_q5.hpp"

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	DamageList_s *head = nullptr, *tail = nullptr;
	int m, n, L;

	cin >> m >> n >> L;

	for (int i = 0; i < L; i++) {
		int dmg;
		cin >> dmg;
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

	vector<vector<int>> damage = visualizeDamage(head, m, n);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << damage[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < L; i++) {
		DamageList_s *tmp = head;
		head = head->next;
		delete tmp;
	}

	return 0;
}