#ifndef TYPER_H
#define TYPER_H
#include <iostream>

using namespace std;

//use array of bools instead of fc, fe

class typer {
	public:
		typer();
		string word;
		int s_Sleep, f_Sleep;
		const int sver, fver;
		const string sverinfo, fverinfo;
		bool fctrl, fenter, falt, ftab;
		void s(string ipt);
		void f(string fkey);
		void s_off();
		void s_on();
};


#endif
