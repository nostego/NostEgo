#ifndef NETWORK_HH_
# define NETWORK_HH_

# include <SFML/Network.hpp>
enum
{
    NETWORK_NEW_CHARACTER = 42,
    NETWORK_DISCONNECT,
    NETWORK_KEYBOARD_PRESSED,
    NETWORK_KEYBOARD_RELEASED,
    NETWORK_CHARACTER_MOVE,
    NETWORK_EXIT_MAP,
    NETWORK_NEW_MAP,
    NETWORK_CHEST,
    NETWORK_CHEST_IS_OPEN,
    NETWORK_EOF
};

#endif
