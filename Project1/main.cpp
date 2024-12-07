#include <iostream>
#include <string>
using namespace std;
string dec_to_other(int a, int p) {
	string array = "0123456789ABCDE";
	string res="";
	int ex = a;
	while (ex != 0) {
		res = array[ex % p] + res; // ������� �� ������� ����������� � ���� ������ � ���������� � ������ ������
		ex = ex / p; // �����, ������ n, ������� ������ �� ������� ��������� �� ��� ���, ���� �� ���������� ����� ����
	}
	return res;
}
int other_to_dec(string a, int p) {
	string array = "0123456789ABCDE"; // ������� ��������� ����� ��������� �������� �� ���� �������� ��������� � ����������� �� 2 �� 16
	int ex = 0, index;
	for (int j = a.length() - 1; j >= 0; j--) { // ������� �������� � 'string' �� �� ��������
		for (int k = 0; k < 15; k++) { // ������ ������ ������ � ������� � ��������� � ����������� �� 'char' � 'int' 
			if (a[a.length() - 1 - j] == array[k]) { // ������� �������� � ����� ���� ����� ������� �� �� ��������
				index = k;
				break;
			}
		}
		ex = ex + pow(p, j) * index; // j - ������ �����, p - ��������� ������� ���������, index - ��� �������
	}
	return ex;
}
int main() {
	int num_input, n;
	setlocale(LC_ALL, "Russian");
	while (true) {
		cout << "������� �";
		cin >> num_input;
		switch (num_input) {
		case 1: {
			cout << "������� n: ";
			cin >> n;
			n = floor(pow(2, n)); // �������� ������������� ����� 2^n
			string array[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E" };
			cout << "OK\nHi again!\n";
			break;
		}
		}
	}
	return 0;
}