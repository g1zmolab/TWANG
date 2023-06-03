#include "Conveyor.h"

void Conveyor::Spawn(int startPoint, int endPoint, int dir){
    _startPoint = startPoint;
    _endPoint = endPoint;
    _dir = dir;
    _alive = true;
}

void Conveyor::Kill(){
    _alive = false;
}
