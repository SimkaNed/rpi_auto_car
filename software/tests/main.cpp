//
// Created by Zakhar on 05.02.2022.
//
#include "test_servo.h"
#include <HardwareComponent.h>

int main() {
    HardwareComponent::Servo servo(static_cast<uint8_t >(12));
    return 0;
}
