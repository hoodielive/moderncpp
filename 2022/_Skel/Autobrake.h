


struct SpeedUpdate
{
  double velocity_mps;
};


struct CarDetected
{
  double distance_m;
  double velocity_mps;
};


struct BrakeCommand
{
  double time_to_collision_s;
};

template<typename T>
struct AutoBrake
{
  AutoBrake(const T& publish) : publish { publish } {  };
  void observe(const SpeedUpdate& cd); 
  void observe(const CarDetected& cd); 
  void set_collision_threshold_s(double x)
  {
    collision_threshold_s = x;
  }
};
