#ifndef CUMAT_H_
#define CUMAT_H_

#include <iostream>
#include </usr/local/cuda-9.0/include/cuda_runtime.h>
#include <cmath>
#include <random>
#include <sstream>
#include <map>

#include <boost/serialization/export.hpp>
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/vector.hpp>

#include </usr/local/cuda-9.0/include/cublas_v2.h>

#include "mat_mul_elementwise_kernel.h"
#include "matmod_kernel.h"
#include "mat_log_kernel.h"
#include "mat_sqrt_kernel.h"
#include "mat_sqrt_d_kernel.h"
#include "relu_kernel.h"


#endif
