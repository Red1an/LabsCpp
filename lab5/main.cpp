#include <iostream>
#include <vector>

using namespace std;

int fun(vector<double> arr) {
	int count = 0;
	for (int i = 1; i < arr.size() - 1; i++) {
		if (arr[i] > arr[i - 1] && arr[i] < arr[i + 1]) count++;
	}
	return count;
}


int main() {
	srand(time(0));
	int size, size1;
	cout << "Write the size of the array: ";
	cin >> size;
	while (size <= 2) {
		cout << "Not OK, repeat: ";
		cin >> size;	
	}
	vector<double> arr(size);	
	cout << "Your array:" << " ";
	for (int i = 0; i < size; i++) {
		arr[i] = (rand()% 1001 - 500) / 10.0;
		cout << arr[i] << " ";
	}
	int res = fun(arr);
	cout << endl << res << endl;
	cout << "Write the second size of the array: ";
	cin >> size1;
	while (size1 <= 2) {
		cout << "Not OK, repeat: ";
		cin >> size1;
	}
	vector<double> arr1(size1);
	cout << "Enter elements: ";
	for (int i = 0; i < size1; i++) {
		cin >> arr1[i];
		while (arr1[i] < -50 || arr1[i] > 50) {
			cout << "Out of range. Enter again: ";
			cin >> arr1[i];
		}
	}
	cout << "Your array: ";
	for (int i : arr1) cout << i << " ";
	int res1 = fun(arr1);
	cout << endl << res1 << endl;
	return 0;
}