
#include <iostream>
#include "Wallpaper.h"
#include "Home.h"
#include "Room.h"
#include <string>
#include "MyLib/console/ANSI.h"
#include "MyLib/Menu/Menu.h"
void demo();
void test();
int main()
{
    system("chcp 1251 > nul");
    demo();
    //test();
    //system("pause>nul");
       
    //int сRooms; //Количество комнат
    //int heightRooms; //Высота потолков квартиры
    //std::cout <<  "=== Расчет стоимости обоев ===" << std::endl;
    //
    //std::cout << "\nВведите количество комнат: ";
    //std::cin >> сRooms;
    //std::cout << "\nВведите высоту потолков всей квартиры, в см.: ";
    //std::cin >> heightRooms;
    //Home home;
    //for (int i = 0; i < сRooms; i++)
    //{
    //    Room r;
    //    Wallpaper w;
    //    home.addRoom(
    //        r.changeWallpaper(w.input())
    //        .setHeigth(сRooms)
    //        .inputAB()
    //        .changeName("Комната " + std::to_string(i + 1))
    //    );
    //}
    //home.showRoom();
    //system("pause>nul");
}

void demo() {
    //Предустановливаем обои
    const int count = 4;
    Wallpaper paper[count];
    paper[0] = { "Rumfa", 106, 1000, 198 };
    paper[1] = { "Inspire Pablo", 53, 1000, 200 };
    paper[2] = { "Renowa Aldo", 106, 2000, 1398 };
    paper[3] = { "Vog Collection", 106, 1000, 398 };

    //Предустанавливаем комнаты
    Room rooms[count];
    for (int i = 0; i < count; i++)
        rooms[i].changeWallpaper(paper[i])
        .changeName(("Комната ") + std::to_string(i + 1))
        .setHeigth(200)
        .setWlls(i % 2 == 0);
    rooms[0].setA(320).setB(450);
    rooms[1].setA(280).setB(375);
    rooms[2].setA(400).setB(500);
    rooms[3].setA(350).setB(420);
    Home h;
    for (int i = 0; i < count; i++)
        h.addRoom(rooms[i]);
    h.showRoom();
}

void test() {
    Wallpaper p{ "Inspire Pablo", 53, 1000, 200 };
    Room r{"Room", 320,450, 200, p};
    Home h{ r };
    h.showRoom();
}