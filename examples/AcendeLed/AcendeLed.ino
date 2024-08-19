#include <ButtonPressed.h>

const byte PIN_BUTTON = 5;
const byte PIN_LED = 4;

ButtonPressed button(PIN_BUTTON, PIN_LED);

void setup() {
  // Nenhuma configuração adicional é necessária para a biblioteca
}

void loop() {
  button.isButtonPressed(); // Verifica o estado do botão e atualiza o LED
}
