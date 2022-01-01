#include <MyActor.generated.h>

// Participate in Reflections gc.
// It deletes unused variables and such when they are not being used.

class AMyActor : public AActor
{
  UPROPERTY()
  float MyFloat;


  UFUNCTION()
  void myFunction();
}
