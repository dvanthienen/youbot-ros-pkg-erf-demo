// backwards compatibility file to make it compile
// with electric.

#if !ROS_VERSION_MINIMUM(1, 8, 0)

#include "LinearMath/btTransform.h"

typedef double tfScalar;

namespace tf {
  typedef btMatrix3x3 Matrix3x3;
};
#endif
