#include <iostream>
#include <string>
using namespace std;
string dec_to_other(int a, int p) {
	string array = "0123456789ABCDE";
	string res="";
	int ex = a;
	while (ex != 0) {
		res = array[ex % p] + res; // Îñòàòîê îò äåëåíèÿ ïåðåâîäèòñÿ â îäèí ñèìâîë è ïîìåùàåòñÿ â íà÷àëî ñòðîêè
		ex = ex / p; // ×èñëî, ðàâíîå n, äåëèòñÿ íàöåëî íà ñèñòåìó ñ÷èñëåíèÿ äî òåõ ïîð, ïîêà íå ñòàíîâèòñÿ ðàâíî íóëþ
	}
	return res;
}
int other_to_dec(string a, int p) {
	string array = "0123456789ABCDE"; // Èíäåêñû ýëåìåíòîâ ðàâíû ñòîèìîñòè ñèìâîëîâ âî âñåõ ñèñòåìàõ ñ÷èñëåíèÿ ñ îñíîâàíèÿìè îò 2 äî 16
	int ex = 0, index;
	for (int j = a.length() - 1; j >= 0; j--) { // Ïåðåáîð ñèìâîëîâ â 'string' ïî èõ èíäåêñàì
		for (int k = 0; k < 15; k++) { // Êàæäûé ñèìâîë èùåòñÿ â ìàññèâå ñ ñèìâîëàìè è ïåðåâîäèòñÿ èç 'char' â 'int' 
			if (a[a.length() - 1 - j] == array[k]) { // Ïåðåáîð ñèìâîëîâ â ÷èñëå èäåò çàäîì íàïåðåä ïî èõ ðÿçðÿäàì
				index = k;
				break;
			}
		}
		ex = ex + pow(p, j) * index; // j - ðàçðÿä ÷èñëà, p - îñíîâàíèå ñèñòåìû ñ÷èñëåíèÿ, index - âåñ ðÿçðÿäà
	}
	return ex;
}
int main() {
	int num_input, n;
	setlocale(LC_ALL, "Russian");
	while (true) {
		cout << "Çàäàíèå ¹";
		cin >> num_input;
		switch (num_input) {
		case 1: {
			cout << "Ââåäèòå n: ";
			cin >> n;
			n = floor(pow(2, n)); // Ïîëó÷àåì öåëî÷èñëåííîå ÷èñëî 2^n
			string array[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E" };
			cout << "OK\nHi again!\n";
			break;
		}
		}
	}
	return 0;
}  
//я другой пользователь ылокаиарм