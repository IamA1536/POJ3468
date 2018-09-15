#include "POJ3468.h"



POJ3468::POJ3468()
{
}

POJ3468::~POJ3468()
{
}

int main() {
	double arr[1000];
	int c, maxi;
	double max = -1, sum = 0.0;
	while (true)
	{
		cin >> c;
		if (c == -1) break;
		cout << endl;
		for (int i = 0; i < c; i++) {
			cin >> arr[i];
			if (max < arr[i]) {
				max = arr[i];
				maxi = i;
			}
		}
		for (int i = 0; i < c; i++) {
			if (i == maxi) continue;
			sum += arr[i];
		}
		if (max >= sum) cout << sum << endl;
		else cout << (max + sum)*1.0 / 2 << endl;
		system("pause");
	}
	return 0;
}