#include "MCHMappingSegContour/CathodeSegmentationContours.h"
#include <iostream>

using namespace o2::mch::mapping;

int main(int argc, char** argv)
{
  if (argc < 2) {
    std::cerr << "Need at least two parameters : deid and bending (0/1)\n";
    exit(1);
  }
  int deid = atoi(argv[1]);
  bool bending = atoi(argv[2]) == 1;

  CathodeSegmentation cseg(deid, bending);

  auto contour = getEnvelop(cseg);

  auto vertices = contour.getVertices();

  for (auto& v : vertices) {
    std::cout << v << "\n";
  }
  return 0;
}
