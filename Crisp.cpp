//line 16
#include<string>
#include<iostream>
#include<regex>
using namespace std;

void print(string s) {
	cout << s;
}
void println(string s) {
	cout << s << endl;
}
int coderun(string code) {
	regex arg("^[\"].{0, 9999999999999999999}[\"]$");
	for (int i = 1; i < code.size(); i++) {
		//this
	}
}
int main() {
	string code;
	bool run;
	char ch;
	while (run){
		do {
			cin >> ch;
		} while (ch != ';');
		{
			code += ch;
		}
		coderun(code);
	}
}