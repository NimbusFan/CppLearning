#include <iostream>
using namespace std;

int main30() {
	for (int i = 0; i < 10; i++) {
		if (i < 5) {
			for (int j = 0; j < 10; j++) {
				if (j < 5) {
					cout << " * ";
				}
					break;
			}
			cout << endl;
		}
			continue;
	}

	system("pause");
	return 0;
}