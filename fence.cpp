#include "graphics.h"
#include "picture.hpp"
void fence () {
   line(0, 500, 800, 500);
   line(0, 400, 800, 400);
   
   for(int i=5; i<800; i=i+35)
   {
      line(i, 600, i, 300);
   }
}