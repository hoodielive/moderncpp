#include <iostream>
#include <cmath>
using namespace std;

struct FVector
{
  void GetActorLocation();
};

struct FRotator
{
  void GetActorRotation();
};

struct FMath
{
  void FRand();

};

class ATreeBase
{
  FVector SpawnLoc = GetActorLocation();
  FVector SpawnRot = GetActorRotation();
};


