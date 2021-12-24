#include <iostream>


class Command 
{
  public:
    virtual ~Command() {};
    virtual void execute () = 0;
    virtual void jump () = 0;
    virtual void fireGun () = 0;
};

class JumpCommand : public Command
{
  public:
    virtual void execute () { jump (); }
};

class FireCommand : public Command
{
  virtual void execute () { fireGun (); }
};
