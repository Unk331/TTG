# TTY_APP - Random Number Generator for Table to Game

Welcome to **TTY_APP**, the **random number generator** designed to bridge the gap between **Tabletop** and **Gaming**. Whether you're rolling dice in a tabletop game or generating random values for a video game, this tool will simulate pulse-like randomness with an easy-to-understand interface. 

**Heartbeat** is the core API that powers TTY_APP, providing the pulse of randomness that you need for your **Table to Game** needs, such as board games, role-playing games, or procedural generation in video games.

## 🚀 Features
- **Random Number Generation**: Generates pulse-like random values, ideal for tabletop game randomness or procedural game mechanics.
- **Debugging Mode**: Option to print the current pulse value for debugging purposes.
- **Multithreading**: Uses multithreading for smooth and consistent pulse generation without blocking the main thread.
- **Flexible Output**: Retrieve or modify random number outputs for any scenario that requires a randomized result.

## 🛠️ Files Overview
- **`Heartbeat.hpp`**: The header file containing the class definition of the `Heartbeat` API.
- **`Heartbeat.cpp`**: Contains the implementation of the `Heartbeat` class methods, providing the core functionality.
- **`TTY_APP.cpp`**: The main executable file demonstrating the usage of the `Heartbeat` API to simulate randomness.
- **`README.md`**: Project documentation and setup guide.

## 📥 Installation

To start using **TTY_APP** and the **Heartbeat** API, follow these simple steps:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/TTY_APP.git
   cd TTY_APP

# TTY_APP

**Last updated on**: **{{current_date}}**

Welcome to **TTY_APP**, the random number generator for Table To Game!

## CI/CD Workflow

### Overview
This project uses **GitHub Actions** to automatically build, test, and deploy the project on multiple platforms (Windows and Ubuntu) using different compilers (GCC, Clang, MSVC). Every time a change is made to the `main` branch or a pull request is created, the workflow will trigger, and the status will be reported back to the repository.

### CI/CD Details

- **Build Platforms**: Ubuntu (latest) and Windows (latest)
- **Compilers**: GCC, Clang, and MSVC (for Windows)
- **Build Types**: Release (can be customized to include Debug, RelWithDebInfo, etc.)
- **Test Framework**: CTest is used to run unit and integration tests to ensure the stability of the project.

### How it Works:
1. **Checkout the Code**: The workflow starts by checking out the code in your repository.
2. **Set Up Build Environment**: The required C and C++ compilers are configured based on the platform and compiler matrix defined in the CI configuration.
3. **Configure CMake**: The build system is configured with CMake.
4. **Build the Project**: CMake is used to compile the code in the specified build configuration.
5. **Run Tests**: Once the build is complete, CTest is used to execute the tests defined in the project.
6. **Date Update**: The README file is automatically updated with the current date every time the workflow runs.

### Automating the Date in README
As part of the CI/CD process, the **current date** is automatically inserted into the README file every time the workflow runs. This keeps the README up-to-date without requiring manual changes.

---

