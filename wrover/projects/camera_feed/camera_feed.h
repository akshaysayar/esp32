#ifndef CAMERA_FEED_H
#define CAMERA_FEED_H

#include "esp_http_server.h"

void setupCameraFeed();
void startCameraServer();

// Handler declarations for camera server endpoints
esp_err_t stream_handler(httpd_req_t *req);
esp_err_t capture_handler(httpd_req_t *req);

#endif
