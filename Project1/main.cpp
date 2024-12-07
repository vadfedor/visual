#include <iostream>
#include <string>
using namespace std;
string dec_to_other(int a, int p) {
	string array = "0123456789ABCDE";
	string res="";
	int ex = a;
	while (ex != 0) {
		res = array[ex % p] + res; // Остаток от деления переводится в один символ и помещается в начало строки
		ex = ex / p; // Число, равное n, делится нацело на систему счисления до тех пор, пока не становится равно нулю
	}
	return res;
}
int other_to_dec(string a, int p) {
	string array = "0123456789ABCDE"; // Индексы элементов равны стоимости символов во всех системах счисления с основаниями от 2 до 16
	int ex = 0, index;
	for (int j = a.length() - 1; j >= 0; j--) { // Перебор символов в 'string' по их индексам
		for (int k = 0; k < 15; k++) { // Каждый символ ищется в массиве с символами и переводится из 'char' в 'int' 
			if (a[a.length() - 1 - j] == array[k]) { // Перебор символов в числе идет задом наперед по их рязрядам
				index = k;
				break;
			}
		}
		ex = ex + pow(p, j) * index; // j - разряд числа, p - основание системы счисления, index - вес рязряда
	}
	return ex;
}
int main() {
	int num_input, n;
	setlocale(LC_ALL, "Russian");
	while (true) {
		cout << "Задание №";
		cin >> num_input;
		switch (num_input) {
		case 1: {
			cout << "Введите n: ";
			cin >> n;
			n = floor(pow(2, n)); // Получаем целочисленное число 2^n
			string array[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E" };
			cout << "OK\nHi again!\n";
			break;
		}
		}
	}
	return 0;
}