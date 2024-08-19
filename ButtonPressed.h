#ifndef _BUTTONPRESSED_H
#define _BUTTONPRESSED_H

#include <Arduino.h>

class ButtonPressed {
  private:
    byte _pinButton;
    byte _pinOutput;
    bool _buttonState = false;
    bool _lastButtonState = false;
    bool _outputState = false;
    bool _reading;
    unsigned long _lastDebounceTime = 0;
    const unsigned long _debounceDelay = 50;

  public:
    ButtonPressed(byte pinButton, byte pinOutput); // Use byte para os pinos
    void isButtonPressed();
};

#endif
