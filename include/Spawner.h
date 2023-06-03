#include "Arduino.h"

class Spawner
{
  public:
    void Spawn(int pos, int rate, int sp, int dir, long activate);
    void Kill();
    int Alive();
    int _pos;
    int _rate;
    int _sp;
    int _dir;
    long _lastSpawned;
    long _activate;
  private:
    int _alive;
};
