#include "Spawner.h"

void Spawner::Spawn(int pos, int rate, int sp, int dir, long activate){
    _pos = pos;
    _rate = rate;
    _sp = sp;
    _dir = dir;
    _activate = millis()+activate;
    _alive = 1;
}

void Spawner::Kill(){
    _alive = 0;
    _lastSpawned = 0;
}

int Spawner::Alive(){
    return _alive;
}
