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
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> num;
		if (num == 0) break;

		v.push_back(num);
		printVector(v);
		cout << "��� = " << getAverage(v) << endl;
	}
}