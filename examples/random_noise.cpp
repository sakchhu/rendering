#include <sac/rendering/image.hpp>

#include <cstdlib>
#include <fstream>

using namespace sac::rendering::image;

Color::byte random_byte() { return Color::byte(1 + rand() / ((RAND_MAX + 1u) / 255)); }

Color random_color() { return Color{.red = random_byte(), .green = random_byte(), .blue = random_byte()}; }

int main() {
    const int image_width  = 800;
    const int image_height = 600;
    Image     image{image_width, image_height};

    for (int x = 0; x < image_width; ++x) {
        for (int y = 0; y < image_height; ++y) {
            image.put(x, y, random_color());
        }
    }

    std::ofstream file("random_noise.ppm");
    file << image.render();
}