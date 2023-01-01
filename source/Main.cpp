#include"Crisp.h"

void run(string code) {
	for (int i = 1; i < code.size(); i++) {
		//TODO
	}
}
int main() {
	string code;
	bool isRun = true;
	char ch;
	while (isRun){
		do {
			ch = cin.get();
			code += ch;
			cout << ch << endl;
		} while (ch != ';');
		cout << "/code/";
		cout << code << endl;
		isRun = false;
		run(code);
	}
}