#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#define LED_VERMELHO 11
#define LED_AMARELO 12
#define LED_VERDE 13

volatile int estado = 0; // 0: vermelho, 1: amarelo, 2: verde

bool repeating_timer_callback(struct repeating_timer *t)
{
    // Alterna os LEDs conforme o estado do semáforo
    gpio_put(LED_VERMELHO, estado == 0);
    gpio_put(LED_AMARELO, estado == 1);
    gpio_put(LED_VERDE, estado == 2);

    // Atualiza o estado
    estado = (estado + 1) % 3;
    return true; // Mantém o timer ativo
}

int main()
{
    stdio_init_all(); // Inicializa a UART para comunicação serial

    // Configura os pinos dos LEDs como saída
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_init(LED_AMARELO);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);

    // Inicia o semáforo no vermelho
    gpio_put(LED_VERMELHO, 1);
    gpio_put(LED_AMARELO, 0);
    gpio_put(LED_VERDE, 0);

    struct repeating_timer timer;
    add_repeating_timer_ms(-3000, repeating_timer_callback, NULL, &timer);

    while (true)
    {
        printf("Semáforo funcionando...\n");
        sleep_ms(1000);
    }
}
