
#include <iostream>
#include "Wallpaper.h"
#include "Home.h"
#include "Room.h"
int main()
{
    system("chcp 1251 > nul");
    Wallpaper paper{ "Любой", 30, 1500, 1200.0 };
    paper.show();
    Room room{"Зал", 600, 500, 215, paper};
    Room room2{ "Зал2", 600, 500, 215, paper };
    Home home{ room };
}

