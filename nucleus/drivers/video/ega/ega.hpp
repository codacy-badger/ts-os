//By Tsuki Superior
#ifndef __TSOS_EGA_DRIVER__
#define __TSOS_EGA_DRIVER__

#include "video.hpp"

class EGA_driver: public Video_driver
{
 public:
  EGA_driver(void);
  void reset(void);
  void putchar(char c, Color bc, Color fc);
  uint16_t gettextcursor(void);
  void seektextcursor(uint16_t pos); 
  char * gettextbuffer(void);
  uint16_t gettextbufferlength(void);
  uint16_t getscreenwidth(void);
  uint16_t getscreenheight(void);
  void setfont(Font f);

  machine_type machine=PERSONAL_COMPUTER;
 private:

  //The text cursor
  uin16_t text_cursor;

  //The length of the text buffer
  uint16_t text_buffer_length;

  //The text buffer
  char * text_buffer;

  video_mode mode;
};

#endif