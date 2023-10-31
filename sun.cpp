#include <iostream>
#include <graphics.h>

void sun() {

    // Рисуем солнце
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(250, 250, 100);
    floodfill(250, 250, YELLOW);

    // Рисуем лучи
    setcolor(YELLOW);
    line(250, 150, 250, 50);
    line(250, 350, 250, 450);
    line(150, 250, 50, 250);
    line(350, 250, 450, 250);
    line(180, 180, 80, 80);
    line(320, 320, 420, 420);
    line(180, 320, 80, 420);
    line(320, 180, 420, 80);
    
}