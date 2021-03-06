#ifndef OPTION_HH_
# define OPTION_HH_

# include <SFML/Graphics.hpp>
# include <misc/memory_manager.hh>

# define WIDTH_MAP 1024
# define HEIGHT_MAP 768

struct Option
{
  Option ();
  int video_flags;
  int screen_w;
  int screen_h;
  size_t fps;
  size_t curr_fps;
};

extern Option* opt;
extern sf::RenderWindow* app;
extern MemoryManager<sf::Image>* img_mng;

#endif
