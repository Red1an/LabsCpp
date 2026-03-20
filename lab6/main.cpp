#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

void fun2(vector<string>& arr) {
	/*for (int i = 0; i < arr.size(); i++) {
		string a = "";
		for (int j = arr[i].size(); j >= 0; j--) {
			a += arr[i][j];

		}
		arr[i] = a;
	}*/
	for (string &i : arr){
		string k = "";
		for (char j : i) {
			k = j + k;
		}
		i = k;
		
	}
}

string fun1(string x) {
	string word, res;
	vector<string> arr;
	stringstream ss(x);
	for (;!ss.eof();) {
		ss >> word;
		arr.push_back(word);
	}
	fun2(arr);
	for (string i : arr) {
		res += i + ' ';
	}
	return res;
}

int main() {
	string str;
	cout << "Enter your line:" << ' ';
	getline(cin, str);
	cout << "New line: " << fun1(str);
	return 0;
}