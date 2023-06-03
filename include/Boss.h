#include "Arduino.h"

class Boss
{
  public:
    void Spawn();
    void Hit();
    void Kill();
    bool Alive();
    int _pos;
    int _lives;
    int _ticks;
  private:
    bool _alive;
};

