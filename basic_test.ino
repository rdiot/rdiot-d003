/* OLED 0.96 I2C 128x64 (SSD1306) [D003] : http://rdiot.tistory.com/303 [RDIoT Demo] */

#include "U8glib.h"

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE);

void loop(void) {
  // picture loop
  u8g.firstPage();  
  do {
    draw();
  } while( u8g.nextPage() );

  // rebuild the picture after some delay
  delay(500);
}

void draw(void) {
  u8g.setFont(u8g_font_9x15B);
  u8g.setPrintPos(0, 12); 
  u8g.println("HC-SR04");

  u8g.setFont(u8g_font_helvB14);
  u8g.setPrintPos(0,40);

  int var = 0;
  u8g.print("Dist.="+(String)var+"mm");
}
