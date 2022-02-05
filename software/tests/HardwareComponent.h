//
// Created by Zakhar on 05.02.2022.
//

#ifndef RC_CAR_HARDWARECOMPONENT_H
#define RC_CAR_HARDWARECOMPONENT_H

#include "stdint.h"


namespace HardwareComponent {
    class HardwareComponent {
    private:
        uint8_t GPIO_PORT;
    public:
        explicit HardwareComponent(uint8_t port) {
            GPIO_PORT = port;
            pinMode(port, PWM_OUTPUT);
        }

        virtual void set(uint8_t signal) { pwmWrite(GPIO_PORT, signal); }

        virtual void reset() {}
    };

    class Servo : HardwareComponent::HardwareComponent {
    public:
        explicit Servo(uint8_t port) : HardwareComponent(port) {}
    };
}

#endif //RC_CAR_HARDWARECOMPONENT_H
