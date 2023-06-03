#include "Arduino.h"

class Lava
{
  public:
    void Spawn(int left, int right, int ontime, int offtime, int offset, char* state);
    void Kill();
    int Alive();
    int _left;
    int _right;
    int _ontime;
    int _offtime;
    int _offset;
    long _lastOn;
    char* _state;
  private:
    int _alive;
};
