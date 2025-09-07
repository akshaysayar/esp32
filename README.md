# ESP32 Code Examples and Projects

This repository is a collection of source code, libraries, and example projects for the **ESP32 microcontroller**. It's designed to help you quickly build applications for ESP32-based hardware, including camera modules, LED control, and other peripherals.

---

### Getting Started

1.  **Clone the repository:**
    ```sh
    git clone [https://github.com/akshaysayar/esp32.git](https://github.com/akshaysayar/esp32.git)
    cd esp32
    ```
2.  **Install PlatformIO:** We recommend using [PlatformIO](https://platformio.org/) to build and upload these projects. Follow the official documentation for installation instructions.
3.  **Configure Your Board:**
    * Open `include/board_config.h` and adjust the settings to match your specific ESP32 hardware and board.
4.  **Build and Upload:**
    * Use the `pio run` command in your terminal from the root directory to build and upload the project to your ESP32 device.

---

### Repository Contents

* `src/` — Main source code for various ESP32 modules.
* `projects/` — Full, standalone project examples.
* `include/` — Header files and configuration settings (e.g., WiFi credentials, pin definitions).
* `lib/` — External libraries and dependencies required by the projects.
* `test/` — Test scripts and documentation.

### Example Projects

* **Camera Feed:** Located in `projects/camera_feed/`. This example demonstrates how to capture and stream video from an ESP32 camera module.
* **LED Control:** Located in `src/led_control/`. This module contains code for controlling onboard or external LEDs.

### Contributing

Contributions are welcome! If you find a bug, want to add a new feature, or improve the documentation, please open an issue or submit a pull request.

---

### License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

### Author

Akshay Sayar