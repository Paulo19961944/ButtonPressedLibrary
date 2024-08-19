#include "ButtonPressed.h"

ButtonPressed::ButtonPressed(byte pinButton, byte pinOutput) {
  _pinButton = pinButton;
  _pinOutput = pinOutput;
  pinMode(_pinButton, INPUT_PULLUP);
  pinMode(_pinOutput, OUTPUT);
}

void ButtonPressed::isButtonPressed() {
  _reading = digitalRead(_pinButton);
  if (_reading != _lastButtonState) {
    _lastDebounceTime = millis();
  }
  
  if ((millis() - _lastDebounceTime) > _debounceDelay) {
    if (_reading != _buttonState) {
      _buttonState = _reading;
      if (_buttonState == LOW) {
        _outputState = !_outputState;
        digitalWrite(_pinOutput, _outputState ? HIGH : LOW);
      }
    }
  }
  
  _lastButtonState = _reading; // Atualize o último estado do botão
}
