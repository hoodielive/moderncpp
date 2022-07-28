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
    virtual void execute () { jump (); } };

class FireCommand : public Command
{
  virtual void execute () { fireGun (); }
};


class InputHandler 
{
  public:
    void handleInput ();

  private:
    // Methods that bind commands.
    Command * buttonX_;
    Command * buttonY_;
    Command * buttonA_;
    Command * buttonB_;
};

void InputHandler :: handleInput()
{
  bool isPressed = false;
  bool BUTTON_X = false;
  bool BUTTON_Y = false;
  bool BUTTON_A = false;
  bool BUTTON_B = false;

  if (isPressed ( BUTTON_X )) buttonX_ ->execute();
  else if (isPressed ( BUTTON_Y )) buttonY_ ->execute();
  else if (isPressed ( BUTTON_A )) buttonA_ -> execute();
  else if (isPressed ( BUTTON_B )) buttonB_ -> execute();
}
