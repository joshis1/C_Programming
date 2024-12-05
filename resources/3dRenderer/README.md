# Maths in Programming with SDL2

## Overview
This project explores the application of mathematical concepts in programming, specifically focusing on creating 3D shapes using mathematics. The primary objective is to demonstrate the power of maths in programming, rather than just coding. The only external library used here is the SDL2 library due to its cross-platform compatibility.

## Why SDL2?
- **Cross-Platform**: SDL2 can run on any operating system, making it a versatile choice for graphics programming.
- **Abstraction**: Instead of directly manipulating the display framebuffer (`/dev/fb0`), we leverage SDL2 for easier and more efficient rendering.

## Color Sequencing and Concepts
- **ARGB Format**: We use a 32-bit color format where:
  - `A` stands for alpha (transparency), generally set to `FF` for opacity.
  - `R`, `G`, and `B` represent the red, green, and blue color components, respectively.
- **Additive Color Mixing**: In lights, mixing colors follows the additive color model. Hence, primary colors in computer graphics are RGB (red, green, blue).
- **Subtractive Coloring**: Unlike additive coloring, subtractive coloring is used in tangible mediums like painting, where mixing pigments results in the subtraction of wavelengths.

## SDL2 Texture and Renderer
- **SDL Texture**: Acts as an intermediary between the color buffer and the renderer, facilitating efficient rendering of graphics on the screen.

## Project Structure
The project is organized into various components demonstrating different mathematical concepts and their implementation in 3D graphics using SDL2.

## Getting Started
### Prerequisites
- Install SDL2 library on your system. Follow [SDL2 Installation Guide](https://wiki.libsdl.org/Installation) for instructions.

### Building the Project
1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/math-in-programming.git
   cd math-in-programming
