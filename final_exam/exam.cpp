#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
	int size = v.size();
	for (int i = 0; i < size; i++) {
		cout << v.at(i) << " ";
	}
	cout << endl;
}

double getAverage(const vector<int>& v) {
	int size = v.size();
	double sum = 0;
	for (int i = 0; i < size; i++)
		sum += v.at(i);
	double result = sum / size;
	return result;
}

int main() {
	vector <int> v;
	while (true) {
		int num;
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> num;
		if (num == 0) break;

		v.push_back(num);
		printVector(v);
		cout << "평균 = " << getAverage(v) << endl;
	}
}