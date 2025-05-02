#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/rmt_tx.h"
#include "led_strip_encoder.h"

#define LED_PIN 15
#define RMT_RESOLUTION_HZ 10000000

static const char *TAG = "NeoPixelTest";

void app_main(void)
{
    ESP_LOGI(TAG, "Configuring RMT on GPIO %d", LED_PIN);

    rmt_channel_handle_t rmt_chan = NULL;
    rmt_tx_channel_config_t tx_config = {
        .clk_src = RMT_CLK_SRC_DEFAULT,
        .gpio_num = LED_PIN,
        .mem_block_symbols = 64,
        .resolution_hz = RMT_RESOLUTION_HZ,
        .trans_queue_depth = 4,
    };
    ESP_ERROR_CHECK(rmt_new_tx_channel(&tx_config, &rmt_chan));

    rmt_encoder_handle_t led_encoder = NULL;
    led_strip_encoder_config_t encoder_config = {
        .resolution = RMT_RESOLUTION_HZ,
    };
    ESP_ERROR_CHECK(rmt_new_led_strip_encoder(&encoder_config, &led_encoder));

    ESP_ERROR_CHECK(rmt_enable(rmt_chan));

    uint8_t red[3] = {0, 255, 0};  // GRB for red

    rmt_transmit_config_t tx_cfg = {
        .loop_count = 0,
    };

    ESP_LOGI(TAG, "Sending RED to NeoPixel...");
    ESP_ERROR_CHECK(rmt_transmit(rmt_chan, led_encoder, red, sizeof(red), &tx_cfg));
    ESP_ERROR_CHECK(rmt_tx_wait_all_done(rmt_chan, portMAX_DELAY));

    ESP_LOGI(TAG, "Done.");
}
