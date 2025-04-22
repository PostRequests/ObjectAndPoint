
#include <iostream>
#include "Wallpaper.h"
#include "Home.h"
#include "Room.h"
#include "MyLib/console/ANSI.h"
#include "MyLib/str/str.h"
#include "MyLib/Menu/Menu.h"
int main()
{
    system("chcp 1251 > nul");
   /* Wallpaper paper{ "Любой", 30, 1500, 1200.0 };
    paper.show();
    Room room{"Зал", 600, 500, 215, paper};
    Room room2 = room;
    room2.changeName("A2");
    Home home{room};
    home.copyRoom(room2);
    home.addRoom(room);
    home.addRoom(room);
    home.addRoom(room);
    home.showRoom();
    std::cout << '\n';
    Home h2{ room2 };
    h2.addHome(home);
    h2.showRoom();*/
    //home.addRoom(room);
    setColor(BlueFG);
    int rooms; //Количество комнат
    int heightRooms; //Высота потолков квартиры
    std::cout <<  "=== Расчет стоимости обоев ===" << std::endl;
    
    std::cout << "\nВведите количество комнат: ";
    std::cin >> rooms;
    std::cout << "\nВведите высоту потолков всей квартиры: ";
    std::cin >> heightRooms;
    for (int i = 0; i < rooms; i++)
    {
        str nRoom{ "Комната " };
        std::cout << "\n" << nRoom + (i + 1);
        std::cout << "\n" << nRoom;
    }

    
}

