#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

// ESP32 WROVER-KIT PIN Map
#define PWDN_GPIO_NUM    -1     // Power down pin (not used)
#define RESET_GPIO_NUM   -1     // Reset pin (not used)
#define XCLK_GPIO_NUM    21     // XCLK
#define SIOD_GPIO_NUM    26     // SDA
#define SIOC_GPIO_NUM    27     // SCL
#define Y9_GPIO_NUM      35     // Data bit 7
#define Y8_GPIO_NUM      34     // Data bit 6
#define Y7_GPIO_NUM      39     // Data bit 5
#define Y6_GPIO_NUM      36     // Data bit 4
#define Y5_GPIO_NUM      19     // Data bit 3
#define Y4_GPIO_NUM      18     // Data bit 2
#define Y3_GPIO_NUM      5      // Data bit 1
#define Y2_GPIO_NUM      4      // Data bit 0
#define VSYNC_GPIO_NUM   25     // Vertical Sync
#define HREF_GPIO_NUM    23     // Horizontal Reference
#define PCLK_GPIO_NUM    22     // Pixel Clock

// Camera configuration
#define CAMERA_MODEL_WROVER_KIT // This tells the code we're using the WROVER-KIT

#endif // BOARD_CONFIG_H
