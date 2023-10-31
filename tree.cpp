#include <graphics.h>

void tree() {
  int points[] = {
      390, 200, 430, 200, 450, 400, 370, 400,
  };
  setfillstyle(SOLID_FILL, BROWN, -1);
  fillpoly(4, points);
  setfillstyle(SOLID_FILL, GREEN, -1);
  fillellipse(450, 210, 60, 60);
  // fillellipse(415, 250, 25, 25);
  fillellipse(390, 190, 45, 45);
  fillellipse(370, 230, 50, 50);
}
