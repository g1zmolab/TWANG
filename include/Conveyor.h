class Conveyor
{
  public:
      void Spawn(int startPoint, int endPoint, int dir);
      void Kill();
      int _startPoint;
      int _endPoint;
      int _dir;
      bool _alive;
};
