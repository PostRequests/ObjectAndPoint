
#include <iostream>
#include <string>
#include "Wallpaper.h"
#include "Home.h"
#include "Room.h"
void demo();
void test();
int main()
{
    system("chcp 1251 > nul");
    demo();

}

void demo() {
    //Предустановливаем обои
    const int count = 4;
    std::vector<Wallpaper> paper;
    paper.push_back({ "Rumfa", 106, 1000, 198 });
    paper.push_back({ "Inspire Pablo", 53, 1000, 200 });
    paper.push_back({"Renowa Aldo", 106, 2000, 1398});
    paper.push_back({ "Vog Collection", 106, 1000, 398 });

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