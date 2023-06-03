#include "Arduino.h"
#define FRICTION 1

class Particle
{
  public:
    void Spawn(int pos);
    void Tick(int USE_GRAVITY);
    void Kill();
    bool Alive();
    int _pos;
    int _power;
  private:
    int _life;
    int _alive;
    int _sp;
};
