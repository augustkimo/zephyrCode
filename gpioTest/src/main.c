#include <zephyr.h>
#include <device.h>
#include <devicetree.h>
#include <drivers/gpio.h>

#ifndef FLAGS
#define FLAGS    0
#endif

void main(void)
{
  struct device *dev;
  dev = device_get_binding("gpio0");

  gpio_pin_configure(dev, 29, GPIO_OUTPUT_ACTIVE | FLAGS);
  gpio_pin_configure(dev, 30, GPIO_OUTPUT_ACTIVE | FLAGS);

  while(true){
    k_sleep(K_SECONDS(1.5));
    gpio_pin_set(dev, 29, 0);
    gpio_pin_set(dev, 30, 0);
    k_sleep(K_SECONDS(1.5));
    gpio_pin_set(dev, 29, 1);
    gpio_pin_set(dev, 30, 1);
  }
}
