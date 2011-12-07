#ifndef INTERFACE_CREATION_HH_
# define INTERFACE_CREATION_HH_

# include "base_interface.hh"

class InterfaceCreation : public BaseInterface<InterfaceCreation>
{
public:
   InterfaceCreation ();
   ~InterfaceCreation ();
  void previous ();
  void confirm ();
private:
  sf::Font* stone;
};

#endif
