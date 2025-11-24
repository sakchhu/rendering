// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#include <sac/rendering/image.hpp>

#include <gtest/gtest.h>

#include <algorithm>
#include <functional>

namespace img = sac::rendering::image;

TEST(ImageTest, image_can_be_instantiated) { img::Image{600, 800}; }