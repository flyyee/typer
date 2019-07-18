#include "typer.h"
#include <windows.h>
#include <iostream>

using namespace std;

typer::typer() : word("void"), 
s_Sleep(10), sver(1), sverinfo("typers version 2: a-z, 0-9, :-./(spacekey)_\nsyntax: typers(' ');\n"), 
fctrl(0), fenter(0), falt(0), ftab(0),
f_Sleep(10), fver(2), fverinfo("typerf version 3: ctrl, enter, alt, tab\nsyntax: typerf(" ", c, e);\n") {
}

void typer::s_off() {
	unsigned char keys[] = {'0x41', '0x42', '0x43', '0x44', '0x45', '0x46', '0x47', '0x48', '0x49', '0x4a', '0x4b', '0x4c', '0x4d', '0x4e', '0x4f', '0x50', '0x51', '0x52', '0x53', 
	'0x53', '0x54', '0x55', '0x56', '0x57', '0x58', '0x59', '0x5a', '0xC0', '0xBD', '0xBA', '0xBF', '0xBE', '0x20', '0x31',  '0x32', '0x33', '0x34', '0x35', '0x36', '0x37',
	'0x38', '0x39', '0x30'  
	};
	for (int x = 0; (x < sizeof(keys)/sizeof(*keys)); x++) {
		//cout << x;
		keybd_event(keys[x], 0, 0x0002, 0);
	}
}

void typer::s_on() { //?
	unsigned char keys[] = {'0x41', '0x42', '0x43', '0x44', '0x45', '0x46', '0x47', '0x48', '0x49', '0x4a', '0x4b', '0x4c', '0x4d', '0x4e', '0x4f', '0x50', '0x51', '0x52', '0x53', 
	'0x53', '0x54', '0x55', '0x56', '0x57', '0x58', '0x59', '0x5a', '0xC0', '0xBD', '0xBA', '0xBF', '0xBE', '0x20', '0x31',  '0x32', '0x33', '0x34', '0x35', '0x36', '0x37',
	'0x38', '0x39', '0x30'  
	};
	for (int x = 0; (x < sizeof(keys)/sizeof(*keys)); x++) {
		//cout << x;
		keybd_event(keys[x], 0, 0, 0);
	}
}

//capital letters

void typer::s(string ipt) {
	char skey;
	word = ipt;
	for (int n = 0; n < word.size(); ++n) {
		skey = word[n];
		switch(skey) {
		case 'a':
			keybd_event(0x41, 0, 0, 0);
			break;
		case 'b':
			keybd_event(0x42, 0, 0, 0);
			break;
		case 'c':
			keybd_event(0x43, 0, 0, 0);
			break;
		case 'd':
			keybd_event(0x44, 0, 0, 0);
			break;
		case 'e':
			keybd_event(0x45, 0, 0, 0);
			break;
		case 'f':
			keybd_event(0x46, 0, 0, 0);
			break;
		case 'g':
			keybd_event(0x47, 0, 0, 0);
			break;
		case 'h':
			keybd_event(0x48, 0, 0, 0);
			break;
		case 'i':
			keybd_event(0x49, 0, 0, 0);
			break;
		case 'j':
			keybd_event(0x4a, 0, 0, 0);
			break;
		case 'k':
			keybd_event(0x4b, 0, 0, 0);
			break;
		case 'l':
			keybd_event(0x4c, 0, 0, 0);
			break;
		case 'm':
			keybd_event(0x4d, 0, 0, 0);
			break;
		case 'n':
			keybd_event(0x4e, 0, 0, 0);
			break;
		case 'o':
			keybd_event(0x4f, 0, 0, 0);
			break;
		case 'p':
			keybd_event(0x50, 0, 0, 0);
			break;
		case 'q':
			keybd_event(0x51, 0, 0, 0);
			break;
		case 'r':
			keybd_event(0x52, 0, 0, 0);
			break;
		case 's':
			keybd_event(0x53, 0, 0, 0);
			break;
		case 't':
			keybd_event(0x54, 0, 0, 0);
			break;
		case 'u':
			keybd_event(0x55, 0, 0, 0);
			break;
		case 'v':
			keybd_event(0x56, 0, 0, 0);
			break;
		case 'w':
			keybd_event(0x57, 0, 0, 0);
			break;
		case 'x':
			keybd_event(0x58, 0, 0, 0);
			break;
		case 'y':
			keybd_event(0x59, 0, 0, 0);
			break;
		case 'z':
			keybd_event(0x5a, 0, 0, 0);
			break;
		case '~':
			keybd_event(0xC0, 0, 0, 0);
			break;
		case '-':
			keybd_event(0xBD, 0, 0, 0);
			break;
		case ':':
			keybd_event(0x10, 0, 0, 0);
			keybd_event(0xBA, 0, 0, 0);
			keybd_event(0x10, 0, 0x0002, 0);
			break;
		case '/':
			keybd_event(0xBF, 0, 0, 0);
			break;
		case '.':
			keybd_event(0xBE, 0, 0, 0);
			break;
		case ' ':
			keybd_event(0x20, 0, 0, 0);
			break;
		case '_':
			keybd_event(0x10, 0, 0, 0);
			keybd_event(0xBD, 0, 0, 0);
			keybd_event(0x10, 0, 0x0002, 0);
			break;
		case '1':
			keybd_event(0x31, 0, 0, 0);
			break;
		case '2':
			keybd_event(0x32, 0, 0, 0);
			break;
		case '3':
			keybd_event(0x33, 0, 0, 0);
			break;
		case '4':
			keybd_event(0x34, 0, 0, 0);
			break;
		case '5':
			keybd_event(0x35, 0, 0, 0);
			break;
		case '6':
			keybd_event(0x36, 0, 0, 0);
			break;
		case '7':
			keybd_event(0x37, 0, 0, 0);
			break;
		case '8':
			keybd_event(0x38, 0, 0, 0);
			break;
		case '9':
			keybd_event(0x39, 0, 0, 0);
			break;
		case '0':
			keybd_event(0x30, 0, 0, 0);
			break;
		
		}
		Sleep(s_Sleep);
	}
}

//use if (fctrl) { reverse function } as f_Xname is a bool
//accept long string which parses words eg object.f("alttab"); Sleep(500); object.f("tabalt");
//create bool variable for automatic switch eg bool autooff = 1; object.f("enter"); result is pressing enter then turning it off instead of just continuously pressing enter

void typer::f(string fkey) {
	if (fkey == "ctrl") {
		if (fctrl == 0) {
			keybd_event(0x11, 0, 0, 0);
			fctrl = 1;
		} else {
			keybd_event(0x11, 0, 0x0002, 0);
			fctrl = 0;
		}
	}
	if (fkey == "enter") {
	    if (fenter == 0) {
			keybd_event(0x0D, 0, 0, 0);
			fenter = 1;
		} else {
			keybd_event(0x0D, 0, 0x0002, 0);
			fenter = 0;
		}
	}
	if (fkey == "alt") {
	    if (falt == 0) {
			keybd_event(0x12, 0, 0, 0);
			falt = 1;
		} else {
			keybd_event(0x12, 0, 0x0002, 0);
			falt = 0;
		}
	}
	if (fkey == "tab") {
	    if (ftab == 0) {
			keybd_event(0x09, 0, 0, 0);
			ftab = 1;
		} else {
			keybd_event(0x09, 0, 0x0002, 0);
			ftab = 0;
		}
	}
	Sleep(f_Sleep);
}


