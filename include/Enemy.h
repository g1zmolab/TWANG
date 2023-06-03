#include "Arduino.h"

class Enemy
{
  public:
    void Spawn(int pos, int dir, int sp, int wobble);
    void Tick();
    void Kill();
    bool Alive();
    int _pos;
    int _wobble;
    int playerSide;
  private:
    int _dir;
    int _sp;
    int _alive;
    int _origin;
};
