# MathCore

MathCore is a lightweight C++ mathematics library that provides reusable mathematical algorithms and data structures for scientific computing, graphics programming, simulation, game development, and general numerical applications.

Although the library currently contains a comprehensive collection of linear algebra utilities, MathCore is designed as a general-purpose mathematics library that will continue to expand with additional mathematical modules over time.

---

## Features

The current release includes support for:

- Position (3D vector) operations
- Matrix operations
- Matrix addition
- Matrix subtraction
- Matrix multiplication
- Matrix × Position multiplication
- Cross product
- Vector magnitude calculation
- Vector normalization
- Matrix construction from vectors
- Scalar transformation of matrices
- Determinant calculation
- Rotation matrix generation (X, Y, and Z axes)
- Square root calculation using the Newton-Raphson method

---

## Why MathCore?

Mathematical algorithms often require a significant amount of implementation before they become reusable.

MathCore aims to provide a clean and reusable interface for common mathematical operations so developers can focus on building applications instead of repeatedly implementing fundamental algorithms.

The library is suitable for:

- Game development
- Computer graphics
- Physics simulations
- Embedded systems
- Robotics
- Scientific computing
- Educational projects

---

## Current Library API

### Global Functions

| Function | Description |
|----------|-------------|
| `root()` | Computes the square root of a number using Newton-Raphson iteration |
| `cross_product()` | Computes the cross product of two position vectors |
| `matify()` | Converts a position vector into a diagonal matrix |
| `transform()` | Multiplies every matrix element by a scalar |
| `get_determinant()` | Computes the determinant of a 3×3 matrix |

---

### Position Class

#### Data Members

| Member | Description |
|---------|-------------|
| `x` | X component |
| `y` | Y component |
| `z` | Z component |

#### Member Functions

| Function | Description |
|----------|-------------|
| `modify_x()` | Updates the X component |
| `modify_y()` | Updates the Y component |
| `modify_z()` | Updates the Z component |
| `get_magnitude()` | Computes vector magnitude |
| `get_normalised_vector()` | Returns the normalized vector |
| `operator+()` | Adds two vectors |

---

### Matrix Class

#### Matrix Operations

| Function | Description |
|----------|-------------|
| `operator*(position)` | Matrix × Position multiplication |
| `operator*(matrix)` | Matrix × Matrix multiplication |
| `operator+()` | Matrix addition |
| `operator-()` | Matrix subtraction |

#### Rotation Matrix Generation

| Function | Description |
|----------|-------------|
| `move_on_x_axis()` | Creates a rotation matrix around the X-axis |
| `move_on_y_axis()` | Creates a rotation matrix around the Y-axis |
| `move_on_z_axis()` | Creates a rotation matrix around the Z-axis |

#### Axis Modification

| Function | Description |
|----------|-------------|
| `modify_axisX()` | Updates the X-axis row |
| `modify_axisY()` | Updates the Y-axis row |
| `modify_axisZ()` | Updates the Z-axis row |

---

## Example

```cpp
position a;
position b;

a.modify_x(2);
a.modify_y(3);
a.modify_z(4);

b.modify_x(1);
b.modify_y(2);
b.modify_z(3);

position c = a + b;
```

---

## Applications

MathCore can be used in projects involving:

- 3D graphics
- Physics engines
- Robotics
- Game engines
- Embedded software
- Scientific simulations
- Engineering software

---

## Project Status

MathCore is actively under development.

The current version provides a solid foundation of mathematical utilities, with additional mathematical modules planned in future releases.

---

## Contributing

Contributions, bug reports, feature requests, and improvements are welcome.

Feel free to fork the project and submit pull requests.

---

## License

License information will be added soon.

---

## Changelog

All feature additions and updates are documented in **`upgrades.md`**.