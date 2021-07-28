# Set Board, CONF_FILE, and DTC_OVERLAY_FILE
set(BOARD nrf52820test)
set(CONF_FILE "prj.conf")

# Find Zephyr and set min cmake
cmake_minimum_required(VERSION 3.13.1)
find_package(Zephyr)
project(my_zephyr_app)

# Add your source file to the "app" target.
target_sources(app PRIVATE src/main.c)
