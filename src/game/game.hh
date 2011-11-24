#ifndef GAME_HH_
# define GAME_HH_

# include <SDL/SDL.h>

# include "../interface/interface.hh"

struct Game
{
  Game ();
  ~Game ();
  void process ();
  void display ();

  int w;
  int h;
  bool done;
  SDL_Surface* screen;
  Interface interface;
};

extern int g_w;
extern int g_h;

#endif
