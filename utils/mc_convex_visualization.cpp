#include "RobotVisualizer.h"

int main(int argc, char * argv[])
{
  RobotVisualizer visualizer(params_from_main(argc, argv), true, false);
  visualizer.run();
  return 0;
}
