#include "Key.h"

char convertKey(char key) {
    tolower(key);
    switch (key) {
    case 'w': case 72: case -106: case -26:	return 'w';
    case 'a': case 75: case -108: case -28:	return 'a';
    case 's': case 80: case -101: case -21:	return 's';
    case 'd': case 77: case -126: case -94:	return 'd';
    case 'q': case -87: case -119: return'q';
    case 't': case -97: case -123: return 't';
    case 'r': case -86: case -118: return 'r';
    case 'f': case -64: case -32: return 'f';
    case 13: return 13; //Enter
    default: return 0;
    }
}

char catchKey() {
    while (true)
    {
        int input = _getch();
        if (input != 0 and input != 0xE0) {
            char key = input;
            return convertKey(key);
        }
    }
}