#include <iostream>
#include "ds_q5.hpp"

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	DamageNode_t *head = nullptr, *tail = nullptr;
	DamageNode_t **arr;
	int m, n, L, k;

	cin >> m >> n >> L;

	arr = new DamageNode_t*[L];

	for (int i = 0; i < L; i++) {
		int dmg;
		cin >> dmg;
		if (head == nullptr) {
			head = new DamageNode_t;
			arr[i] = head;
			head->damage = dmg;
			head->next = nullptr;
			tail = head;
		} else {
			tail->next = new DamageNode_t;
			arr[i] = tail->next;
			tail = tail->next;
			tail->damage = dmg;
			tail->next = nullptr;
		}
	}

	cin >> k;
	vector<vector<int>> damage = mapRotatingDamage(head, m, n, k);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << damage[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < L; i++) {
		DamageNode_t *tmp = arr[i];
		delete tmp;
	}
	delete[] arr;

	return 0;
}