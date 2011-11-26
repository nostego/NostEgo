#include "animation.hh"
#include <iostream>

Animation::Animation ()
{
  last_process = 0;
  delay_process = 20;
  step = 0;
  img = 0;
  playing = true;
  stepping = false;
}

Animation::~Animation ()
{
  if (img)
    SDL_FreeSurface (img);
}

void Animation::display (SDL_Surface* screen)
{
  Uint32 curr_process;

  mask.x = step * (img->w / max_step);

  SDL_BlitSurface (img, &mask, screen, &rect);
  if ((!playing) && (!stepping))
    return;
  stepping = false;
  if (!last_process)
    {
      last_process = SDL_GetTicks();
      return;
    }
  curr_process = SDL_GetTicks ();
  if (curr_process - last_process > delay_process)
    {
      step = (step + 1) % max_step;
      last_process = curr_process;
    }
}

void Animation::load (SDL_Surface* p_img,
		      int x,
		      int y,
		      int p_max_step,
		      int p_delay_process)
{
  img = p_img;
  rect.x = x;
  rect.y = y;
  mask.x = 0;
  mask.y = 0;
  mask.h = img->h;
  mask.w = img->w / p_max_step;
  max_step = p_max_step;
  rect.h = mask.h;
  rect.w = mask.w;
  delay_process = p_delay_process;
}