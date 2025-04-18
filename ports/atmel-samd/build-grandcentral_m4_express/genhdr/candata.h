#include <stdint.h>
#include "py/obj.h"
#include "sam.h"
#include "samd/pins.h"
#include "mpconfigport.h"
#include "atmel_start_pins.h"
#include "hal/include/hal_gpio.h"
#include "common-hal/microcontroller/Pin.h"

mcu_pin_function_t can_rx [] = {
#if defined(PINMUX_PA00H_CAN0_RX) && ! defined(IGNORE_PIN_PA00)
    {&pin_PA00, 0, PIN_PA00, PINMUX_PA00H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA01H_CAN0_RX) && ! defined(IGNORE_PIN_PA01)
    {&pin_PA01, 0, PIN_PA01, PINMUX_PA01H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA02H_CAN0_RX) && ! defined(IGNORE_PIN_PA02)
    {&pin_PA02, 0, PIN_PA02, PINMUX_PA02H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA03H_CAN0_RX) && ! defined(IGNORE_PIN_PA03)
    {&pin_PA03, 0, PIN_PA03, PINMUX_PA03H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA04H_CAN0_RX) && ! defined(IGNORE_PIN_PA04)
    {&pin_PA04, 0, PIN_PA04, PINMUX_PA04H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA05H_CAN0_RX) && ! defined(IGNORE_PIN_PA05)
    {&pin_PA05, 0, PIN_PA05, PINMUX_PA05H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA06H_CAN0_RX) && ! defined(IGNORE_PIN_PA06)
    {&pin_PA06, 0, PIN_PA06, PINMUX_PA06H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA07H_CAN0_RX) && ! defined(IGNORE_PIN_PA07)
    {&pin_PA07, 0, PIN_PA07, PINMUX_PA07H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA08H_CAN0_RX) && ! defined(IGNORE_PIN_PA08)
    {&pin_PA08, 0, PIN_PA08, PINMUX_PA08H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA09H_CAN0_RX) && ! defined(IGNORE_PIN_PA09)
    {&pin_PA09, 0, PIN_PA09, PINMUX_PA09H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA10H_CAN0_RX) && ! defined(IGNORE_PIN_PA10)
    {&pin_PA10, 0, PIN_PA10, PINMUX_PA10H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA11H_CAN0_RX) && ! defined(IGNORE_PIN_PA11)
    {&pin_PA11, 0, PIN_PA11, PINMUX_PA11H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA12H_CAN0_RX) && ! defined(IGNORE_PIN_PA12)
    {&pin_PA12, 0, PIN_PA12, PINMUX_PA12H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA13H_CAN0_RX) && ! defined(IGNORE_PIN_PA13)
    {&pin_PA13, 0, PIN_PA13, PINMUX_PA13H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA14H_CAN0_RX) && ! defined(IGNORE_PIN_PA14)
    {&pin_PA14, 0, PIN_PA14, PINMUX_PA14H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA15H_CAN0_RX) && ! defined(IGNORE_PIN_PA15)
    {&pin_PA15, 0, PIN_PA15, PINMUX_PA15H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA16H_CAN0_RX) && ! defined(IGNORE_PIN_PA16)
    {&pin_PA16, 0, PIN_PA16, PINMUX_PA16H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA17H_CAN0_RX) && ! defined(IGNORE_PIN_PA17)
    {&pin_PA17, 0, PIN_PA17, PINMUX_PA17H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA18H_CAN0_RX) && ! defined(IGNORE_PIN_PA18)
    {&pin_PA18, 0, PIN_PA18, PINMUX_PA18H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA19H_CAN0_RX) && ! defined(IGNORE_PIN_PA19)
    {&pin_PA19, 0, PIN_PA19, PINMUX_PA19H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA20H_CAN0_RX) && ! defined(IGNORE_PIN_PA20)
    {&pin_PA20, 0, PIN_PA20, PINMUX_PA20H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA21H_CAN0_RX) && ! defined(IGNORE_PIN_PA21)
    {&pin_PA21, 0, PIN_PA21, PINMUX_PA21H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA22H_CAN0_RX) && ! defined(IGNORE_PIN_PA22)
    {&pin_PA22, 0, PIN_PA22, PINMUX_PA22H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA23H_CAN0_RX) && ! defined(IGNORE_PIN_PA23)
    {&pin_PA23, 0, PIN_PA23, PINMUX_PA23H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA24H_CAN0_RX) && ! defined(IGNORE_PIN_PA24)
    {&pin_PA24, 0, PIN_PA24, PINMUX_PA24H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA25H_CAN0_RX) && ! defined(IGNORE_PIN_PA25)
    {&pin_PA25, 0, PIN_PA25, PINMUX_PA25H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA26H_CAN0_RX) && ! defined(IGNORE_PIN_PA26)
    {&pin_PA26, 0, PIN_PA26, PINMUX_PA26H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA27H_CAN0_RX) && ! defined(IGNORE_PIN_PA27)
    {&pin_PA27, 0, PIN_PA27, PINMUX_PA27H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA28H_CAN0_RX) && ! defined(IGNORE_PIN_PA28)
    {&pin_PA28, 0, PIN_PA28, PINMUX_PA28H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA29H_CAN0_RX) && ! defined(IGNORE_PIN_PA29)
    {&pin_PA29, 0, PIN_PA29, PINMUX_PA29H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA30H_CAN0_RX) && ! defined(IGNORE_PIN_PA30)
    {&pin_PA30, 0, PIN_PA30, PINMUX_PA30H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA31H_CAN0_RX) && ! defined(IGNORE_PIN_PA31)
    {&pin_PA31, 0, PIN_PA31, PINMUX_PA31H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB00H_CAN0_RX) && ! defined(IGNORE_PIN_PB00)
    {&pin_PB00, 0, PIN_PB00, PINMUX_PB00H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB01H_CAN0_RX) && ! defined(IGNORE_PIN_PB01)
    {&pin_PB01, 0, PIN_PB01, PINMUX_PB01H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB02H_CAN0_RX) && ! defined(IGNORE_PIN_PB02)
    {&pin_PB02, 0, PIN_PB02, PINMUX_PB02H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB03H_CAN0_RX) && ! defined(IGNORE_PIN_PB03)
    {&pin_PB03, 0, PIN_PB03, PINMUX_PB03H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB04H_CAN0_RX) && ! defined(IGNORE_PIN_PB04)
    {&pin_PB04, 0, PIN_PB04, PINMUX_PB04H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB05H_CAN0_RX) && ! defined(IGNORE_PIN_PB05)
    {&pin_PB05, 0, PIN_PB05, PINMUX_PB05H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB06H_CAN0_RX) && ! defined(IGNORE_PIN_PB06)
    {&pin_PB06, 0, PIN_PB06, PINMUX_PB06H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB07H_CAN0_RX) && ! defined(IGNORE_PIN_PB07)
    {&pin_PB07, 0, PIN_PB07, PINMUX_PB07H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB08H_CAN0_RX) && ! defined(IGNORE_PIN_PB08)
    {&pin_PB08, 0, PIN_PB08, PINMUX_PB08H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB09H_CAN0_RX) && ! defined(IGNORE_PIN_PB09)
    {&pin_PB09, 0, PIN_PB09, PINMUX_PB09H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB10H_CAN0_RX) && ! defined(IGNORE_PIN_PB10)
    {&pin_PB10, 0, PIN_PB10, PINMUX_PB10H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB11H_CAN0_RX) && ! defined(IGNORE_PIN_PB11)
    {&pin_PB11, 0, PIN_PB11, PINMUX_PB11H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB12H_CAN0_RX) && ! defined(IGNORE_PIN_PB12)
    {&pin_PB12, 0, PIN_PB12, PINMUX_PB12H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB13H_CAN0_RX) && ! defined(IGNORE_PIN_PB13)
    {&pin_PB13, 0, PIN_PB13, PINMUX_PB13H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB14H_CAN0_RX) && ! defined(IGNORE_PIN_PB14)
    {&pin_PB14, 0, PIN_PB14, PINMUX_PB14H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB15H_CAN0_RX) && ! defined(IGNORE_PIN_PB15)
    {&pin_PB15, 0, PIN_PB15, PINMUX_PB15H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB16H_CAN0_RX) && ! defined(IGNORE_PIN_PB16)
    {&pin_PB16, 0, PIN_PB16, PINMUX_PB16H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB17H_CAN0_RX) && ! defined(IGNORE_PIN_PB17)
    {&pin_PB17, 0, PIN_PB17, PINMUX_PB17H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB18H_CAN0_RX) && ! defined(IGNORE_PIN_PB18)
    {&pin_PB18, 0, PIN_PB18, PINMUX_PB18H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB19H_CAN0_RX) && ! defined(IGNORE_PIN_PB19)
    {&pin_PB19, 0, PIN_PB19, PINMUX_PB19H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB20H_CAN0_RX) && ! defined(IGNORE_PIN_PB20)
    {&pin_PB20, 0, PIN_PB20, PINMUX_PB20H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB21H_CAN0_RX) && ! defined(IGNORE_PIN_PB21)
    {&pin_PB21, 0, PIN_PB21, PINMUX_PB21H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB22H_CAN0_RX) && ! defined(IGNORE_PIN_PB22)
    {&pin_PB22, 0, PIN_PB22, PINMUX_PB22H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB23H_CAN0_RX) && ! defined(IGNORE_PIN_PB23)
    {&pin_PB23, 0, PIN_PB23, PINMUX_PB23H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB24H_CAN0_RX) && ! defined(IGNORE_PIN_PB24)
    {&pin_PB24, 0, PIN_PB24, PINMUX_PB24H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB25H_CAN0_RX) && ! defined(IGNORE_PIN_PB25)
    {&pin_PB25, 0, PIN_PB25, PINMUX_PB25H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB26H_CAN0_RX) && ! defined(IGNORE_PIN_PB26)
    {&pin_PB26, 0, PIN_PB26, PINMUX_PB26H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB27H_CAN0_RX) && ! defined(IGNORE_PIN_PB27)
    {&pin_PB27, 0, PIN_PB27, PINMUX_PB27H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB28H_CAN0_RX) && ! defined(IGNORE_PIN_PB28)
    {&pin_PB28, 0, PIN_PB28, PINMUX_PB28H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB29H_CAN0_RX) && ! defined(IGNORE_PIN_PB29)
    {&pin_PB29, 0, PIN_PB29, PINMUX_PB29H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB30H_CAN0_RX) && ! defined(IGNORE_PIN_PB30)
    {&pin_PB30, 0, PIN_PB30, PINMUX_PB30H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB31H_CAN0_RX) && ! defined(IGNORE_PIN_PB31)
    {&pin_PB31, 0, PIN_PB31, PINMUX_PB31H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC00H_CAN0_RX) && ! defined(IGNORE_PIN_PC00)
    {&pin_PC00, 0, PIN_PC00, PINMUX_PC00H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC01H_CAN0_RX) && ! defined(IGNORE_PIN_PC01)
    {&pin_PC01, 0, PIN_PC01, PINMUX_PC01H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC02H_CAN0_RX) && ! defined(IGNORE_PIN_PC02)
    {&pin_PC02, 0, PIN_PC02, PINMUX_PC02H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC03H_CAN0_RX) && ! defined(IGNORE_PIN_PC03)
    {&pin_PC03, 0, PIN_PC03, PINMUX_PC03H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC04H_CAN0_RX) && ! defined(IGNORE_PIN_PC04)
    {&pin_PC04, 0, PIN_PC04, PINMUX_PC04H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC05H_CAN0_RX) && ! defined(IGNORE_PIN_PC05)
    {&pin_PC05, 0, PIN_PC05, PINMUX_PC05H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC06H_CAN0_RX) && ! defined(IGNORE_PIN_PC06)
    {&pin_PC06, 0, PIN_PC06, PINMUX_PC06H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC07H_CAN0_RX) && ! defined(IGNORE_PIN_PC07)
    {&pin_PC07, 0, PIN_PC07, PINMUX_PC07H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC08H_CAN0_RX) && ! defined(IGNORE_PIN_PC08)
    {&pin_PC08, 0, PIN_PC08, PINMUX_PC08H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC09H_CAN0_RX) && ! defined(IGNORE_PIN_PC09)
    {&pin_PC09, 0, PIN_PC09, PINMUX_PC09H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC10H_CAN0_RX) && ! defined(IGNORE_PIN_PC10)
    {&pin_PC10, 0, PIN_PC10, PINMUX_PC10H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC11H_CAN0_RX) && ! defined(IGNORE_PIN_PC11)
    {&pin_PC11, 0, PIN_PC11, PINMUX_PC11H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC12H_CAN0_RX) && ! defined(IGNORE_PIN_PC12)
    {&pin_PC12, 0, PIN_PC12, PINMUX_PC12H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC13H_CAN0_RX) && ! defined(IGNORE_PIN_PC13)
    {&pin_PC13, 0, PIN_PC13, PINMUX_PC13H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC14H_CAN0_RX) && ! defined(IGNORE_PIN_PC14)
    {&pin_PC14, 0, PIN_PC14, PINMUX_PC14H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC15H_CAN0_RX) && ! defined(IGNORE_PIN_PC15)
    {&pin_PC15, 0, PIN_PC15, PINMUX_PC15H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC16H_CAN0_RX) && ! defined(IGNORE_PIN_PC16)
    {&pin_PC16, 0, PIN_PC16, PINMUX_PC16H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC17H_CAN0_RX) && ! defined(IGNORE_PIN_PC17)
    {&pin_PC17, 0, PIN_PC17, PINMUX_PC17H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC18H_CAN0_RX) && ! defined(IGNORE_PIN_PC18)
    {&pin_PC18, 0, PIN_PC18, PINMUX_PC18H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC19H_CAN0_RX) && ! defined(IGNORE_PIN_PC19)
    {&pin_PC19, 0, PIN_PC19, PINMUX_PC19H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC20H_CAN0_RX) && ! defined(IGNORE_PIN_PC20)
    {&pin_PC20, 0, PIN_PC20, PINMUX_PC20H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC21H_CAN0_RX) && ! defined(IGNORE_PIN_PC21)
    {&pin_PC21, 0, PIN_PC21, PINMUX_PC21H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC22H_CAN0_RX) && ! defined(IGNORE_PIN_PC22)
    {&pin_PC22, 0, PIN_PC22, PINMUX_PC22H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC23H_CAN0_RX) && ! defined(IGNORE_PIN_PC23)
    {&pin_PC23, 0, PIN_PC23, PINMUX_PC23H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC24H_CAN0_RX) && ! defined(IGNORE_PIN_PC24)
    {&pin_PC24, 0, PIN_PC24, PINMUX_PC24H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC25H_CAN0_RX) && ! defined(IGNORE_PIN_PC25)
    {&pin_PC25, 0, PIN_PC25, PINMUX_PC25H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC26H_CAN0_RX) && ! defined(IGNORE_PIN_PC26)
    {&pin_PC26, 0, PIN_PC26, PINMUX_PC26H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC27H_CAN0_RX) && ! defined(IGNORE_PIN_PC27)
    {&pin_PC27, 0, PIN_PC27, PINMUX_PC27H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC28H_CAN0_RX) && ! defined(IGNORE_PIN_PC28)
    {&pin_PC28, 0, PIN_PC28, PINMUX_PC28H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC29H_CAN0_RX) && ! defined(IGNORE_PIN_PC29)
    {&pin_PC29, 0, PIN_PC29, PINMUX_PC29H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC30H_CAN0_RX) && ! defined(IGNORE_PIN_PC30)
    {&pin_PC30, 0, PIN_PC30, PINMUX_PC30H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC31H_CAN0_RX) && ! defined(IGNORE_PIN_PC31)
    {&pin_PC31, 0, PIN_PC31, PINMUX_PC31H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD00H_CAN0_RX) && ! defined(IGNORE_PIN_PD00)
    {&pin_PD00, 0, PIN_PD00, PINMUX_PD00H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD01H_CAN0_RX) && ! defined(IGNORE_PIN_PD01)
    {&pin_PD01, 0, PIN_PD01, PINMUX_PD01H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD02H_CAN0_RX) && ! defined(IGNORE_PIN_PD02)
    {&pin_PD02, 0, PIN_PD02, PINMUX_PD02H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD03H_CAN0_RX) && ! defined(IGNORE_PIN_PD03)
    {&pin_PD03, 0, PIN_PD03, PINMUX_PD03H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD04H_CAN0_RX) && ! defined(IGNORE_PIN_PD04)
    {&pin_PD04, 0, PIN_PD04, PINMUX_PD04H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD05H_CAN0_RX) && ! defined(IGNORE_PIN_PD05)
    {&pin_PD05, 0, PIN_PD05, PINMUX_PD05H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD06H_CAN0_RX) && ! defined(IGNORE_PIN_PD06)
    {&pin_PD06, 0, PIN_PD06, PINMUX_PD06H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD07H_CAN0_RX) && ! defined(IGNORE_PIN_PD07)
    {&pin_PD07, 0, PIN_PD07, PINMUX_PD07H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD08H_CAN0_RX) && ! defined(IGNORE_PIN_PD08)
    {&pin_PD08, 0, PIN_PD08, PINMUX_PD08H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD09H_CAN0_RX) && ! defined(IGNORE_PIN_PD09)
    {&pin_PD09, 0, PIN_PD09, PINMUX_PD09H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD10H_CAN0_RX) && ! defined(IGNORE_PIN_PD10)
    {&pin_PD10, 0, PIN_PD10, PINMUX_PD10H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD11H_CAN0_RX) && ! defined(IGNORE_PIN_PD11)
    {&pin_PD11, 0, PIN_PD11, PINMUX_PD11H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD12H_CAN0_RX) && ! defined(IGNORE_PIN_PD12)
    {&pin_PD12, 0, PIN_PD12, PINMUX_PD12H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD13H_CAN0_RX) && ! defined(IGNORE_PIN_PD13)
    {&pin_PD13, 0, PIN_PD13, PINMUX_PD13H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD14H_CAN0_RX) && ! defined(IGNORE_PIN_PD14)
    {&pin_PD14, 0, PIN_PD14, PINMUX_PD14H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD15H_CAN0_RX) && ! defined(IGNORE_PIN_PD15)
    {&pin_PD15, 0, PIN_PD15, PINMUX_PD15H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD16H_CAN0_RX) && ! defined(IGNORE_PIN_PD16)
    {&pin_PD16, 0, PIN_PD16, PINMUX_PD16H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD17H_CAN0_RX) && ! defined(IGNORE_PIN_PD17)
    {&pin_PD17, 0, PIN_PD17, PINMUX_PD17H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD18H_CAN0_RX) && ! defined(IGNORE_PIN_PD18)
    {&pin_PD18, 0, PIN_PD18, PINMUX_PD18H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD19H_CAN0_RX) && ! defined(IGNORE_PIN_PD19)
    {&pin_PD19, 0, PIN_PD19, PINMUX_PD19H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD20H_CAN0_RX) && ! defined(IGNORE_PIN_PD20)
    {&pin_PD20, 0, PIN_PD20, PINMUX_PD20H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD21H_CAN0_RX) && ! defined(IGNORE_PIN_PD21)
    {&pin_PD21, 0, PIN_PD21, PINMUX_PD21H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD22H_CAN0_RX) && ! defined(IGNORE_PIN_PD22)
    {&pin_PD22, 0, PIN_PD22, PINMUX_PD22H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD23H_CAN0_RX) && ! defined(IGNORE_PIN_PD23)
    {&pin_PD23, 0, PIN_PD23, PINMUX_PD23H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD24H_CAN0_RX) && ! defined(IGNORE_PIN_PD24)
    {&pin_PD24, 0, PIN_PD24, PINMUX_PD24H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD25H_CAN0_RX) && ! defined(IGNORE_PIN_PD25)
    {&pin_PD25, 0, PIN_PD25, PINMUX_PD25H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD26H_CAN0_RX) && ! defined(IGNORE_PIN_PD26)
    {&pin_PD26, 0, PIN_PD26, PINMUX_PD26H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD27H_CAN0_RX) && ! defined(IGNORE_PIN_PD27)
    {&pin_PD27, 0, PIN_PD27, PINMUX_PD27H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD28H_CAN0_RX) && ! defined(IGNORE_PIN_PD28)
    {&pin_PD28, 0, PIN_PD28, PINMUX_PD28H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD29H_CAN0_RX) && ! defined(IGNORE_PIN_PD29)
    {&pin_PD29, 0, PIN_PD29, PINMUX_PD29H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD30H_CAN0_RX) && ! defined(IGNORE_PIN_PD30)
    {&pin_PD30, 0, PIN_PD30, PINMUX_PD30H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD31H_CAN0_RX) && ! defined(IGNORE_PIN_PD31)
    {&pin_PD31, 0, PIN_PD31, PINMUX_PD31H_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA00I_CAN0_RX) && ! defined(IGNORE_PIN_PA00)
    {&pin_PA00, 0, PIN_PA00, PINMUX_PA00I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA01I_CAN0_RX) && ! defined(IGNORE_PIN_PA01)
    {&pin_PA01, 0, PIN_PA01, PINMUX_PA01I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA02I_CAN0_RX) && ! defined(IGNORE_PIN_PA02)
    {&pin_PA02, 0, PIN_PA02, PINMUX_PA02I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA03I_CAN0_RX) && ! defined(IGNORE_PIN_PA03)
    {&pin_PA03, 0, PIN_PA03, PINMUX_PA03I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA04I_CAN0_RX) && ! defined(IGNORE_PIN_PA04)
    {&pin_PA04, 0, PIN_PA04, PINMUX_PA04I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA05I_CAN0_RX) && ! defined(IGNORE_PIN_PA05)
    {&pin_PA05, 0, PIN_PA05, PINMUX_PA05I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA06I_CAN0_RX) && ! defined(IGNORE_PIN_PA06)
    {&pin_PA06, 0, PIN_PA06, PINMUX_PA06I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA07I_CAN0_RX) && ! defined(IGNORE_PIN_PA07)
    {&pin_PA07, 0, PIN_PA07, PINMUX_PA07I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA08I_CAN0_RX) && ! defined(IGNORE_PIN_PA08)
    {&pin_PA08, 0, PIN_PA08, PINMUX_PA08I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA09I_CAN0_RX) && ! defined(IGNORE_PIN_PA09)
    {&pin_PA09, 0, PIN_PA09, PINMUX_PA09I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA10I_CAN0_RX) && ! defined(IGNORE_PIN_PA10)
    {&pin_PA10, 0, PIN_PA10, PINMUX_PA10I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA11I_CAN0_RX) && ! defined(IGNORE_PIN_PA11)
    {&pin_PA11, 0, PIN_PA11, PINMUX_PA11I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA12I_CAN0_RX) && ! defined(IGNORE_PIN_PA12)
    {&pin_PA12, 0, PIN_PA12, PINMUX_PA12I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA13I_CAN0_RX) && ! defined(IGNORE_PIN_PA13)
    {&pin_PA13, 0, PIN_PA13, PINMUX_PA13I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA14I_CAN0_RX) && ! defined(IGNORE_PIN_PA14)
    {&pin_PA14, 0, PIN_PA14, PINMUX_PA14I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA15I_CAN0_RX) && ! defined(IGNORE_PIN_PA15)
    {&pin_PA15, 0, PIN_PA15, PINMUX_PA15I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA16I_CAN0_RX) && ! defined(IGNORE_PIN_PA16)
    {&pin_PA16, 0, PIN_PA16, PINMUX_PA16I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA17I_CAN0_RX) && ! defined(IGNORE_PIN_PA17)
    {&pin_PA17, 0, PIN_PA17, PINMUX_PA17I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA18I_CAN0_RX) && ! defined(IGNORE_PIN_PA18)
    {&pin_PA18, 0, PIN_PA18, PINMUX_PA18I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA19I_CAN0_RX) && ! defined(IGNORE_PIN_PA19)
    {&pin_PA19, 0, PIN_PA19, PINMUX_PA19I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA20I_CAN0_RX) && ! defined(IGNORE_PIN_PA20)
    {&pin_PA20, 0, PIN_PA20, PINMUX_PA20I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA21I_CAN0_RX) && ! defined(IGNORE_PIN_PA21)
    {&pin_PA21, 0, PIN_PA21, PINMUX_PA21I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA22I_CAN0_RX) && ! defined(IGNORE_PIN_PA22)
    {&pin_PA22, 0, PIN_PA22, PINMUX_PA22I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA23I_CAN0_RX) && ! defined(IGNORE_PIN_PA23)
    {&pin_PA23, 0, PIN_PA23, PINMUX_PA23I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA24I_CAN0_RX) && ! defined(IGNORE_PIN_PA24)
    {&pin_PA24, 0, PIN_PA24, PINMUX_PA24I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA25I_CAN0_RX) && ! defined(IGNORE_PIN_PA25)
    {&pin_PA25, 0, PIN_PA25, PINMUX_PA25I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA26I_CAN0_RX) && ! defined(IGNORE_PIN_PA26)
    {&pin_PA26, 0, PIN_PA26, PINMUX_PA26I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA27I_CAN0_RX) && ! defined(IGNORE_PIN_PA27)
    {&pin_PA27, 0, PIN_PA27, PINMUX_PA27I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA28I_CAN0_RX) && ! defined(IGNORE_PIN_PA28)
    {&pin_PA28, 0, PIN_PA28, PINMUX_PA28I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA29I_CAN0_RX) && ! defined(IGNORE_PIN_PA29)
    {&pin_PA29, 0, PIN_PA29, PINMUX_PA29I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA30I_CAN0_RX) && ! defined(IGNORE_PIN_PA30)
    {&pin_PA30, 0, PIN_PA30, PINMUX_PA30I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA31I_CAN0_RX) && ! defined(IGNORE_PIN_PA31)
    {&pin_PA31, 0, PIN_PA31, PINMUX_PA31I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB00I_CAN0_RX) && ! defined(IGNORE_PIN_PB00)
    {&pin_PB00, 0, PIN_PB00, PINMUX_PB00I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB01I_CAN0_RX) && ! defined(IGNORE_PIN_PB01)
    {&pin_PB01, 0, PIN_PB01, PINMUX_PB01I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB02I_CAN0_RX) && ! defined(IGNORE_PIN_PB02)
    {&pin_PB02, 0, PIN_PB02, PINMUX_PB02I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB03I_CAN0_RX) && ! defined(IGNORE_PIN_PB03)
    {&pin_PB03, 0, PIN_PB03, PINMUX_PB03I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB04I_CAN0_RX) && ! defined(IGNORE_PIN_PB04)
    {&pin_PB04, 0, PIN_PB04, PINMUX_PB04I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB05I_CAN0_RX) && ! defined(IGNORE_PIN_PB05)
    {&pin_PB05, 0, PIN_PB05, PINMUX_PB05I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB06I_CAN0_RX) && ! defined(IGNORE_PIN_PB06)
    {&pin_PB06, 0, PIN_PB06, PINMUX_PB06I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB07I_CAN0_RX) && ! defined(IGNORE_PIN_PB07)
    {&pin_PB07, 0, PIN_PB07, PINMUX_PB07I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB08I_CAN0_RX) && ! defined(IGNORE_PIN_PB08)
    {&pin_PB08, 0, PIN_PB08, PINMUX_PB08I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB09I_CAN0_RX) && ! defined(IGNORE_PIN_PB09)
    {&pin_PB09, 0, PIN_PB09, PINMUX_PB09I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB10I_CAN0_RX) && ! defined(IGNORE_PIN_PB10)
    {&pin_PB10, 0, PIN_PB10, PINMUX_PB10I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB11I_CAN0_RX) && ! defined(IGNORE_PIN_PB11)
    {&pin_PB11, 0, PIN_PB11, PINMUX_PB11I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB12I_CAN0_RX) && ! defined(IGNORE_PIN_PB12)
    {&pin_PB12, 0, PIN_PB12, PINMUX_PB12I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB13I_CAN0_RX) && ! defined(IGNORE_PIN_PB13)
    {&pin_PB13, 0, PIN_PB13, PINMUX_PB13I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB14I_CAN0_RX) && ! defined(IGNORE_PIN_PB14)
    {&pin_PB14, 0, PIN_PB14, PINMUX_PB14I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB15I_CAN0_RX) && ! defined(IGNORE_PIN_PB15)
    {&pin_PB15, 0, PIN_PB15, PINMUX_PB15I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB16I_CAN0_RX) && ! defined(IGNORE_PIN_PB16)
    {&pin_PB16, 0, PIN_PB16, PINMUX_PB16I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB17I_CAN0_RX) && ! defined(IGNORE_PIN_PB17)
    {&pin_PB17, 0, PIN_PB17, PINMUX_PB17I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB18I_CAN0_RX) && ! defined(IGNORE_PIN_PB18)
    {&pin_PB18, 0, PIN_PB18, PINMUX_PB18I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB19I_CAN0_RX) && ! defined(IGNORE_PIN_PB19)
    {&pin_PB19, 0, PIN_PB19, PINMUX_PB19I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB20I_CAN0_RX) && ! defined(IGNORE_PIN_PB20)
    {&pin_PB20, 0, PIN_PB20, PINMUX_PB20I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB21I_CAN0_RX) && ! defined(IGNORE_PIN_PB21)
    {&pin_PB21, 0, PIN_PB21, PINMUX_PB21I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB22I_CAN0_RX) && ! defined(IGNORE_PIN_PB22)
    {&pin_PB22, 0, PIN_PB22, PINMUX_PB22I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB23I_CAN0_RX) && ! defined(IGNORE_PIN_PB23)
    {&pin_PB23, 0, PIN_PB23, PINMUX_PB23I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB24I_CAN0_RX) && ! defined(IGNORE_PIN_PB24)
    {&pin_PB24, 0, PIN_PB24, PINMUX_PB24I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB25I_CAN0_RX) && ! defined(IGNORE_PIN_PB25)
    {&pin_PB25, 0, PIN_PB25, PINMUX_PB25I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB26I_CAN0_RX) && ! defined(IGNORE_PIN_PB26)
    {&pin_PB26, 0, PIN_PB26, PINMUX_PB26I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB27I_CAN0_RX) && ! defined(IGNORE_PIN_PB27)
    {&pin_PB27, 0, PIN_PB27, PINMUX_PB27I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB28I_CAN0_RX) && ! defined(IGNORE_PIN_PB28)
    {&pin_PB28, 0, PIN_PB28, PINMUX_PB28I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB29I_CAN0_RX) && ! defined(IGNORE_PIN_PB29)
    {&pin_PB29, 0, PIN_PB29, PINMUX_PB29I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB30I_CAN0_RX) && ! defined(IGNORE_PIN_PB30)
    {&pin_PB30, 0, PIN_PB30, PINMUX_PB30I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PB31I_CAN0_RX) && ! defined(IGNORE_PIN_PB31)
    {&pin_PB31, 0, PIN_PB31, PINMUX_PB31I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC00I_CAN0_RX) && ! defined(IGNORE_PIN_PC00)
    {&pin_PC00, 0, PIN_PC00, PINMUX_PC00I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC01I_CAN0_RX) && ! defined(IGNORE_PIN_PC01)
    {&pin_PC01, 0, PIN_PC01, PINMUX_PC01I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC02I_CAN0_RX) && ! defined(IGNORE_PIN_PC02)
    {&pin_PC02, 0, PIN_PC02, PINMUX_PC02I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC03I_CAN0_RX) && ! defined(IGNORE_PIN_PC03)
    {&pin_PC03, 0, PIN_PC03, PINMUX_PC03I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC04I_CAN0_RX) && ! defined(IGNORE_PIN_PC04)
    {&pin_PC04, 0, PIN_PC04, PINMUX_PC04I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC05I_CAN0_RX) && ! defined(IGNORE_PIN_PC05)
    {&pin_PC05, 0, PIN_PC05, PINMUX_PC05I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC06I_CAN0_RX) && ! defined(IGNORE_PIN_PC06)
    {&pin_PC06, 0, PIN_PC06, PINMUX_PC06I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC07I_CAN0_RX) && ! defined(IGNORE_PIN_PC07)
    {&pin_PC07, 0, PIN_PC07, PINMUX_PC07I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC08I_CAN0_RX) && ! defined(IGNORE_PIN_PC08)
    {&pin_PC08, 0, PIN_PC08, PINMUX_PC08I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC09I_CAN0_RX) && ! defined(IGNORE_PIN_PC09)
    {&pin_PC09, 0, PIN_PC09, PINMUX_PC09I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC10I_CAN0_RX) && ! defined(IGNORE_PIN_PC10)
    {&pin_PC10, 0, PIN_PC10, PINMUX_PC10I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC11I_CAN0_RX) && ! defined(IGNORE_PIN_PC11)
    {&pin_PC11, 0, PIN_PC11, PINMUX_PC11I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC12I_CAN0_RX) && ! defined(IGNORE_PIN_PC12)
    {&pin_PC12, 0, PIN_PC12, PINMUX_PC12I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC13I_CAN0_RX) && ! defined(IGNORE_PIN_PC13)
    {&pin_PC13, 0, PIN_PC13, PINMUX_PC13I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC14I_CAN0_RX) && ! defined(IGNORE_PIN_PC14)
    {&pin_PC14, 0, PIN_PC14, PINMUX_PC14I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC15I_CAN0_RX) && ! defined(IGNORE_PIN_PC15)
    {&pin_PC15, 0, PIN_PC15, PINMUX_PC15I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC16I_CAN0_RX) && ! defined(IGNORE_PIN_PC16)
    {&pin_PC16, 0, PIN_PC16, PINMUX_PC16I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC17I_CAN0_RX) && ! defined(IGNORE_PIN_PC17)
    {&pin_PC17, 0, PIN_PC17, PINMUX_PC17I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC18I_CAN0_RX) && ! defined(IGNORE_PIN_PC18)
    {&pin_PC18, 0, PIN_PC18, PINMUX_PC18I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC19I_CAN0_RX) && ! defined(IGNORE_PIN_PC19)
    {&pin_PC19, 0, PIN_PC19, PINMUX_PC19I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC20I_CAN0_RX) && ! defined(IGNORE_PIN_PC20)
    {&pin_PC20, 0, PIN_PC20, PINMUX_PC20I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC21I_CAN0_RX) && ! defined(IGNORE_PIN_PC21)
    {&pin_PC21, 0, PIN_PC21, PINMUX_PC21I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC22I_CAN0_RX) && ! defined(IGNORE_PIN_PC22)
    {&pin_PC22, 0, PIN_PC22, PINMUX_PC22I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC23I_CAN0_RX) && ! defined(IGNORE_PIN_PC23)
    {&pin_PC23, 0, PIN_PC23, PINMUX_PC23I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC24I_CAN0_RX) && ! defined(IGNORE_PIN_PC24)
    {&pin_PC24, 0, PIN_PC24, PINMUX_PC24I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC25I_CAN0_RX) && ! defined(IGNORE_PIN_PC25)
    {&pin_PC25, 0, PIN_PC25, PINMUX_PC25I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC26I_CAN0_RX) && ! defined(IGNORE_PIN_PC26)
    {&pin_PC26, 0, PIN_PC26, PINMUX_PC26I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC27I_CAN0_RX) && ! defined(IGNORE_PIN_PC27)
    {&pin_PC27, 0, PIN_PC27, PINMUX_PC27I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC28I_CAN0_RX) && ! defined(IGNORE_PIN_PC28)
    {&pin_PC28, 0, PIN_PC28, PINMUX_PC28I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC29I_CAN0_RX) && ! defined(IGNORE_PIN_PC29)
    {&pin_PC29, 0, PIN_PC29, PINMUX_PC29I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC30I_CAN0_RX) && ! defined(IGNORE_PIN_PC30)
    {&pin_PC30, 0, PIN_PC30, PINMUX_PC30I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PC31I_CAN0_RX) && ! defined(IGNORE_PIN_PC31)
    {&pin_PC31, 0, PIN_PC31, PINMUX_PC31I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD00I_CAN0_RX) && ! defined(IGNORE_PIN_PD00)
    {&pin_PD00, 0, PIN_PD00, PINMUX_PD00I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD01I_CAN0_RX) && ! defined(IGNORE_PIN_PD01)
    {&pin_PD01, 0, PIN_PD01, PINMUX_PD01I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD02I_CAN0_RX) && ! defined(IGNORE_PIN_PD02)
    {&pin_PD02, 0, PIN_PD02, PINMUX_PD02I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD03I_CAN0_RX) && ! defined(IGNORE_PIN_PD03)
    {&pin_PD03, 0, PIN_PD03, PINMUX_PD03I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD04I_CAN0_RX) && ! defined(IGNORE_PIN_PD04)
    {&pin_PD04, 0, PIN_PD04, PINMUX_PD04I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD05I_CAN0_RX) && ! defined(IGNORE_PIN_PD05)
    {&pin_PD05, 0, PIN_PD05, PINMUX_PD05I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD06I_CAN0_RX) && ! defined(IGNORE_PIN_PD06)
    {&pin_PD06, 0, PIN_PD06, PINMUX_PD06I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD07I_CAN0_RX) && ! defined(IGNORE_PIN_PD07)
    {&pin_PD07, 0, PIN_PD07, PINMUX_PD07I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD08I_CAN0_RX) && ! defined(IGNORE_PIN_PD08)
    {&pin_PD08, 0, PIN_PD08, PINMUX_PD08I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD09I_CAN0_RX) && ! defined(IGNORE_PIN_PD09)
    {&pin_PD09, 0, PIN_PD09, PINMUX_PD09I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD10I_CAN0_RX) && ! defined(IGNORE_PIN_PD10)
    {&pin_PD10, 0, PIN_PD10, PINMUX_PD10I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD11I_CAN0_RX) && ! defined(IGNORE_PIN_PD11)
    {&pin_PD11, 0, PIN_PD11, PINMUX_PD11I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD12I_CAN0_RX) && ! defined(IGNORE_PIN_PD12)
    {&pin_PD12, 0, PIN_PD12, PINMUX_PD12I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD13I_CAN0_RX) && ! defined(IGNORE_PIN_PD13)
    {&pin_PD13, 0, PIN_PD13, PINMUX_PD13I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD14I_CAN0_RX) && ! defined(IGNORE_PIN_PD14)
    {&pin_PD14, 0, PIN_PD14, PINMUX_PD14I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD15I_CAN0_RX) && ! defined(IGNORE_PIN_PD15)
    {&pin_PD15, 0, PIN_PD15, PINMUX_PD15I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD16I_CAN0_RX) && ! defined(IGNORE_PIN_PD16)
    {&pin_PD16, 0, PIN_PD16, PINMUX_PD16I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD17I_CAN0_RX) && ! defined(IGNORE_PIN_PD17)
    {&pin_PD17, 0, PIN_PD17, PINMUX_PD17I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD18I_CAN0_RX) && ! defined(IGNORE_PIN_PD18)
    {&pin_PD18, 0, PIN_PD18, PINMUX_PD18I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD19I_CAN0_RX) && ! defined(IGNORE_PIN_PD19)
    {&pin_PD19, 0, PIN_PD19, PINMUX_PD19I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD20I_CAN0_RX) && ! defined(IGNORE_PIN_PD20)
    {&pin_PD20, 0, PIN_PD20, PINMUX_PD20I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD21I_CAN0_RX) && ! defined(IGNORE_PIN_PD21)
    {&pin_PD21, 0, PIN_PD21, PINMUX_PD21I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD22I_CAN0_RX) && ! defined(IGNORE_PIN_PD22)
    {&pin_PD22, 0, PIN_PD22, PINMUX_PD22I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD23I_CAN0_RX) && ! defined(IGNORE_PIN_PD23)
    {&pin_PD23, 0, PIN_PD23, PINMUX_PD23I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD24I_CAN0_RX) && ! defined(IGNORE_PIN_PD24)
    {&pin_PD24, 0, PIN_PD24, PINMUX_PD24I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD25I_CAN0_RX) && ! defined(IGNORE_PIN_PD25)
    {&pin_PD25, 0, PIN_PD25, PINMUX_PD25I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD26I_CAN0_RX) && ! defined(IGNORE_PIN_PD26)
    {&pin_PD26, 0, PIN_PD26, PINMUX_PD26I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD27I_CAN0_RX) && ! defined(IGNORE_PIN_PD27)
    {&pin_PD27, 0, PIN_PD27, PINMUX_PD27I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD28I_CAN0_RX) && ! defined(IGNORE_PIN_PD28)
    {&pin_PD28, 0, PIN_PD28, PINMUX_PD28I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD29I_CAN0_RX) && ! defined(IGNORE_PIN_PD29)
    {&pin_PD29, 0, PIN_PD29, PINMUX_PD29I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD30I_CAN0_RX) && ! defined(IGNORE_PIN_PD30)
    {&pin_PD30, 0, PIN_PD30, PINMUX_PD30I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PD31I_CAN0_RX) && ! defined(IGNORE_PIN_PD31)
    {&pin_PD31, 0, PIN_PD31, PINMUX_PD31I_CAN0_RX & 0xffff},
#endif
#if defined(PINMUX_PA00H_CAN1_RX) && ! defined(IGNORE_PIN_PA00)
    {&pin_PA00, 1, PIN_PA00, PINMUX_PA00H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA01H_CAN1_RX) && ! defined(IGNORE_PIN_PA01)
    {&pin_PA01, 1, PIN_PA01, PINMUX_PA01H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA02H_CAN1_RX) && ! defined(IGNORE_PIN_PA02)
    {&pin_PA02, 1, PIN_PA02, PINMUX_PA02H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA03H_CAN1_RX) && ! defined(IGNORE_PIN_PA03)
    {&pin_PA03, 1, PIN_PA03, PINMUX_PA03H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA04H_CAN1_RX) && ! defined(IGNORE_PIN_PA04)
    {&pin_PA04, 1, PIN_PA04, PINMUX_PA04H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA05H_CAN1_RX) && ! defined(IGNORE_PIN_PA05)
    {&pin_PA05, 1, PIN_PA05, PINMUX_PA05H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA06H_CAN1_RX) && ! defined(IGNORE_PIN_PA06)
    {&pin_PA06, 1, PIN_PA06, PINMUX_PA06H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA07H_CAN1_RX) && ! defined(IGNORE_PIN_PA07)
    {&pin_PA07, 1, PIN_PA07, PINMUX_PA07H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA08H_CAN1_RX) && ! defined(IGNORE_PIN_PA08)
    {&pin_PA08, 1, PIN_PA08, PINMUX_PA08H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA09H_CAN1_RX) && ! defined(IGNORE_PIN_PA09)
    {&pin_PA09, 1, PIN_PA09, PINMUX_PA09H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA10H_CAN1_RX) && ! defined(IGNORE_PIN_PA10)
    {&pin_PA10, 1, PIN_PA10, PINMUX_PA10H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA11H_CAN1_RX) && ! defined(IGNORE_PIN_PA11)
    {&pin_PA11, 1, PIN_PA11, PINMUX_PA11H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA12H_CAN1_RX) && ! defined(IGNORE_PIN_PA12)
    {&pin_PA12, 1, PIN_PA12, PINMUX_PA12H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA13H_CAN1_RX) && ! defined(IGNORE_PIN_PA13)
    {&pin_PA13, 1, PIN_PA13, PINMUX_PA13H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA14H_CAN1_RX) && ! defined(IGNORE_PIN_PA14)
    {&pin_PA14, 1, PIN_PA14, PINMUX_PA14H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA15H_CAN1_RX) && ! defined(IGNORE_PIN_PA15)
    {&pin_PA15, 1, PIN_PA15, PINMUX_PA15H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA16H_CAN1_RX) && ! defined(IGNORE_PIN_PA16)
    {&pin_PA16, 1, PIN_PA16, PINMUX_PA16H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA17H_CAN1_RX) && ! defined(IGNORE_PIN_PA17)
    {&pin_PA17, 1, PIN_PA17, PINMUX_PA17H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA18H_CAN1_RX) && ! defined(IGNORE_PIN_PA18)
    {&pin_PA18, 1, PIN_PA18, PINMUX_PA18H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA19H_CAN1_RX) && ! defined(IGNORE_PIN_PA19)
    {&pin_PA19, 1, PIN_PA19, PINMUX_PA19H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA20H_CAN1_RX) && ! defined(IGNORE_PIN_PA20)
    {&pin_PA20, 1, PIN_PA20, PINMUX_PA20H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA21H_CAN1_RX) && ! defined(IGNORE_PIN_PA21)
    {&pin_PA21, 1, PIN_PA21, PINMUX_PA21H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA22H_CAN1_RX) && ! defined(IGNORE_PIN_PA22)
    {&pin_PA22, 1, PIN_PA22, PINMUX_PA22H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA23H_CAN1_RX) && ! defined(IGNORE_PIN_PA23)
    {&pin_PA23, 1, PIN_PA23, PINMUX_PA23H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA24H_CAN1_RX) && ! defined(IGNORE_PIN_PA24)
    {&pin_PA24, 1, PIN_PA24, PINMUX_PA24H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA25H_CAN1_RX) && ! defined(IGNORE_PIN_PA25)
    {&pin_PA25, 1, PIN_PA25, PINMUX_PA25H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA26H_CAN1_RX) && ! defined(IGNORE_PIN_PA26)
    {&pin_PA26, 1, PIN_PA26, PINMUX_PA26H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA27H_CAN1_RX) && ! defined(IGNORE_PIN_PA27)
    {&pin_PA27, 1, PIN_PA27, PINMUX_PA27H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA28H_CAN1_RX) && ! defined(IGNORE_PIN_PA28)
    {&pin_PA28, 1, PIN_PA28, PINMUX_PA28H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA29H_CAN1_RX) && ! defined(IGNORE_PIN_PA29)
    {&pin_PA29, 1, PIN_PA29, PINMUX_PA29H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA30H_CAN1_RX) && ! defined(IGNORE_PIN_PA30)
    {&pin_PA30, 1, PIN_PA30, PINMUX_PA30H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA31H_CAN1_RX) && ! defined(IGNORE_PIN_PA31)
    {&pin_PA31, 1, PIN_PA31, PINMUX_PA31H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB00H_CAN1_RX) && ! defined(IGNORE_PIN_PB00)
    {&pin_PB00, 1, PIN_PB00, PINMUX_PB00H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB01H_CAN1_RX) && ! defined(IGNORE_PIN_PB01)
    {&pin_PB01, 1, PIN_PB01, PINMUX_PB01H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB02H_CAN1_RX) && ! defined(IGNORE_PIN_PB02)
    {&pin_PB02, 1, PIN_PB02, PINMUX_PB02H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB03H_CAN1_RX) && ! defined(IGNORE_PIN_PB03)
    {&pin_PB03, 1, PIN_PB03, PINMUX_PB03H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB04H_CAN1_RX) && ! defined(IGNORE_PIN_PB04)
    {&pin_PB04, 1, PIN_PB04, PINMUX_PB04H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB05H_CAN1_RX) && ! defined(IGNORE_PIN_PB05)
    {&pin_PB05, 1, PIN_PB05, PINMUX_PB05H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB06H_CAN1_RX) && ! defined(IGNORE_PIN_PB06)
    {&pin_PB06, 1, PIN_PB06, PINMUX_PB06H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB07H_CAN1_RX) && ! defined(IGNORE_PIN_PB07)
    {&pin_PB07, 1, PIN_PB07, PINMUX_PB07H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB08H_CAN1_RX) && ! defined(IGNORE_PIN_PB08)
    {&pin_PB08, 1, PIN_PB08, PINMUX_PB08H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB09H_CAN1_RX) && ! defined(IGNORE_PIN_PB09)
    {&pin_PB09, 1, PIN_PB09, PINMUX_PB09H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB10H_CAN1_RX) && ! defined(IGNORE_PIN_PB10)
    {&pin_PB10, 1, PIN_PB10, PINMUX_PB10H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB11H_CAN1_RX) && ! defined(IGNORE_PIN_PB11)
    {&pin_PB11, 1, PIN_PB11, PINMUX_PB11H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB12H_CAN1_RX) && ! defined(IGNORE_PIN_PB12)
    {&pin_PB12, 1, PIN_PB12, PINMUX_PB12H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB13H_CAN1_RX) && ! defined(IGNORE_PIN_PB13)
    {&pin_PB13, 1, PIN_PB13, PINMUX_PB13H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB14H_CAN1_RX) && ! defined(IGNORE_PIN_PB14)
    {&pin_PB14, 1, PIN_PB14, PINMUX_PB14H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB15H_CAN1_RX) && ! defined(IGNORE_PIN_PB15)
    {&pin_PB15, 1, PIN_PB15, PINMUX_PB15H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB16H_CAN1_RX) && ! defined(IGNORE_PIN_PB16)
    {&pin_PB16, 1, PIN_PB16, PINMUX_PB16H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB17H_CAN1_RX) && ! defined(IGNORE_PIN_PB17)
    {&pin_PB17, 1, PIN_PB17, PINMUX_PB17H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB18H_CAN1_RX) && ! defined(IGNORE_PIN_PB18)
    {&pin_PB18, 1, PIN_PB18, PINMUX_PB18H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB19H_CAN1_RX) && ! defined(IGNORE_PIN_PB19)
    {&pin_PB19, 1, PIN_PB19, PINMUX_PB19H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB20H_CAN1_RX) && ! defined(IGNORE_PIN_PB20)
    {&pin_PB20, 1, PIN_PB20, PINMUX_PB20H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB21H_CAN1_RX) && ! defined(IGNORE_PIN_PB21)
    {&pin_PB21, 1, PIN_PB21, PINMUX_PB21H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB22H_CAN1_RX) && ! defined(IGNORE_PIN_PB22)
    {&pin_PB22, 1, PIN_PB22, PINMUX_PB22H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB23H_CAN1_RX) && ! defined(IGNORE_PIN_PB23)
    {&pin_PB23, 1, PIN_PB23, PINMUX_PB23H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB24H_CAN1_RX) && ! defined(IGNORE_PIN_PB24)
    {&pin_PB24, 1, PIN_PB24, PINMUX_PB24H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB25H_CAN1_RX) && ! defined(IGNORE_PIN_PB25)
    {&pin_PB25, 1, PIN_PB25, PINMUX_PB25H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB26H_CAN1_RX) && ! defined(IGNORE_PIN_PB26)
    {&pin_PB26, 1, PIN_PB26, PINMUX_PB26H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB27H_CAN1_RX) && ! defined(IGNORE_PIN_PB27)
    {&pin_PB27, 1, PIN_PB27, PINMUX_PB27H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB28H_CAN1_RX) && ! defined(IGNORE_PIN_PB28)
    {&pin_PB28, 1, PIN_PB28, PINMUX_PB28H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB29H_CAN1_RX) && ! defined(IGNORE_PIN_PB29)
    {&pin_PB29, 1, PIN_PB29, PINMUX_PB29H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB30H_CAN1_RX) && ! defined(IGNORE_PIN_PB30)
    {&pin_PB30, 1, PIN_PB30, PINMUX_PB30H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB31H_CAN1_RX) && ! defined(IGNORE_PIN_PB31)
    {&pin_PB31, 1, PIN_PB31, PINMUX_PB31H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC00H_CAN1_RX) && ! defined(IGNORE_PIN_PC00)
    {&pin_PC00, 1, PIN_PC00, PINMUX_PC00H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC01H_CAN1_RX) && ! defined(IGNORE_PIN_PC01)
    {&pin_PC01, 1, PIN_PC01, PINMUX_PC01H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC02H_CAN1_RX) && ! defined(IGNORE_PIN_PC02)
    {&pin_PC02, 1, PIN_PC02, PINMUX_PC02H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC03H_CAN1_RX) && ! defined(IGNORE_PIN_PC03)
    {&pin_PC03, 1, PIN_PC03, PINMUX_PC03H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC04H_CAN1_RX) && ! defined(IGNORE_PIN_PC04)
    {&pin_PC04, 1, PIN_PC04, PINMUX_PC04H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC05H_CAN1_RX) && ! defined(IGNORE_PIN_PC05)
    {&pin_PC05, 1, PIN_PC05, PINMUX_PC05H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC06H_CAN1_RX) && ! defined(IGNORE_PIN_PC06)
    {&pin_PC06, 1, PIN_PC06, PINMUX_PC06H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC07H_CAN1_RX) && ! defined(IGNORE_PIN_PC07)
    {&pin_PC07, 1, PIN_PC07, PINMUX_PC07H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC08H_CAN1_RX) && ! defined(IGNORE_PIN_PC08)
    {&pin_PC08, 1, PIN_PC08, PINMUX_PC08H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC09H_CAN1_RX) && ! defined(IGNORE_PIN_PC09)
    {&pin_PC09, 1, PIN_PC09, PINMUX_PC09H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC10H_CAN1_RX) && ! defined(IGNORE_PIN_PC10)
    {&pin_PC10, 1, PIN_PC10, PINMUX_PC10H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC11H_CAN1_RX) && ! defined(IGNORE_PIN_PC11)
    {&pin_PC11, 1, PIN_PC11, PINMUX_PC11H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC12H_CAN1_RX) && ! defined(IGNORE_PIN_PC12)
    {&pin_PC12, 1, PIN_PC12, PINMUX_PC12H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC13H_CAN1_RX) && ! defined(IGNORE_PIN_PC13)
    {&pin_PC13, 1, PIN_PC13, PINMUX_PC13H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC14H_CAN1_RX) && ! defined(IGNORE_PIN_PC14)
    {&pin_PC14, 1, PIN_PC14, PINMUX_PC14H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC15H_CAN1_RX) && ! defined(IGNORE_PIN_PC15)
    {&pin_PC15, 1, PIN_PC15, PINMUX_PC15H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC16H_CAN1_RX) && ! defined(IGNORE_PIN_PC16)
    {&pin_PC16, 1, PIN_PC16, PINMUX_PC16H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC17H_CAN1_RX) && ! defined(IGNORE_PIN_PC17)
    {&pin_PC17, 1, PIN_PC17, PINMUX_PC17H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC18H_CAN1_RX) && ! defined(IGNORE_PIN_PC18)
    {&pin_PC18, 1, PIN_PC18, PINMUX_PC18H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC19H_CAN1_RX) && ! defined(IGNORE_PIN_PC19)
    {&pin_PC19, 1, PIN_PC19, PINMUX_PC19H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC20H_CAN1_RX) && ! defined(IGNORE_PIN_PC20)
    {&pin_PC20, 1, PIN_PC20, PINMUX_PC20H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC21H_CAN1_RX) && ! defined(IGNORE_PIN_PC21)
    {&pin_PC21, 1, PIN_PC21, PINMUX_PC21H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC22H_CAN1_RX) && ! defined(IGNORE_PIN_PC22)
    {&pin_PC22, 1, PIN_PC22, PINMUX_PC22H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC23H_CAN1_RX) && ! defined(IGNORE_PIN_PC23)
    {&pin_PC23, 1, PIN_PC23, PINMUX_PC23H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC24H_CAN1_RX) && ! defined(IGNORE_PIN_PC24)
    {&pin_PC24, 1, PIN_PC24, PINMUX_PC24H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC25H_CAN1_RX) && ! defined(IGNORE_PIN_PC25)
    {&pin_PC25, 1, PIN_PC25, PINMUX_PC25H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC26H_CAN1_RX) && ! defined(IGNORE_PIN_PC26)
    {&pin_PC26, 1, PIN_PC26, PINMUX_PC26H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC27H_CAN1_RX) && ! defined(IGNORE_PIN_PC27)
    {&pin_PC27, 1, PIN_PC27, PINMUX_PC27H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC28H_CAN1_RX) && ! defined(IGNORE_PIN_PC28)
    {&pin_PC28, 1, PIN_PC28, PINMUX_PC28H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC29H_CAN1_RX) && ! defined(IGNORE_PIN_PC29)
    {&pin_PC29, 1, PIN_PC29, PINMUX_PC29H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC30H_CAN1_RX) && ! defined(IGNORE_PIN_PC30)
    {&pin_PC30, 1, PIN_PC30, PINMUX_PC30H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC31H_CAN1_RX) && ! defined(IGNORE_PIN_PC31)
    {&pin_PC31, 1, PIN_PC31, PINMUX_PC31H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD00H_CAN1_RX) && ! defined(IGNORE_PIN_PD00)
    {&pin_PD00, 1, PIN_PD00, PINMUX_PD00H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD01H_CAN1_RX) && ! defined(IGNORE_PIN_PD01)
    {&pin_PD01, 1, PIN_PD01, PINMUX_PD01H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD02H_CAN1_RX) && ! defined(IGNORE_PIN_PD02)
    {&pin_PD02, 1, PIN_PD02, PINMUX_PD02H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD03H_CAN1_RX) && ! defined(IGNORE_PIN_PD03)
    {&pin_PD03, 1, PIN_PD03, PINMUX_PD03H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD04H_CAN1_RX) && ! defined(IGNORE_PIN_PD04)
    {&pin_PD04, 1, PIN_PD04, PINMUX_PD04H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD05H_CAN1_RX) && ! defined(IGNORE_PIN_PD05)
    {&pin_PD05, 1, PIN_PD05, PINMUX_PD05H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD06H_CAN1_RX) && ! defined(IGNORE_PIN_PD06)
    {&pin_PD06, 1, PIN_PD06, PINMUX_PD06H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD07H_CAN1_RX) && ! defined(IGNORE_PIN_PD07)
    {&pin_PD07, 1, PIN_PD07, PINMUX_PD07H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD08H_CAN1_RX) && ! defined(IGNORE_PIN_PD08)
    {&pin_PD08, 1, PIN_PD08, PINMUX_PD08H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD09H_CAN1_RX) && ! defined(IGNORE_PIN_PD09)
    {&pin_PD09, 1, PIN_PD09, PINMUX_PD09H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD10H_CAN1_RX) && ! defined(IGNORE_PIN_PD10)
    {&pin_PD10, 1, PIN_PD10, PINMUX_PD10H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD11H_CAN1_RX) && ! defined(IGNORE_PIN_PD11)
    {&pin_PD11, 1, PIN_PD11, PINMUX_PD11H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD12H_CAN1_RX) && ! defined(IGNORE_PIN_PD12)
    {&pin_PD12, 1, PIN_PD12, PINMUX_PD12H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD13H_CAN1_RX) && ! defined(IGNORE_PIN_PD13)
    {&pin_PD13, 1, PIN_PD13, PINMUX_PD13H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD14H_CAN1_RX) && ! defined(IGNORE_PIN_PD14)
    {&pin_PD14, 1, PIN_PD14, PINMUX_PD14H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD15H_CAN1_RX) && ! defined(IGNORE_PIN_PD15)
    {&pin_PD15, 1, PIN_PD15, PINMUX_PD15H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD16H_CAN1_RX) && ! defined(IGNORE_PIN_PD16)
    {&pin_PD16, 1, PIN_PD16, PINMUX_PD16H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD17H_CAN1_RX) && ! defined(IGNORE_PIN_PD17)
    {&pin_PD17, 1, PIN_PD17, PINMUX_PD17H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD18H_CAN1_RX) && ! defined(IGNORE_PIN_PD18)
    {&pin_PD18, 1, PIN_PD18, PINMUX_PD18H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD19H_CAN1_RX) && ! defined(IGNORE_PIN_PD19)
    {&pin_PD19, 1, PIN_PD19, PINMUX_PD19H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD20H_CAN1_RX) && ! defined(IGNORE_PIN_PD20)
    {&pin_PD20, 1, PIN_PD20, PINMUX_PD20H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD21H_CAN1_RX) && ! defined(IGNORE_PIN_PD21)
    {&pin_PD21, 1, PIN_PD21, PINMUX_PD21H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD22H_CAN1_RX) && ! defined(IGNORE_PIN_PD22)
    {&pin_PD22, 1, PIN_PD22, PINMUX_PD22H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD23H_CAN1_RX) && ! defined(IGNORE_PIN_PD23)
    {&pin_PD23, 1, PIN_PD23, PINMUX_PD23H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD24H_CAN1_RX) && ! defined(IGNORE_PIN_PD24)
    {&pin_PD24, 1, PIN_PD24, PINMUX_PD24H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD25H_CAN1_RX) && ! defined(IGNORE_PIN_PD25)
    {&pin_PD25, 1, PIN_PD25, PINMUX_PD25H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD26H_CAN1_RX) && ! defined(IGNORE_PIN_PD26)
    {&pin_PD26, 1, PIN_PD26, PINMUX_PD26H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD27H_CAN1_RX) && ! defined(IGNORE_PIN_PD27)
    {&pin_PD27, 1, PIN_PD27, PINMUX_PD27H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD28H_CAN1_RX) && ! defined(IGNORE_PIN_PD28)
    {&pin_PD28, 1, PIN_PD28, PINMUX_PD28H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD29H_CAN1_RX) && ! defined(IGNORE_PIN_PD29)
    {&pin_PD29, 1, PIN_PD29, PINMUX_PD29H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD30H_CAN1_RX) && ! defined(IGNORE_PIN_PD30)
    {&pin_PD30, 1, PIN_PD30, PINMUX_PD30H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD31H_CAN1_RX) && ! defined(IGNORE_PIN_PD31)
    {&pin_PD31, 1, PIN_PD31, PINMUX_PD31H_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA00I_CAN1_RX) && ! defined(IGNORE_PIN_PA00)
    {&pin_PA00, 1, PIN_PA00, PINMUX_PA00I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA01I_CAN1_RX) && ! defined(IGNORE_PIN_PA01)
    {&pin_PA01, 1, PIN_PA01, PINMUX_PA01I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA02I_CAN1_RX) && ! defined(IGNORE_PIN_PA02)
    {&pin_PA02, 1, PIN_PA02, PINMUX_PA02I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA03I_CAN1_RX) && ! defined(IGNORE_PIN_PA03)
    {&pin_PA03, 1, PIN_PA03, PINMUX_PA03I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA04I_CAN1_RX) && ! defined(IGNORE_PIN_PA04)
    {&pin_PA04, 1, PIN_PA04, PINMUX_PA04I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA05I_CAN1_RX) && ! defined(IGNORE_PIN_PA05)
    {&pin_PA05, 1, PIN_PA05, PINMUX_PA05I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA06I_CAN1_RX) && ! defined(IGNORE_PIN_PA06)
    {&pin_PA06, 1, PIN_PA06, PINMUX_PA06I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA07I_CAN1_RX) && ! defined(IGNORE_PIN_PA07)
    {&pin_PA07, 1, PIN_PA07, PINMUX_PA07I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA08I_CAN1_RX) && ! defined(IGNORE_PIN_PA08)
    {&pin_PA08, 1, PIN_PA08, PINMUX_PA08I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA09I_CAN1_RX) && ! defined(IGNORE_PIN_PA09)
    {&pin_PA09, 1, PIN_PA09, PINMUX_PA09I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA10I_CAN1_RX) && ! defined(IGNORE_PIN_PA10)
    {&pin_PA10, 1, PIN_PA10, PINMUX_PA10I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA11I_CAN1_RX) && ! defined(IGNORE_PIN_PA11)
    {&pin_PA11, 1, PIN_PA11, PINMUX_PA11I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA12I_CAN1_RX) && ! defined(IGNORE_PIN_PA12)
    {&pin_PA12, 1, PIN_PA12, PINMUX_PA12I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA13I_CAN1_RX) && ! defined(IGNORE_PIN_PA13)
    {&pin_PA13, 1, PIN_PA13, PINMUX_PA13I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA14I_CAN1_RX) && ! defined(IGNORE_PIN_PA14)
    {&pin_PA14, 1, PIN_PA14, PINMUX_PA14I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA15I_CAN1_RX) && ! defined(IGNORE_PIN_PA15)
    {&pin_PA15, 1, PIN_PA15, PINMUX_PA15I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA16I_CAN1_RX) && ! defined(IGNORE_PIN_PA16)
    {&pin_PA16, 1, PIN_PA16, PINMUX_PA16I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA17I_CAN1_RX) && ! defined(IGNORE_PIN_PA17)
    {&pin_PA17, 1, PIN_PA17, PINMUX_PA17I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA18I_CAN1_RX) && ! defined(IGNORE_PIN_PA18)
    {&pin_PA18, 1, PIN_PA18, PINMUX_PA18I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA19I_CAN1_RX) && ! defined(IGNORE_PIN_PA19)
    {&pin_PA19, 1, PIN_PA19, PINMUX_PA19I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA20I_CAN1_RX) && ! defined(IGNORE_PIN_PA20)
    {&pin_PA20, 1, PIN_PA20, PINMUX_PA20I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA21I_CAN1_RX) && ! defined(IGNORE_PIN_PA21)
    {&pin_PA21, 1, PIN_PA21, PINMUX_PA21I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA22I_CAN1_RX) && ! defined(IGNORE_PIN_PA22)
    {&pin_PA22, 1, PIN_PA22, PINMUX_PA22I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA23I_CAN1_RX) && ! defined(IGNORE_PIN_PA23)
    {&pin_PA23, 1, PIN_PA23, PINMUX_PA23I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA24I_CAN1_RX) && ! defined(IGNORE_PIN_PA24)
    {&pin_PA24, 1, PIN_PA24, PINMUX_PA24I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA25I_CAN1_RX) && ! defined(IGNORE_PIN_PA25)
    {&pin_PA25, 1, PIN_PA25, PINMUX_PA25I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA26I_CAN1_RX) && ! defined(IGNORE_PIN_PA26)
    {&pin_PA26, 1, PIN_PA26, PINMUX_PA26I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA27I_CAN1_RX) && ! defined(IGNORE_PIN_PA27)
    {&pin_PA27, 1, PIN_PA27, PINMUX_PA27I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA28I_CAN1_RX) && ! defined(IGNORE_PIN_PA28)
    {&pin_PA28, 1, PIN_PA28, PINMUX_PA28I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA29I_CAN1_RX) && ! defined(IGNORE_PIN_PA29)
    {&pin_PA29, 1, PIN_PA29, PINMUX_PA29I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA30I_CAN1_RX) && ! defined(IGNORE_PIN_PA30)
    {&pin_PA30, 1, PIN_PA30, PINMUX_PA30I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PA31I_CAN1_RX) && ! defined(IGNORE_PIN_PA31)
    {&pin_PA31, 1, PIN_PA31, PINMUX_PA31I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB00I_CAN1_RX) && ! defined(IGNORE_PIN_PB00)
    {&pin_PB00, 1, PIN_PB00, PINMUX_PB00I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB01I_CAN1_RX) && ! defined(IGNORE_PIN_PB01)
    {&pin_PB01, 1, PIN_PB01, PINMUX_PB01I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB02I_CAN1_RX) && ! defined(IGNORE_PIN_PB02)
    {&pin_PB02, 1, PIN_PB02, PINMUX_PB02I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB03I_CAN1_RX) && ! defined(IGNORE_PIN_PB03)
    {&pin_PB03, 1, PIN_PB03, PINMUX_PB03I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB04I_CAN1_RX) && ! defined(IGNORE_PIN_PB04)
    {&pin_PB04, 1, PIN_PB04, PINMUX_PB04I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB05I_CAN1_RX) && ! defined(IGNORE_PIN_PB05)
    {&pin_PB05, 1, PIN_PB05, PINMUX_PB05I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB06I_CAN1_RX) && ! defined(IGNORE_PIN_PB06)
    {&pin_PB06, 1, PIN_PB06, PINMUX_PB06I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB07I_CAN1_RX) && ! defined(IGNORE_PIN_PB07)
    {&pin_PB07, 1, PIN_PB07, PINMUX_PB07I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB08I_CAN1_RX) && ! defined(IGNORE_PIN_PB08)
    {&pin_PB08, 1, PIN_PB08, PINMUX_PB08I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB09I_CAN1_RX) && ! defined(IGNORE_PIN_PB09)
    {&pin_PB09, 1, PIN_PB09, PINMUX_PB09I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB10I_CAN1_RX) && ! defined(IGNORE_PIN_PB10)
    {&pin_PB10, 1, PIN_PB10, PINMUX_PB10I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB11I_CAN1_RX) && ! defined(IGNORE_PIN_PB11)
    {&pin_PB11, 1, PIN_PB11, PINMUX_PB11I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB12I_CAN1_RX) && ! defined(IGNORE_PIN_PB12)
    {&pin_PB12, 1, PIN_PB12, PINMUX_PB12I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB13I_CAN1_RX) && ! defined(IGNORE_PIN_PB13)
    {&pin_PB13, 1, PIN_PB13, PINMUX_PB13I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB14I_CAN1_RX) && ! defined(IGNORE_PIN_PB14)
    {&pin_PB14, 1, PIN_PB14, PINMUX_PB14I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB15I_CAN1_RX) && ! defined(IGNORE_PIN_PB15)
    {&pin_PB15, 1, PIN_PB15, PINMUX_PB15I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB16I_CAN1_RX) && ! defined(IGNORE_PIN_PB16)
    {&pin_PB16, 1, PIN_PB16, PINMUX_PB16I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB17I_CAN1_RX) && ! defined(IGNORE_PIN_PB17)
    {&pin_PB17, 1, PIN_PB17, PINMUX_PB17I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB18I_CAN1_RX) && ! defined(IGNORE_PIN_PB18)
    {&pin_PB18, 1, PIN_PB18, PINMUX_PB18I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB19I_CAN1_RX) && ! defined(IGNORE_PIN_PB19)
    {&pin_PB19, 1, PIN_PB19, PINMUX_PB19I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB20I_CAN1_RX) && ! defined(IGNORE_PIN_PB20)
    {&pin_PB20, 1, PIN_PB20, PINMUX_PB20I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB21I_CAN1_RX) && ! defined(IGNORE_PIN_PB21)
    {&pin_PB21, 1, PIN_PB21, PINMUX_PB21I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB22I_CAN1_RX) && ! defined(IGNORE_PIN_PB22)
    {&pin_PB22, 1, PIN_PB22, PINMUX_PB22I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB23I_CAN1_RX) && ! defined(IGNORE_PIN_PB23)
    {&pin_PB23, 1, PIN_PB23, PINMUX_PB23I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB24I_CAN1_RX) && ! defined(IGNORE_PIN_PB24)
    {&pin_PB24, 1, PIN_PB24, PINMUX_PB24I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB25I_CAN1_RX) && ! defined(IGNORE_PIN_PB25)
    {&pin_PB25, 1, PIN_PB25, PINMUX_PB25I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB26I_CAN1_RX) && ! defined(IGNORE_PIN_PB26)
    {&pin_PB26, 1, PIN_PB26, PINMUX_PB26I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB27I_CAN1_RX) && ! defined(IGNORE_PIN_PB27)
    {&pin_PB27, 1, PIN_PB27, PINMUX_PB27I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB28I_CAN1_RX) && ! defined(IGNORE_PIN_PB28)
    {&pin_PB28, 1, PIN_PB28, PINMUX_PB28I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB29I_CAN1_RX) && ! defined(IGNORE_PIN_PB29)
    {&pin_PB29, 1, PIN_PB29, PINMUX_PB29I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB30I_CAN1_RX) && ! defined(IGNORE_PIN_PB30)
    {&pin_PB30, 1, PIN_PB30, PINMUX_PB30I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PB31I_CAN1_RX) && ! defined(IGNORE_PIN_PB31)
    {&pin_PB31, 1, PIN_PB31, PINMUX_PB31I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC00I_CAN1_RX) && ! defined(IGNORE_PIN_PC00)
    {&pin_PC00, 1, PIN_PC00, PINMUX_PC00I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC01I_CAN1_RX) && ! defined(IGNORE_PIN_PC01)
    {&pin_PC01, 1, PIN_PC01, PINMUX_PC01I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC02I_CAN1_RX) && ! defined(IGNORE_PIN_PC02)
    {&pin_PC02, 1, PIN_PC02, PINMUX_PC02I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC03I_CAN1_RX) && ! defined(IGNORE_PIN_PC03)
    {&pin_PC03, 1, PIN_PC03, PINMUX_PC03I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC04I_CAN1_RX) && ! defined(IGNORE_PIN_PC04)
    {&pin_PC04, 1, PIN_PC04, PINMUX_PC04I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC05I_CAN1_RX) && ! defined(IGNORE_PIN_PC05)
    {&pin_PC05, 1, PIN_PC05, PINMUX_PC05I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC06I_CAN1_RX) && ! defined(IGNORE_PIN_PC06)
    {&pin_PC06, 1, PIN_PC06, PINMUX_PC06I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC07I_CAN1_RX) && ! defined(IGNORE_PIN_PC07)
    {&pin_PC07, 1, PIN_PC07, PINMUX_PC07I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC08I_CAN1_RX) && ! defined(IGNORE_PIN_PC08)
    {&pin_PC08, 1, PIN_PC08, PINMUX_PC08I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC09I_CAN1_RX) && ! defined(IGNORE_PIN_PC09)
    {&pin_PC09, 1, PIN_PC09, PINMUX_PC09I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC10I_CAN1_RX) && ! defined(IGNORE_PIN_PC10)
    {&pin_PC10, 1, PIN_PC10, PINMUX_PC10I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC11I_CAN1_RX) && ! defined(IGNORE_PIN_PC11)
    {&pin_PC11, 1, PIN_PC11, PINMUX_PC11I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC12I_CAN1_RX) && ! defined(IGNORE_PIN_PC12)
    {&pin_PC12, 1, PIN_PC12, PINMUX_PC12I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC13I_CAN1_RX) && ! defined(IGNORE_PIN_PC13)
    {&pin_PC13, 1, PIN_PC13, PINMUX_PC13I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC14I_CAN1_RX) && ! defined(IGNORE_PIN_PC14)
    {&pin_PC14, 1, PIN_PC14, PINMUX_PC14I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC15I_CAN1_RX) && ! defined(IGNORE_PIN_PC15)
    {&pin_PC15, 1, PIN_PC15, PINMUX_PC15I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC16I_CAN1_RX) && ! defined(IGNORE_PIN_PC16)
    {&pin_PC16, 1, PIN_PC16, PINMUX_PC16I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC17I_CAN1_RX) && ! defined(IGNORE_PIN_PC17)
    {&pin_PC17, 1, PIN_PC17, PINMUX_PC17I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC18I_CAN1_RX) && ! defined(IGNORE_PIN_PC18)
    {&pin_PC18, 1, PIN_PC18, PINMUX_PC18I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC19I_CAN1_RX) && ! defined(IGNORE_PIN_PC19)
    {&pin_PC19, 1, PIN_PC19, PINMUX_PC19I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC20I_CAN1_RX) && ! defined(IGNORE_PIN_PC20)
    {&pin_PC20, 1, PIN_PC20, PINMUX_PC20I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC21I_CAN1_RX) && ! defined(IGNORE_PIN_PC21)
    {&pin_PC21, 1, PIN_PC21, PINMUX_PC21I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC22I_CAN1_RX) && ! defined(IGNORE_PIN_PC22)
    {&pin_PC22, 1, PIN_PC22, PINMUX_PC22I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC23I_CAN1_RX) && ! defined(IGNORE_PIN_PC23)
    {&pin_PC23, 1, PIN_PC23, PINMUX_PC23I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC24I_CAN1_RX) && ! defined(IGNORE_PIN_PC24)
    {&pin_PC24, 1, PIN_PC24, PINMUX_PC24I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC25I_CAN1_RX) && ! defined(IGNORE_PIN_PC25)
    {&pin_PC25, 1, PIN_PC25, PINMUX_PC25I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC26I_CAN1_RX) && ! defined(IGNORE_PIN_PC26)
    {&pin_PC26, 1, PIN_PC26, PINMUX_PC26I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC27I_CAN1_RX) && ! defined(IGNORE_PIN_PC27)
    {&pin_PC27, 1, PIN_PC27, PINMUX_PC27I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC28I_CAN1_RX) && ! defined(IGNORE_PIN_PC28)
    {&pin_PC28, 1, PIN_PC28, PINMUX_PC28I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC29I_CAN1_RX) && ! defined(IGNORE_PIN_PC29)
    {&pin_PC29, 1, PIN_PC29, PINMUX_PC29I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC30I_CAN1_RX) && ! defined(IGNORE_PIN_PC30)
    {&pin_PC30, 1, PIN_PC30, PINMUX_PC30I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PC31I_CAN1_RX) && ! defined(IGNORE_PIN_PC31)
    {&pin_PC31, 1, PIN_PC31, PINMUX_PC31I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD00I_CAN1_RX) && ! defined(IGNORE_PIN_PD00)
    {&pin_PD00, 1, PIN_PD00, PINMUX_PD00I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD01I_CAN1_RX) && ! defined(IGNORE_PIN_PD01)
    {&pin_PD01, 1, PIN_PD01, PINMUX_PD01I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD02I_CAN1_RX) && ! defined(IGNORE_PIN_PD02)
    {&pin_PD02, 1, PIN_PD02, PINMUX_PD02I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD03I_CAN1_RX) && ! defined(IGNORE_PIN_PD03)
    {&pin_PD03, 1, PIN_PD03, PINMUX_PD03I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD04I_CAN1_RX) && ! defined(IGNORE_PIN_PD04)
    {&pin_PD04, 1, PIN_PD04, PINMUX_PD04I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD05I_CAN1_RX) && ! defined(IGNORE_PIN_PD05)
    {&pin_PD05, 1, PIN_PD05, PINMUX_PD05I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD06I_CAN1_RX) && ! defined(IGNORE_PIN_PD06)
    {&pin_PD06, 1, PIN_PD06, PINMUX_PD06I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD07I_CAN1_RX) && ! defined(IGNORE_PIN_PD07)
    {&pin_PD07, 1, PIN_PD07, PINMUX_PD07I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD08I_CAN1_RX) && ! defined(IGNORE_PIN_PD08)
    {&pin_PD08, 1, PIN_PD08, PINMUX_PD08I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD09I_CAN1_RX) && ! defined(IGNORE_PIN_PD09)
    {&pin_PD09, 1, PIN_PD09, PINMUX_PD09I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD10I_CAN1_RX) && ! defined(IGNORE_PIN_PD10)
    {&pin_PD10, 1, PIN_PD10, PINMUX_PD10I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD11I_CAN1_RX) && ! defined(IGNORE_PIN_PD11)
    {&pin_PD11, 1, PIN_PD11, PINMUX_PD11I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD12I_CAN1_RX) && ! defined(IGNORE_PIN_PD12)
    {&pin_PD12, 1, PIN_PD12, PINMUX_PD12I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD13I_CAN1_RX) && ! defined(IGNORE_PIN_PD13)
    {&pin_PD13, 1, PIN_PD13, PINMUX_PD13I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD14I_CAN1_RX) && ! defined(IGNORE_PIN_PD14)
    {&pin_PD14, 1, PIN_PD14, PINMUX_PD14I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD15I_CAN1_RX) && ! defined(IGNORE_PIN_PD15)
    {&pin_PD15, 1, PIN_PD15, PINMUX_PD15I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD16I_CAN1_RX) && ! defined(IGNORE_PIN_PD16)
    {&pin_PD16, 1, PIN_PD16, PINMUX_PD16I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD17I_CAN1_RX) && ! defined(IGNORE_PIN_PD17)
    {&pin_PD17, 1, PIN_PD17, PINMUX_PD17I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD18I_CAN1_RX) && ! defined(IGNORE_PIN_PD18)
    {&pin_PD18, 1, PIN_PD18, PINMUX_PD18I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD19I_CAN1_RX) && ! defined(IGNORE_PIN_PD19)
    {&pin_PD19, 1, PIN_PD19, PINMUX_PD19I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD20I_CAN1_RX) && ! defined(IGNORE_PIN_PD20)
    {&pin_PD20, 1, PIN_PD20, PINMUX_PD20I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD21I_CAN1_RX) && ! defined(IGNORE_PIN_PD21)
    {&pin_PD21, 1, PIN_PD21, PINMUX_PD21I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD22I_CAN1_RX) && ! defined(IGNORE_PIN_PD22)
    {&pin_PD22, 1, PIN_PD22, PINMUX_PD22I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD23I_CAN1_RX) && ! defined(IGNORE_PIN_PD23)
    {&pin_PD23, 1, PIN_PD23, PINMUX_PD23I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD24I_CAN1_RX) && ! defined(IGNORE_PIN_PD24)
    {&pin_PD24, 1, PIN_PD24, PINMUX_PD24I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD25I_CAN1_RX) && ! defined(IGNORE_PIN_PD25)
    {&pin_PD25, 1, PIN_PD25, PINMUX_PD25I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD26I_CAN1_RX) && ! defined(IGNORE_PIN_PD26)
    {&pin_PD26, 1, PIN_PD26, PINMUX_PD26I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD27I_CAN1_RX) && ! defined(IGNORE_PIN_PD27)
    {&pin_PD27, 1, PIN_PD27, PINMUX_PD27I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD28I_CAN1_RX) && ! defined(IGNORE_PIN_PD28)
    {&pin_PD28, 1, PIN_PD28, PINMUX_PD28I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD29I_CAN1_RX) && ! defined(IGNORE_PIN_PD29)
    {&pin_PD29, 1, PIN_PD29, PINMUX_PD29I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD30I_CAN1_RX) && ! defined(IGNORE_PIN_PD30)
    {&pin_PD30, 1, PIN_PD30, PINMUX_PD30I_CAN1_RX & 0xffff},
#endif
#if defined(PINMUX_PD31I_CAN1_RX) && ! defined(IGNORE_PIN_PD31)
    {&pin_PD31, 1, PIN_PD31, PINMUX_PD31I_CAN1_RX & 0xffff},
#endif
{NULL, 0, 0}
};

mcu_pin_function_t can_tx [] = {
#if defined(PINMUX_PA00H_CAN0_TX) && ! defined(IGNORE_PIN_PA00)
    {&pin_PA00, 0, PIN_PA00, PINMUX_PA00H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA01H_CAN0_TX) && ! defined(IGNORE_PIN_PA01)
    {&pin_PA01, 0, PIN_PA01, PINMUX_PA01H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA02H_CAN0_TX) && ! defined(IGNORE_PIN_PA02)
    {&pin_PA02, 0, PIN_PA02, PINMUX_PA02H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA03H_CAN0_TX) && ! defined(IGNORE_PIN_PA03)
    {&pin_PA03, 0, PIN_PA03, PINMUX_PA03H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA04H_CAN0_TX) && ! defined(IGNORE_PIN_PA04)
    {&pin_PA04, 0, PIN_PA04, PINMUX_PA04H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA05H_CAN0_TX) && ! defined(IGNORE_PIN_PA05)
    {&pin_PA05, 0, PIN_PA05, PINMUX_PA05H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA06H_CAN0_TX) && ! defined(IGNORE_PIN_PA06)
    {&pin_PA06, 0, PIN_PA06, PINMUX_PA06H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA07H_CAN0_TX) && ! defined(IGNORE_PIN_PA07)
    {&pin_PA07, 0, PIN_PA07, PINMUX_PA07H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA08H_CAN0_TX) && ! defined(IGNORE_PIN_PA08)
    {&pin_PA08, 0, PIN_PA08, PINMUX_PA08H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA09H_CAN0_TX) && ! defined(IGNORE_PIN_PA09)
    {&pin_PA09, 0, PIN_PA09, PINMUX_PA09H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA10H_CAN0_TX) && ! defined(IGNORE_PIN_PA10)
    {&pin_PA10, 0, PIN_PA10, PINMUX_PA10H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA11H_CAN0_TX) && ! defined(IGNORE_PIN_PA11)
    {&pin_PA11, 0, PIN_PA11, PINMUX_PA11H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA12H_CAN0_TX) && ! defined(IGNORE_PIN_PA12)
    {&pin_PA12, 0, PIN_PA12, PINMUX_PA12H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA13H_CAN0_TX) && ! defined(IGNORE_PIN_PA13)
    {&pin_PA13, 0, PIN_PA13, PINMUX_PA13H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA14H_CAN0_TX) && ! defined(IGNORE_PIN_PA14)
    {&pin_PA14, 0, PIN_PA14, PINMUX_PA14H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA15H_CAN0_TX) && ! defined(IGNORE_PIN_PA15)
    {&pin_PA15, 0, PIN_PA15, PINMUX_PA15H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA16H_CAN0_TX) && ! defined(IGNORE_PIN_PA16)
    {&pin_PA16, 0, PIN_PA16, PINMUX_PA16H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA17H_CAN0_TX) && ! defined(IGNORE_PIN_PA17)
    {&pin_PA17, 0, PIN_PA17, PINMUX_PA17H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA18H_CAN0_TX) && ! defined(IGNORE_PIN_PA18)
    {&pin_PA18, 0, PIN_PA18, PINMUX_PA18H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA19H_CAN0_TX) && ! defined(IGNORE_PIN_PA19)
    {&pin_PA19, 0, PIN_PA19, PINMUX_PA19H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA20H_CAN0_TX) && ! defined(IGNORE_PIN_PA20)
    {&pin_PA20, 0, PIN_PA20, PINMUX_PA20H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA21H_CAN0_TX) && ! defined(IGNORE_PIN_PA21)
    {&pin_PA21, 0, PIN_PA21, PINMUX_PA21H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA22H_CAN0_TX) && ! defined(IGNORE_PIN_PA22)
    {&pin_PA22, 0, PIN_PA22, PINMUX_PA22H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA23H_CAN0_TX) && ! defined(IGNORE_PIN_PA23)
    {&pin_PA23, 0, PIN_PA23, PINMUX_PA23H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA24H_CAN0_TX) && ! defined(IGNORE_PIN_PA24)
    {&pin_PA24, 0, PIN_PA24, PINMUX_PA24H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA25H_CAN0_TX) && ! defined(IGNORE_PIN_PA25)
    {&pin_PA25, 0, PIN_PA25, PINMUX_PA25H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA26H_CAN0_TX) && ! defined(IGNORE_PIN_PA26)
    {&pin_PA26, 0, PIN_PA26, PINMUX_PA26H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA27H_CAN0_TX) && ! defined(IGNORE_PIN_PA27)
    {&pin_PA27, 0, PIN_PA27, PINMUX_PA27H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA28H_CAN0_TX) && ! defined(IGNORE_PIN_PA28)
    {&pin_PA28, 0, PIN_PA28, PINMUX_PA28H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA29H_CAN0_TX) && ! defined(IGNORE_PIN_PA29)
    {&pin_PA29, 0, PIN_PA29, PINMUX_PA29H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA30H_CAN0_TX) && ! defined(IGNORE_PIN_PA30)
    {&pin_PA30, 0, PIN_PA30, PINMUX_PA30H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA31H_CAN0_TX) && ! defined(IGNORE_PIN_PA31)
    {&pin_PA31, 0, PIN_PA31, PINMUX_PA31H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB00H_CAN0_TX) && ! defined(IGNORE_PIN_PB00)
    {&pin_PB00, 0, PIN_PB00, PINMUX_PB00H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB01H_CAN0_TX) && ! defined(IGNORE_PIN_PB01)
    {&pin_PB01, 0, PIN_PB01, PINMUX_PB01H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB02H_CAN0_TX) && ! defined(IGNORE_PIN_PB02)
    {&pin_PB02, 0, PIN_PB02, PINMUX_PB02H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB03H_CAN0_TX) && ! defined(IGNORE_PIN_PB03)
    {&pin_PB03, 0, PIN_PB03, PINMUX_PB03H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB04H_CAN0_TX) && ! defined(IGNORE_PIN_PB04)
    {&pin_PB04, 0, PIN_PB04, PINMUX_PB04H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB05H_CAN0_TX) && ! defined(IGNORE_PIN_PB05)
    {&pin_PB05, 0, PIN_PB05, PINMUX_PB05H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB06H_CAN0_TX) && ! defined(IGNORE_PIN_PB06)
    {&pin_PB06, 0, PIN_PB06, PINMUX_PB06H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB07H_CAN0_TX) && ! defined(IGNORE_PIN_PB07)
    {&pin_PB07, 0, PIN_PB07, PINMUX_PB07H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB08H_CAN0_TX) && ! defined(IGNORE_PIN_PB08)
    {&pin_PB08, 0, PIN_PB08, PINMUX_PB08H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB09H_CAN0_TX) && ! defined(IGNORE_PIN_PB09)
    {&pin_PB09, 0, PIN_PB09, PINMUX_PB09H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB10H_CAN0_TX) && ! defined(IGNORE_PIN_PB10)
    {&pin_PB10, 0, PIN_PB10, PINMUX_PB10H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB11H_CAN0_TX) && ! defined(IGNORE_PIN_PB11)
    {&pin_PB11, 0, PIN_PB11, PINMUX_PB11H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB12H_CAN0_TX) && ! defined(IGNORE_PIN_PB12)
    {&pin_PB12, 0, PIN_PB12, PINMUX_PB12H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB13H_CAN0_TX) && ! defined(IGNORE_PIN_PB13)
    {&pin_PB13, 0, PIN_PB13, PINMUX_PB13H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB14H_CAN0_TX) && ! defined(IGNORE_PIN_PB14)
    {&pin_PB14, 0, PIN_PB14, PINMUX_PB14H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB15H_CAN0_TX) && ! defined(IGNORE_PIN_PB15)
    {&pin_PB15, 0, PIN_PB15, PINMUX_PB15H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB16H_CAN0_TX) && ! defined(IGNORE_PIN_PB16)
    {&pin_PB16, 0, PIN_PB16, PINMUX_PB16H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB17H_CAN0_TX) && ! defined(IGNORE_PIN_PB17)
    {&pin_PB17, 0, PIN_PB17, PINMUX_PB17H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB18H_CAN0_TX) && ! defined(IGNORE_PIN_PB18)
    {&pin_PB18, 0, PIN_PB18, PINMUX_PB18H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB19H_CAN0_TX) && ! defined(IGNORE_PIN_PB19)
    {&pin_PB19, 0, PIN_PB19, PINMUX_PB19H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB20H_CAN0_TX) && ! defined(IGNORE_PIN_PB20)
    {&pin_PB20, 0, PIN_PB20, PINMUX_PB20H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB21H_CAN0_TX) && ! defined(IGNORE_PIN_PB21)
    {&pin_PB21, 0, PIN_PB21, PINMUX_PB21H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB22H_CAN0_TX) && ! defined(IGNORE_PIN_PB22)
    {&pin_PB22, 0, PIN_PB22, PINMUX_PB22H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB23H_CAN0_TX) && ! defined(IGNORE_PIN_PB23)
    {&pin_PB23, 0, PIN_PB23, PINMUX_PB23H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB24H_CAN0_TX) && ! defined(IGNORE_PIN_PB24)
    {&pin_PB24, 0, PIN_PB24, PINMUX_PB24H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB25H_CAN0_TX) && ! defined(IGNORE_PIN_PB25)
    {&pin_PB25, 0, PIN_PB25, PINMUX_PB25H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB26H_CAN0_TX) && ! defined(IGNORE_PIN_PB26)
    {&pin_PB26, 0, PIN_PB26, PINMUX_PB26H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB27H_CAN0_TX) && ! defined(IGNORE_PIN_PB27)
    {&pin_PB27, 0, PIN_PB27, PINMUX_PB27H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB28H_CAN0_TX) && ! defined(IGNORE_PIN_PB28)
    {&pin_PB28, 0, PIN_PB28, PINMUX_PB28H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB29H_CAN0_TX) && ! defined(IGNORE_PIN_PB29)
    {&pin_PB29, 0, PIN_PB29, PINMUX_PB29H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB30H_CAN0_TX) && ! defined(IGNORE_PIN_PB30)
    {&pin_PB30, 0, PIN_PB30, PINMUX_PB30H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB31H_CAN0_TX) && ! defined(IGNORE_PIN_PB31)
    {&pin_PB31, 0, PIN_PB31, PINMUX_PB31H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC00H_CAN0_TX) && ! defined(IGNORE_PIN_PC00)
    {&pin_PC00, 0, PIN_PC00, PINMUX_PC00H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC01H_CAN0_TX) && ! defined(IGNORE_PIN_PC01)
    {&pin_PC01, 0, PIN_PC01, PINMUX_PC01H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC02H_CAN0_TX) && ! defined(IGNORE_PIN_PC02)
    {&pin_PC02, 0, PIN_PC02, PINMUX_PC02H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC03H_CAN0_TX) && ! defined(IGNORE_PIN_PC03)
    {&pin_PC03, 0, PIN_PC03, PINMUX_PC03H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC04H_CAN0_TX) && ! defined(IGNORE_PIN_PC04)
    {&pin_PC04, 0, PIN_PC04, PINMUX_PC04H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC05H_CAN0_TX) && ! defined(IGNORE_PIN_PC05)
    {&pin_PC05, 0, PIN_PC05, PINMUX_PC05H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC06H_CAN0_TX) && ! defined(IGNORE_PIN_PC06)
    {&pin_PC06, 0, PIN_PC06, PINMUX_PC06H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC07H_CAN0_TX) && ! defined(IGNORE_PIN_PC07)
    {&pin_PC07, 0, PIN_PC07, PINMUX_PC07H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC08H_CAN0_TX) && ! defined(IGNORE_PIN_PC08)
    {&pin_PC08, 0, PIN_PC08, PINMUX_PC08H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC09H_CAN0_TX) && ! defined(IGNORE_PIN_PC09)
    {&pin_PC09, 0, PIN_PC09, PINMUX_PC09H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC10H_CAN0_TX) && ! defined(IGNORE_PIN_PC10)
    {&pin_PC10, 0, PIN_PC10, PINMUX_PC10H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC11H_CAN0_TX) && ! defined(IGNORE_PIN_PC11)
    {&pin_PC11, 0, PIN_PC11, PINMUX_PC11H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC12H_CAN0_TX) && ! defined(IGNORE_PIN_PC12)
    {&pin_PC12, 0, PIN_PC12, PINMUX_PC12H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC13H_CAN0_TX) && ! defined(IGNORE_PIN_PC13)
    {&pin_PC13, 0, PIN_PC13, PINMUX_PC13H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC14H_CAN0_TX) && ! defined(IGNORE_PIN_PC14)
    {&pin_PC14, 0, PIN_PC14, PINMUX_PC14H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC15H_CAN0_TX) && ! defined(IGNORE_PIN_PC15)
    {&pin_PC15, 0, PIN_PC15, PINMUX_PC15H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC16H_CAN0_TX) && ! defined(IGNORE_PIN_PC16)
    {&pin_PC16, 0, PIN_PC16, PINMUX_PC16H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC17H_CAN0_TX) && ! defined(IGNORE_PIN_PC17)
    {&pin_PC17, 0, PIN_PC17, PINMUX_PC17H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC18H_CAN0_TX) && ! defined(IGNORE_PIN_PC18)
    {&pin_PC18, 0, PIN_PC18, PINMUX_PC18H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC19H_CAN0_TX) && ! defined(IGNORE_PIN_PC19)
    {&pin_PC19, 0, PIN_PC19, PINMUX_PC19H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC20H_CAN0_TX) && ! defined(IGNORE_PIN_PC20)
    {&pin_PC20, 0, PIN_PC20, PINMUX_PC20H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC21H_CAN0_TX) && ! defined(IGNORE_PIN_PC21)
    {&pin_PC21, 0, PIN_PC21, PINMUX_PC21H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC22H_CAN0_TX) && ! defined(IGNORE_PIN_PC22)
    {&pin_PC22, 0, PIN_PC22, PINMUX_PC22H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC23H_CAN0_TX) && ! defined(IGNORE_PIN_PC23)
    {&pin_PC23, 0, PIN_PC23, PINMUX_PC23H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC24H_CAN0_TX) && ! defined(IGNORE_PIN_PC24)
    {&pin_PC24, 0, PIN_PC24, PINMUX_PC24H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC25H_CAN0_TX) && ! defined(IGNORE_PIN_PC25)
    {&pin_PC25, 0, PIN_PC25, PINMUX_PC25H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC26H_CAN0_TX) && ! defined(IGNORE_PIN_PC26)
    {&pin_PC26, 0, PIN_PC26, PINMUX_PC26H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC27H_CAN0_TX) && ! defined(IGNORE_PIN_PC27)
    {&pin_PC27, 0, PIN_PC27, PINMUX_PC27H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC28H_CAN0_TX) && ! defined(IGNORE_PIN_PC28)
    {&pin_PC28, 0, PIN_PC28, PINMUX_PC28H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC29H_CAN0_TX) && ! defined(IGNORE_PIN_PC29)
    {&pin_PC29, 0, PIN_PC29, PINMUX_PC29H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC30H_CAN0_TX) && ! defined(IGNORE_PIN_PC30)
    {&pin_PC30, 0, PIN_PC30, PINMUX_PC30H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC31H_CAN0_TX) && ! defined(IGNORE_PIN_PC31)
    {&pin_PC31, 0, PIN_PC31, PINMUX_PC31H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD00H_CAN0_TX) && ! defined(IGNORE_PIN_PD00)
    {&pin_PD00, 0, PIN_PD00, PINMUX_PD00H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD01H_CAN0_TX) && ! defined(IGNORE_PIN_PD01)
    {&pin_PD01, 0, PIN_PD01, PINMUX_PD01H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD02H_CAN0_TX) && ! defined(IGNORE_PIN_PD02)
    {&pin_PD02, 0, PIN_PD02, PINMUX_PD02H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD03H_CAN0_TX) && ! defined(IGNORE_PIN_PD03)
    {&pin_PD03, 0, PIN_PD03, PINMUX_PD03H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD04H_CAN0_TX) && ! defined(IGNORE_PIN_PD04)
    {&pin_PD04, 0, PIN_PD04, PINMUX_PD04H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD05H_CAN0_TX) && ! defined(IGNORE_PIN_PD05)
    {&pin_PD05, 0, PIN_PD05, PINMUX_PD05H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD06H_CAN0_TX) && ! defined(IGNORE_PIN_PD06)
    {&pin_PD06, 0, PIN_PD06, PINMUX_PD06H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD07H_CAN0_TX) && ! defined(IGNORE_PIN_PD07)
    {&pin_PD07, 0, PIN_PD07, PINMUX_PD07H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD08H_CAN0_TX) && ! defined(IGNORE_PIN_PD08)
    {&pin_PD08, 0, PIN_PD08, PINMUX_PD08H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD09H_CAN0_TX) && ! defined(IGNORE_PIN_PD09)
    {&pin_PD09, 0, PIN_PD09, PINMUX_PD09H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD10H_CAN0_TX) && ! defined(IGNORE_PIN_PD10)
    {&pin_PD10, 0, PIN_PD10, PINMUX_PD10H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD11H_CAN0_TX) && ! defined(IGNORE_PIN_PD11)
    {&pin_PD11, 0, PIN_PD11, PINMUX_PD11H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD12H_CAN0_TX) && ! defined(IGNORE_PIN_PD12)
    {&pin_PD12, 0, PIN_PD12, PINMUX_PD12H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD13H_CAN0_TX) && ! defined(IGNORE_PIN_PD13)
    {&pin_PD13, 0, PIN_PD13, PINMUX_PD13H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD14H_CAN0_TX) && ! defined(IGNORE_PIN_PD14)
    {&pin_PD14, 0, PIN_PD14, PINMUX_PD14H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD15H_CAN0_TX) && ! defined(IGNORE_PIN_PD15)
    {&pin_PD15, 0, PIN_PD15, PINMUX_PD15H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD16H_CAN0_TX) && ! defined(IGNORE_PIN_PD16)
    {&pin_PD16, 0, PIN_PD16, PINMUX_PD16H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD17H_CAN0_TX) && ! defined(IGNORE_PIN_PD17)
    {&pin_PD17, 0, PIN_PD17, PINMUX_PD17H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD18H_CAN0_TX) && ! defined(IGNORE_PIN_PD18)
    {&pin_PD18, 0, PIN_PD18, PINMUX_PD18H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD19H_CAN0_TX) && ! defined(IGNORE_PIN_PD19)
    {&pin_PD19, 0, PIN_PD19, PINMUX_PD19H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD20H_CAN0_TX) && ! defined(IGNORE_PIN_PD20)
    {&pin_PD20, 0, PIN_PD20, PINMUX_PD20H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD21H_CAN0_TX) && ! defined(IGNORE_PIN_PD21)
    {&pin_PD21, 0, PIN_PD21, PINMUX_PD21H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD22H_CAN0_TX) && ! defined(IGNORE_PIN_PD22)
    {&pin_PD22, 0, PIN_PD22, PINMUX_PD22H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD23H_CAN0_TX) && ! defined(IGNORE_PIN_PD23)
    {&pin_PD23, 0, PIN_PD23, PINMUX_PD23H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD24H_CAN0_TX) && ! defined(IGNORE_PIN_PD24)
    {&pin_PD24, 0, PIN_PD24, PINMUX_PD24H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD25H_CAN0_TX) && ! defined(IGNORE_PIN_PD25)
    {&pin_PD25, 0, PIN_PD25, PINMUX_PD25H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD26H_CAN0_TX) && ! defined(IGNORE_PIN_PD26)
    {&pin_PD26, 0, PIN_PD26, PINMUX_PD26H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD27H_CAN0_TX) && ! defined(IGNORE_PIN_PD27)
    {&pin_PD27, 0, PIN_PD27, PINMUX_PD27H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD28H_CAN0_TX) && ! defined(IGNORE_PIN_PD28)
    {&pin_PD28, 0, PIN_PD28, PINMUX_PD28H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD29H_CAN0_TX) && ! defined(IGNORE_PIN_PD29)
    {&pin_PD29, 0, PIN_PD29, PINMUX_PD29H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD30H_CAN0_TX) && ! defined(IGNORE_PIN_PD30)
    {&pin_PD30, 0, PIN_PD30, PINMUX_PD30H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD31H_CAN0_TX) && ! defined(IGNORE_PIN_PD31)
    {&pin_PD31, 0, PIN_PD31, PINMUX_PD31H_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA00I_CAN0_TX) && ! defined(IGNORE_PIN_PA00)
    {&pin_PA00, 0, PIN_PA00, PINMUX_PA00I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA01I_CAN0_TX) && ! defined(IGNORE_PIN_PA01)
    {&pin_PA01, 0, PIN_PA01, PINMUX_PA01I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA02I_CAN0_TX) && ! defined(IGNORE_PIN_PA02)
    {&pin_PA02, 0, PIN_PA02, PINMUX_PA02I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA03I_CAN0_TX) && ! defined(IGNORE_PIN_PA03)
    {&pin_PA03, 0, PIN_PA03, PINMUX_PA03I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA04I_CAN0_TX) && ! defined(IGNORE_PIN_PA04)
    {&pin_PA04, 0, PIN_PA04, PINMUX_PA04I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA05I_CAN0_TX) && ! defined(IGNORE_PIN_PA05)
    {&pin_PA05, 0, PIN_PA05, PINMUX_PA05I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA06I_CAN0_TX) && ! defined(IGNORE_PIN_PA06)
    {&pin_PA06, 0, PIN_PA06, PINMUX_PA06I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA07I_CAN0_TX) && ! defined(IGNORE_PIN_PA07)
    {&pin_PA07, 0, PIN_PA07, PINMUX_PA07I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA08I_CAN0_TX) && ! defined(IGNORE_PIN_PA08)
    {&pin_PA08, 0, PIN_PA08, PINMUX_PA08I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA09I_CAN0_TX) && ! defined(IGNORE_PIN_PA09)
    {&pin_PA09, 0, PIN_PA09, PINMUX_PA09I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA10I_CAN0_TX) && ! defined(IGNORE_PIN_PA10)
    {&pin_PA10, 0, PIN_PA10, PINMUX_PA10I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA11I_CAN0_TX) && ! defined(IGNORE_PIN_PA11)
    {&pin_PA11, 0, PIN_PA11, PINMUX_PA11I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA12I_CAN0_TX) && ! defined(IGNORE_PIN_PA12)
    {&pin_PA12, 0, PIN_PA12, PINMUX_PA12I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA13I_CAN0_TX) && ! defined(IGNORE_PIN_PA13)
    {&pin_PA13, 0, PIN_PA13, PINMUX_PA13I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA14I_CAN0_TX) && ! defined(IGNORE_PIN_PA14)
    {&pin_PA14, 0, PIN_PA14, PINMUX_PA14I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA15I_CAN0_TX) && ! defined(IGNORE_PIN_PA15)
    {&pin_PA15, 0, PIN_PA15, PINMUX_PA15I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA16I_CAN0_TX) && ! defined(IGNORE_PIN_PA16)
    {&pin_PA16, 0, PIN_PA16, PINMUX_PA16I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA17I_CAN0_TX) && ! defined(IGNORE_PIN_PA17)
    {&pin_PA17, 0, PIN_PA17, PINMUX_PA17I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA18I_CAN0_TX) && ! defined(IGNORE_PIN_PA18)
    {&pin_PA18, 0, PIN_PA18, PINMUX_PA18I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA19I_CAN0_TX) && ! defined(IGNORE_PIN_PA19)
    {&pin_PA19, 0, PIN_PA19, PINMUX_PA19I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA20I_CAN0_TX) && ! defined(IGNORE_PIN_PA20)
    {&pin_PA20, 0, PIN_PA20, PINMUX_PA20I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA21I_CAN0_TX) && ! defined(IGNORE_PIN_PA21)
    {&pin_PA21, 0, PIN_PA21, PINMUX_PA21I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA22I_CAN0_TX) && ! defined(IGNORE_PIN_PA22)
    {&pin_PA22, 0, PIN_PA22, PINMUX_PA22I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA23I_CAN0_TX) && ! defined(IGNORE_PIN_PA23)
    {&pin_PA23, 0, PIN_PA23, PINMUX_PA23I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA24I_CAN0_TX) && ! defined(IGNORE_PIN_PA24)
    {&pin_PA24, 0, PIN_PA24, PINMUX_PA24I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA25I_CAN0_TX) && ! defined(IGNORE_PIN_PA25)
    {&pin_PA25, 0, PIN_PA25, PINMUX_PA25I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA26I_CAN0_TX) && ! defined(IGNORE_PIN_PA26)
    {&pin_PA26, 0, PIN_PA26, PINMUX_PA26I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA27I_CAN0_TX) && ! defined(IGNORE_PIN_PA27)
    {&pin_PA27, 0, PIN_PA27, PINMUX_PA27I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA28I_CAN0_TX) && ! defined(IGNORE_PIN_PA28)
    {&pin_PA28, 0, PIN_PA28, PINMUX_PA28I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA29I_CAN0_TX) && ! defined(IGNORE_PIN_PA29)
    {&pin_PA29, 0, PIN_PA29, PINMUX_PA29I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA30I_CAN0_TX) && ! defined(IGNORE_PIN_PA30)
    {&pin_PA30, 0, PIN_PA30, PINMUX_PA30I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA31I_CAN0_TX) && ! defined(IGNORE_PIN_PA31)
    {&pin_PA31, 0, PIN_PA31, PINMUX_PA31I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB00I_CAN0_TX) && ! defined(IGNORE_PIN_PB00)
    {&pin_PB00, 0, PIN_PB00, PINMUX_PB00I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB01I_CAN0_TX) && ! defined(IGNORE_PIN_PB01)
    {&pin_PB01, 0, PIN_PB01, PINMUX_PB01I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB02I_CAN0_TX) && ! defined(IGNORE_PIN_PB02)
    {&pin_PB02, 0, PIN_PB02, PINMUX_PB02I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB03I_CAN0_TX) && ! defined(IGNORE_PIN_PB03)
    {&pin_PB03, 0, PIN_PB03, PINMUX_PB03I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB04I_CAN0_TX) && ! defined(IGNORE_PIN_PB04)
    {&pin_PB04, 0, PIN_PB04, PINMUX_PB04I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB05I_CAN0_TX) && ! defined(IGNORE_PIN_PB05)
    {&pin_PB05, 0, PIN_PB05, PINMUX_PB05I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB06I_CAN0_TX) && ! defined(IGNORE_PIN_PB06)
    {&pin_PB06, 0, PIN_PB06, PINMUX_PB06I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB07I_CAN0_TX) && ! defined(IGNORE_PIN_PB07)
    {&pin_PB07, 0, PIN_PB07, PINMUX_PB07I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB08I_CAN0_TX) && ! defined(IGNORE_PIN_PB08)
    {&pin_PB08, 0, PIN_PB08, PINMUX_PB08I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB09I_CAN0_TX) && ! defined(IGNORE_PIN_PB09)
    {&pin_PB09, 0, PIN_PB09, PINMUX_PB09I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB10I_CAN0_TX) && ! defined(IGNORE_PIN_PB10)
    {&pin_PB10, 0, PIN_PB10, PINMUX_PB10I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB11I_CAN0_TX) && ! defined(IGNORE_PIN_PB11)
    {&pin_PB11, 0, PIN_PB11, PINMUX_PB11I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB12I_CAN0_TX) && ! defined(IGNORE_PIN_PB12)
    {&pin_PB12, 0, PIN_PB12, PINMUX_PB12I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB13I_CAN0_TX) && ! defined(IGNORE_PIN_PB13)
    {&pin_PB13, 0, PIN_PB13, PINMUX_PB13I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB14I_CAN0_TX) && ! defined(IGNORE_PIN_PB14)
    {&pin_PB14, 0, PIN_PB14, PINMUX_PB14I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB15I_CAN0_TX) && ! defined(IGNORE_PIN_PB15)
    {&pin_PB15, 0, PIN_PB15, PINMUX_PB15I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB16I_CAN0_TX) && ! defined(IGNORE_PIN_PB16)
    {&pin_PB16, 0, PIN_PB16, PINMUX_PB16I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB17I_CAN0_TX) && ! defined(IGNORE_PIN_PB17)
    {&pin_PB17, 0, PIN_PB17, PINMUX_PB17I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB18I_CAN0_TX) && ! defined(IGNORE_PIN_PB18)
    {&pin_PB18, 0, PIN_PB18, PINMUX_PB18I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB19I_CAN0_TX) && ! defined(IGNORE_PIN_PB19)
    {&pin_PB19, 0, PIN_PB19, PINMUX_PB19I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB20I_CAN0_TX) && ! defined(IGNORE_PIN_PB20)
    {&pin_PB20, 0, PIN_PB20, PINMUX_PB20I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB21I_CAN0_TX) && ! defined(IGNORE_PIN_PB21)
    {&pin_PB21, 0, PIN_PB21, PINMUX_PB21I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB22I_CAN0_TX) && ! defined(IGNORE_PIN_PB22)
    {&pin_PB22, 0, PIN_PB22, PINMUX_PB22I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB23I_CAN0_TX) && ! defined(IGNORE_PIN_PB23)
    {&pin_PB23, 0, PIN_PB23, PINMUX_PB23I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB24I_CAN0_TX) && ! defined(IGNORE_PIN_PB24)
    {&pin_PB24, 0, PIN_PB24, PINMUX_PB24I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB25I_CAN0_TX) && ! defined(IGNORE_PIN_PB25)
    {&pin_PB25, 0, PIN_PB25, PINMUX_PB25I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB26I_CAN0_TX) && ! defined(IGNORE_PIN_PB26)
    {&pin_PB26, 0, PIN_PB26, PINMUX_PB26I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB27I_CAN0_TX) && ! defined(IGNORE_PIN_PB27)
    {&pin_PB27, 0, PIN_PB27, PINMUX_PB27I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB28I_CAN0_TX) && ! defined(IGNORE_PIN_PB28)
    {&pin_PB28, 0, PIN_PB28, PINMUX_PB28I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB29I_CAN0_TX) && ! defined(IGNORE_PIN_PB29)
    {&pin_PB29, 0, PIN_PB29, PINMUX_PB29I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB30I_CAN0_TX) && ! defined(IGNORE_PIN_PB30)
    {&pin_PB30, 0, PIN_PB30, PINMUX_PB30I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PB31I_CAN0_TX) && ! defined(IGNORE_PIN_PB31)
    {&pin_PB31, 0, PIN_PB31, PINMUX_PB31I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC00I_CAN0_TX) && ! defined(IGNORE_PIN_PC00)
    {&pin_PC00, 0, PIN_PC00, PINMUX_PC00I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC01I_CAN0_TX) && ! defined(IGNORE_PIN_PC01)
    {&pin_PC01, 0, PIN_PC01, PINMUX_PC01I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC02I_CAN0_TX) && ! defined(IGNORE_PIN_PC02)
    {&pin_PC02, 0, PIN_PC02, PINMUX_PC02I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC03I_CAN0_TX) && ! defined(IGNORE_PIN_PC03)
    {&pin_PC03, 0, PIN_PC03, PINMUX_PC03I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC04I_CAN0_TX) && ! defined(IGNORE_PIN_PC04)
    {&pin_PC04, 0, PIN_PC04, PINMUX_PC04I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC05I_CAN0_TX) && ! defined(IGNORE_PIN_PC05)
    {&pin_PC05, 0, PIN_PC05, PINMUX_PC05I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC06I_CAN0_TX) && ! defined(IGNORE_PIN_PC06)
    {&pin_PC06, 0, PIN_PC06, PINMUX_PC06I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC07I_CAN0_TX) && ! defined(IGNORE_PIN_PC07)
    {&pin_PC07, 0, PIN_PC07, PINMUX_PC07I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC08I_CAN0_TX) && ! defined(IGNORE_PIN_PC08)
    {&pin_PC08, 0, PIN_PC08, PINMUX_PC08I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC09I_CAN0_TX) && ! defined(IGNORE_PIN_PC09)
    {&pin_PC09, 0, PIN_PC09, PINMUX_PC09I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC10I_CAN0_TX) && ! defined(IGNORE_PIN_PC10)
    {&pin_PC10, 0, PIN_PC10, PINMUX_PC10I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC11I_CAN0_TX) && ! defined(IGNORE_PIN_PC11)
    {&pin_PC11, 0, PIN_PC11, PINMUX_PC11I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC12I_CAN0_TX) && ! defined(IGNORE_PIN_PC12)
    {&pin_PC12, 0, PIN_PC12, PINMUX_PC12I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC13I_CAN0_TX) && ! defined(IGNORE_PIN_PC13)
    {&pin_PC13, 0, PIN_PC13, PINMUX_PC13I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC14I_CAN0_TX) && ! defined(IGNORE_PIN_PC14)
    {&pin_PC14, 0, PIN_PC14, PINMUX_PC14I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC15I_CAN0_TX) && ! defined(IGNORE_PIN_PC15)
    {&pin_PC15, 0, PIN_PC15, PINMUX_PC15I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC16I_CAN0_TX) && ! defined(IGNORE_PIN_PC16)
    {&pin_PC16, 0, PIN_PC16, PINMUX_PC16I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC17I_CAN0_TX) && ! defined(IGNORE_PIN_PC17)
    {&pin_PC17, 0, PIN_PC17, PINMUX_PC17I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC18I_CAN0_TX) && ! defined(IGNORE_PIN_PC18)
    {&pin_PC18, 0, PIN_PC18, PINMUX_PC18I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC19I_CAN0_TX) && ! defined(IGNORE_PIN_PC19)
    {&pin_PC19, 0, PIN_PC19, PINMUX_PC19I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC20I_CAN0_TX) && ! defined(IGNORE_PIN_PC20)
    {&pin_PC20, 0, PIN_PC20, PINMUX_PC20I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC21I_CAN0_TX) && ! defined(IGNORE_PIN_PC21)
    {&pin_PC21, 0, PIN_PC21, PINMUX_PC21I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC22I_CAN0_TX) && ! defined(IGNORE_PIN_PC22)
    {&pin_PC22, 0, PIN_PC22, PINMUX_PC22I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC23I_CAN0_TX) && ! defined(IGNORE_PIN_PC23)
    {&pin_PC23, 0, PIN_PC23, PINMUX_PC23I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC24I_CAN0_TX) && ! defined(IGNORE_PIN_PC24)
    {&pin_PC24, 0, PIN_PC24, PINMUX_PC24I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC25I_CAN0_TX) && ! defined(IGNORE_PIN_PC25)
    {&pin_PC25, 0, PIN_PC25, PINMUX_PC25I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC26I_CAN0_TX) && ! defined(IGNORE_PIN_PC26)
    {&pin_PC26, 0, PIN_PC26, PINMUX_PC26I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC27I_CAN0_TX) && ! defined(IGNORE_PIN_PC27)
    {&pin_PC27, 0, PIN_PC27, PINMUX_PC27I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC28I_CAN0_TX) && ! defined(IGNORE_PIN_PC28)
    {&pin_PC28, 0, PIN_PC28, PINMUX_PC28I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC29I_CAN0_TX) && ! defined(IGNORE_PIN_PC29)
    {&pin_PC29, 0, PIN_PC29, PINMUX_PC29I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC30I_CAN0_TX) && ! defined(IGNORE_PIN_PC30)
    {&pin_PC30, 0, PIN_PC30, PINMUX_PC30I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PC31I_CAN0_TX) && ! defined(IGNORE_PIN_PC31)
    {&pin_PC31, 0, PIN_PC31, PINMUX_PC31I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD00I_CAN0_TX) && ! defined(IGNORE_PIN_PD00)
    {&pin_PD00, 0, PIN_PD00, PINMUX_PD00I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD01I_CAN0_TX) && ! defined(IGNORE_PIN_PD01)
    {&pin_PD01, 0, PIN_PD01, PINMUX_PD01I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD02I_CAN0_TX) && ! defined(IGNORE_PIN_PD02)
    {&pin_PD02, 0, PIN_PD02, PINMUX_PD02I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD03I_CAN0_TX) && ! defined(IGNORE_PIN_PD03)
    {&pin_PD03, 0, PIN_PD03, PINMUX_PD03I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD04I_CAN0_TX) && ! defined(IGNORE_PIN_PD04)
    {&pin_PD04, 0, PIN_PD04, PINMUX_PD04I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD05I_CAN0_TX) && ! defined(IGNORE_PIN_PD05)
    {&pin_PD05, 0, PIN_PD05, PINMUX_PD05I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD06I_CAN0_TX) && ! defined(IGNORE_PIN_PD06)
    {&pin_PD06, 0, PIN_PD06, PINMUX_PD06I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD07I_CAN0_TX) && ! defined(IGNORE_PIN_PD07)
    {&pin_PD07, 0, PIN_PD07, PINMUX_PD07I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD08I_CAN0_TX) && ! defined(IGNORE_PIN_PD08)
    {&pin_PD08, 0, PIN_PD08, PINMUX_PD08I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD09I_CAN0_TX) && ! defined(IGNORE_PIN_PD09)
    {&pin_PD09, 0, PIN_PD09, PINMUX_PD09I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD10I_CAN0_TX) && ! defined(IGNORE_PIN_PD10)
    {&pin_PD10, 0, PIN_PD10, PINMUX_PD10I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD11I_CAN0_TX) && ! defined(IGNORE_PIN_PD11)
    {&pin_PD11, 0, PIN_PD11, PINMUX_PD11I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD12I_CAN0_TX) && ! defined(IGNORE_PIN_PD12)
    {&pin_PD12, 0, PIN_PD12, PINMUX_PD12I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD13I_CAN0_TX) && ! defined(IGNORE_PIN_PD13)
    {&pin_PD13, 0, PIN_PD13, PINMUX_PD13I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD14I_CAN0_TX) && ! defined(IGNORE_PIN_PD14)
    {&pin_PD14, 0, PIN_PD14, PINMUX_PD14I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD15I_CAN0_TX) && ! defined(IGNORE_PIN_PD15)
    {&pin_PD15, 0, PIN_PD15, PINMUX_PD15I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD16I_CAN0_TX) && ! defined(IGNORE_PIN_PD16)
    {&pin_PD16, 0, PIN_PD16, PINMUX_PD16I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD17I_CAN0_TX) && ! defined(IGNORE_PIN_PD17)
    {&pin_PD17, 0, PIN_PD17, PINMUX_PD17I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD18I_CAN0_TX) && ! defined(IGNORE_PIN_PD18)
    {&pin_PD18, 0, PIN_PD18, PINMUX_PD18I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD19I_CAN0_TX) && ! defined(IGNORE_PIN_PD19)
    {&pin_PD19, 0, PIN_PD19, PINMUX_PD19I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD20I_CAN0_TX) && ! defined(IGNORE_PIN_PD20)
    {&pin_PD20, 0, PIN_PD20, PINMUX_PD20I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD21I_CAN0_TX) && ! defined(IGNORE_PIN_PD21)
    {&pin_PD21, 0, PIN_PD21, PINMUX_PD21I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD22I_CAN0_TX) && ! defined(IGNORE_PIN_PD22)
    {&pin_PD22, 0, PIN_PD22, PINMUX_PD22I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD23I_CAN0_TX) && ! defined(IGNORE_PIN_PD23)
    {&pin_PD23, 0, PIN_PD23, PINMUX_PD23I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD24I_CAN0_TX) && ! defined(IGNORE_PIN_PD24)
    {&pin_PD24, 0, PIN_PD24, PINMUX_PD24I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD25I_CAN0_TX) && ! defined(IGNORE_PIN_PD25)
    {&pin_PD25, 0, PIN_PD25, PINMUX_PD25I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD26I_CAN0_TX) && ! defined(IGNORE_PIN_PD26)
    {&pin_PD26, 0, PIN_PD26, PINMUX_PD26I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD27I_CAN0_TX) && ! defined(IGNORE_PIN_PD27)
    {&pin_PD27, 0, PIN_PD27, PINMUX_PD27I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD28I_CAN0_TX) && ! defined(IGNORE_PIN_PD28)
    {&pin_PD28, 0, PIN_PD28, PINMUX_PD28I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD29I_CAN0_TX) && ! defined(IGNORE_PIN_PD29)
    {&pin_PD29, 0, PIN_PD29, PINMUX_PD29I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD30I_CAN0_TX) && ! defined(IGNORE_PIN_PD30)
    {&pin_PD30, 0, PIN_PD30, PINMUX_PD30I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PD31I_CAN0_TX) && ! defined(IGNORE_PIN_PD31)
    {&pin_PD31, 0, PIN_PD31, PINMUX_PD31I_CAN0_TX & 0xffff},
#endif
#if defined(PINMUX_PA00H_CAN1_TX) && ! defined(IGNORE_PIN_PA00)
    {&pin_PA00, 1, PIN_PA00, PINMUX_PA00H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA01H_CAN1_TX) && ! defined(IGNORE_PIN_PA01)
    {&pin_PA01, 1, PIN_PA01, PINMUX_PA01H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA02H_CAN1_TX) && ! defined(IGNORE_PIN_PA02)
    {&pin_PA02, 1, PIN_PA02, PINMUX_PA02H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA03H_CAN1_TX) && ! defined(IGNORE_PIN_PA03)
    {&pin_PA03, 1, PIN_PA03, PINMUX_PA03H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA04H_CAN1_TX) && ! defined(IGNORE_PIN_PA04)
    {&pin_PA04, 1, PIN_PA04, PINMUX_PA04H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA05H_CAN1_TX) && ! defined(IGNORE_PIN_PA05)
    {&pin_PA05, 1, PIN_PA05, PINMUX_PA05H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA06H_CAN1_TX) && ! defined(IGNORE_PIN_PA06)
    {&pin_PA06, 1, PIN_PA06, PINMUX_PA06H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA07H_CAN1_TX) && ! defined(IGNORE_PIN_PA07)
    {&pin_PA07, 1, PIN_PA07, PINMUX_PA07H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA08H_CAN1_TX) && ! defined(IGNORE_PIN_PA08)
    {&pin_PA08, 1, PIN_PA08, PINMUX_PA08H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA09H_CAN1_TX) && ! defined(IGNORE_PIN_PA09)
    {&pin_PA09, 1, PIN_PA09, PINMUX_PA09H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA10H_CAN1_TX) && ! defined(IGNORE_PIN_PA10)
    {&pin_PA10, 1, PIN_PA10, PINMUX_PA10H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA11H_CAN1_TX) && ! defined(IGNORE_PIN_PA11)
    {&pin_PA11, 1, PIN_PA11, PINMUX_PA11H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA12H_CAN1_TX) && ! defined(IGNORE_PIN_PA12)
    {&pin_PA12, 1, PIN_PA12, PINMUX_PA12H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA13H_CAN1_TX) && ! defined(IGNORE_PIN_PA13)
    {&pin_PA13, 1, PIN_PA13, PINMUX_PA13H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA14H_CAN1_TX) && ! defined(IGNORE_PIN_PA14)
    {&pin_PA14, 1, PIN_PA14, PINMUX_PA14H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA15H_CAN1_TX) && ! defined(IGNORE_PIN_PA15)
    {&pin_PA15, 1, PIN_PA15, PINMUX_PA15H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA16H_CAN1_TX) && ! defined(IGNORE_PIN_PA16)
    {&pin_PA16, 1, PIN_PA16, PINMUX_PA16H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA17H_CAN1_TX) && ! defined(IGNORE_PIN_PA17)
    {&pin_PA17, 1, PIN_PA17, PINMUX_PA17H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA18H_CAN1_TX) && ! defined(IGNORE_PIN_PA18)
    {&pin_PA18, 1, PIN_PA18, PINMUX_PA18H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA19H_CAN1_TX) && ! defined(IGNORE_PIN_PA19)
    {&pin_PA19, 1, PIN_PA19, PINMUX_PA19H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA20H_CAN1_TX) && ! defined(IGNORE_PIN_PA20)
    {&pin_PA20, 1, PIN_PA20, PINMUX_PA20H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA21H_CAN1_TX) && ! defined(IGNORE_PIN_PA21)
    {&pin_PA21, 1, PIN_PA21, PINMUX_PA21H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA22H_CAN1_TX) && ! defined(IGNORE_PIN_PA22)
    {&pin_PA22, 1, PIN_PA22, PINMUX_PA22H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA23H_CAN1_TX) && ! defined(IGNORE_PIN_PA23)
    {&pin_PA23, 1, PIN_PA23, PINMUX_PA23H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA24H_CAN1_TX) && ! defined(IGNORE_PIN_PA24)
    {&pin_PA24, 1, PIN_PA24, PINMUX_PA24H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA25H_CAN1_TX) && ! defined(IGNORE_PIN_PA25)
    {&pin_PA25, 1, PIN_PA25, PINMUX_PA25H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA26H_CAN1_TX) && ! defined(IGNORE_PIN_PA26)
    {&pin_PA26, 1, PIN_PA26, PINMUX_PA26H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA27H_CAN1_TX) && ! defined(IGNORE_PIN_PA27)
    {&pin_PA27, 1, PIN_PA27, PINMUX_PA27H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA28H_CAN1_TX) && ! defined(IGNORE_PIN_PA28)
    {&pin_PA28, 1, PIN_PA28, PINMUX_PA28H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA29H_CAN1_TX) && ! defined(IGNORE_PIN_PA29)
    {&pin_PA29, 1, PIN_PA29, PINMUX_PA29H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA30H_CAN1_TX) && ! defined(IGNORE_PIN_PA30)
    {&pin_PA30, 1, PIN_PA30, PINMUX_PA30H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA31H_CAN1_TX) && ! defined(IGNORE_PIN_PA31)
    {&pin_PA31, 1, PIN_PA31, PINMUX_PA31H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB00H_CAN1_TX) && ! defined(IGNORE_PIN_PB00)
    {&pin_PB00, 1, PIN_PB00, PINMUX_PB00H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB01H_CAN1_TX) && ! defined(IGNORE_PIN_PB01)
    {&pin_PB01, 1, PIN_PB01, PINMUX_PB01H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB02H_CAN1_TX) && ! defined(IGNORE_PIN_PB02)
    {&pin_PB02, 1, PIN_PB02, PINMUX_PB02H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB03H_CAN1_TX) && ! defined(IGNORE_PIN_PB03)
    {&pin_PB03, 1, PIN_PB03, PINMUX_PB03H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB04H_CAN1_TX) && ! defined(IGNORE_PIN_PB04)
    {&pin_PB04, 1, PIN_PB04, PINMUX_PB04H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB05H_CAN1_TX) && ! defined(IGNORE_PIN_PB05)
    {&pin_PB05, 1, PIN_PB05, PINMUX_PB05H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB06H_CAN1_TX) && ! defined(IGNORE_PIN_PB06)
    {&pin_PB06, 1, PIN_PB06, PINMUX_PB06H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB07H_CAN1_TX) && ! defined(IGNORE_PIN_PB07)
    {&pin_PB07, 1, PIN_PB07, PINMUX_PB07H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB08H_CAN1_TX) && ! defined(IGNORE_PIN_PB08)
    {&pin_PB08, 1, PIN_PB08, PINMUX_PB08H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB09H_CAN1_TX) && ! defined(IGNORE_PIN_PB09)
    {&pin_PB09, 1, PIN_PB09, PINMUX_PB09H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB10H_CAN1_TX) && ! defined(IGNORE_PIN_PB10)
    {&pin_PB10, 1, PIN_PB10, PINMUX_PB10H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB11H_CAN1_TX) && ! defined(IGNORE_PIN_PB11)
    {&pin_PB11, 1, PIN_PB11, PINMUX_PB11H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB12H_CAN1_TX) && ! defined(IGNORE_PIN_PB12)
    {&pin_PB12, 1, PIN_PB12, PINMUX_PB12H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB13H_CAN1_TX) && ! defined(IGNORE_PIN_PB13)
    {&pin_PB13, 1, PIN_PB13, PINMUX_PB13H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB14H_CAN1_TX) && ! defined(IGNORE_PIN_PB14)
    {&pin_PB14, 1, PIN_PB14, PINMUX_PB14H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB15H_CAN1_TX) && ! defined(IGNORE_PIN_PB15)
    {&pin_PB15, 1, PIN_PB15, PINMUX_PB15H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB16H_CAN1_TX) && ! defined(IGNORE_PIN_PB16)
    {&pin_PB16, 1, PIN_PB16, PINMUX_PB16H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB17H_CAN1_TX) && ! defined(IGNORE_PIN_PB17)
    {&pin_PB17, 1, PIN_PB17, PINMUX_PB17H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB18H_CAN1_TX) && ! defined(IGNORE_PIN_PB18)
    {&pin_PB18, 1, PIN_PB18, PINMUX_PB18H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB19H_CAN1_TX) && ! defined(IGNORE_PIN_PB19)
    {&pin_PB19, 1, PIN_PB19, PINMUX_PB19H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB20H_CAN1_TX) && ! defined(IGNORE_PIN_PB20)
    {&pin_PB20, 1, PIN_PB20, PINMUX_PB20H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB21H_CAN1_TX) && ! defined(IGNORE_PIN_PB21)
    {&pin_PB21, 1, PIN_PB21, PINMUX_PB21H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB22H_CAN1_TX) && ! defined(IGNORE_PIN_PB22)
    {&pin_PB22, 1, PIN_PB22, PINMUX_PB22H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB23H_CAN1_TX) && ! defined(IGNORE_PIN_PB23)
    {&pin_PB23, 1, PIN_PB23, PINMUX_PB23H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB24H_CAN1_TX) && ! defined(IGNORE_PIN_PB24)
    {&pin_PB24, 1, PIN_PB24, PINMUX_PB24H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB25H_CAN1_TX) && ! defined(IGNORE_PIN_PB25)
    {&pin_PB25, 1, PIN_PB25, PINMUX_PB25H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB26H_CAN1_TX) && ! defined(IGNORE_PIN_PB26)
    {&pin_PB26, 1, PIN_PB26, PINMUX_PB26H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB27H_CAN1_TX) && ! defined(IGNORE_PIN_PB27)
    {&pin_PB27, 1, PIN_PB27, PINMUX_PB27H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB28H_CAN1_TX) && ! defined(IGNORE_PIN_PB28)
    {&pin_PB28, 1, PIN_PB28, PINMUX_PB28H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB29H_CAN1_TX) && ! defined(IGNORE_PIN_PB29)
    {&pin_PB29, 1, PIN_PB29, PINMUX_PB29H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB30H_CAN1_TX) && ! defined(IGNORE_PIN_PB30)
    {&pin_PB30, 1, PIN_PB30, PINMUX_PB30H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB31H_CAN1_TX) && ! defined(IGNORE_PIN_PB31)
    {&pin_PB31, 1, PIN_PB31, PINMUX_PB31H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC00H_CAN1_TX) && ! defined(IGNORE_PIN_PC00)
    {&pin_PC00, 1, PIN_PC00, PINMUX_PC00H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC01H_CAN1_TX) && ! defined(IGNORE_PIN_PC01)
    {&pin_PC01, 1, PIN_PC01, PINMUX_PC01H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC02H_CAN1_TX) && ! defined(IGNORE_PIN_PC02)
    {&pin_PC02, 1, PIN_PC02, PINMUX_PC02H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC03H_CAN1_TX) && ! defined(IGNORE_PIN_PC03)
    {&pin_PC03, 1, PIN_PC03, PINMUX_PC03H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC04H_CAN1_TX) && ! defined(IGNORE_PIN_PC04)
    {&pin_PC04, 1, PIN_PC04, PINMUX_PC04H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC05H_CAN1_TX) && ! defined(IGNORE_PIN_PC05)
    {&pin_PC05, 1, PIN_PC05, PINMUX_PC05H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC06H_CAN1_TX) && ! defined(IGNORE_PIN_PC06)
    {&pin_PC06, 1, PIN_PC06, PINMUX_PC06H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC07H_CAN1_TX) && ! defined(IGNORE_PIN_PC07)
    {&pin_PC07, 1, PIN_PC07, PINMUX_PC07H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC08H_CAN1_TX) && ! defined(IGNORE_PIN_PC08)
    {&pin_PC08, 1, PIN_PC08, PINMUX_PC08H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC09H_CAN1_TX) && ! defined(IGNORE_PIN_PC09)
    {&pin_PC09, 1, PIN_PC09, PINMUX_PC09H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC10H_CAN1_TX) && ! defined(IGNORE_PIN_PC10)
    {&pin_PC10, 1, PIN_PC10, PINMUX_PC10H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC11H_CAN1_TX) && ! defined(IGNORE_PIN_PC11)
    {&pin_PC11, 1, PIN_PC11, PINMUX_PC11H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC12H_CAN1_TX) && ! defined(IGNORE_PIN_PC12)
    {&pin_PC12, 1, PIN_PC12, PINMUX_PC12H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC13H_CAN1_TX) && ! defined(IGNORE_PIN_PC13)
    {&pin_PC13, 1, PIN_PC13, PINMUX_PC13H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC14H_CAN1_TX) && ! defined(IGNORE_PIN_PC14)
    {&pin_PC14, 1, PIN_PC14, PINMUX_PC14H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC15H_CAN1_TX) && ! defined(IGNORE_PIN_PC15)
    {&pin_PC15, 1, PIN_PC15, PINMUX_PC15H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC16H_CAN1_TX) && ! defined(IGNORE_PIN_PC16)
    {&pin_PC16, 1, PIN_PC16, PINMUX_PC16H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC17H_CAN1_TX) && ! defined(IGNORE_PIN_PC17)
    {&pin_PC17, 1, PIN_PC17, PINMUX_PC17H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC18H_CAN1_TX) && ! defined(IGNORE_PIN_PC18)
    {&pin_PC18, 1, PIN_PC18, PINMUX_PC18H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC19H_CAN1_TX) && ! defined(IGNORE_PIN_PC19)
    {&pin_PC19, 1, PIN_PC19, PINMUX_PC19H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC20H_CAN1_TX) && ! defined(IGNORE_PIN_PC20)
    {&pin_PC20, 1, PIN_PC20, PINMUX_PC20H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC21H_CAN1_TX) && ! defined(IGNORE_PIN_PC21)
    {&pin_PC21, 1, PIN_PC21, PINMUX_PC21H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC22H_CAN1_TX) && ! defined(IGNORE_PIN_PC22)
    {&pin_PC22, 1, PIN_PC22, PINMUX_PC22H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC23H_CAN1_TX) && ! defined(IGNORE_PIN_PC23)
    {&pin_PC23, 1, PIN_PC23, PINMUX_PC23H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC24H_CAN1_TX) && ! defined(IGNORE_PIN_PC24)
    {&pin_PC24, 1, PIN_PC24, PINMUX_PC24H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC25H_CAN1_TX) && ! defined(IGNORE_PIN_PC25)
    {&pin_PC25, 1, PIN_PC25, PINMUX_PC25H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC26H_CAN1_TX) && ! defined(IGNORE_PIN_PC26)
    {&pin_PC26, 1, PIN_PC26, PINMUX_PC26H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC27H_CAN1_TX) && ! defined(IGNORE_PIN_PC27)
    {&pin_PC27, 1, PIN_PC27, PINMUX_PC27H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC28H_CAN1_TX) && ! defined(IGNORE_PIN_PC28)
    {&pin_PC28, 1, PIN_PC28, PINMUX_PC28H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC29H_CAN1_TX) && ! defined(IGNORE_PIN_PC29)
    {&pin_PC29, 1, PIN_PC29, PINMUX_PC29H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC30H_CAN1_TX) && ! defined(IGNORE_PIN_PC30)
    {&pin_PC30, 1, PIN_PC30, PINMUX_PC30H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC31H_CAN1_TX) && ! defined(IGNORE_PIN_PC31)
    {&pin_PC31, 1, PIN_PC31, PINMUX_PC31H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD00H_CAN1_TX) && ! defined(IGNORE_PIN_PD00)
    {&pin_PD00, 1, PIN_PD00, PINMUX_PD00H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD01H_CAN1_TX) && ! defined(IGNORE_PIN_PD01)
    {&pin_PD01, 1, PIN_PD01, PINMUX_PD01H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD02H_CAN1_TX) && ! defined(IGNORE_PIN_PD02)
    {&pin_PD02, 1, PIN_PD02, PINMUX_PD02H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD03H_CAN1_TX) && ! defined(IGNORE_PIN_PD03)
    {&pin_PD03, 1, PIN_PD03, PINMUX_PD03H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD04H_CAN1_TX) && ! defined(IGNORE_PIN_PD04)
    {&pin_PD04, 1, PIN_PD04, PINMUX_PD04H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD05H_CAN1_TX) && ! defined(IGNORE_PIN_PD05)
    {&pin_PD05, 1, PIN_PD05, PINMUX_PD05H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD06H_CAN1_TX) && ! defined(IGNORE_PIN_PD06)
    {&pin_PD06, 1, PIN_PD06, PINMUX_PD06H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD07H_CAN1_TX) && ! defined(IGNORE_PIN_PD07)
    {&pin_PD07, 1, PIN_PD07, PINMUX_PD07H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD08H_CAN1_TX) && ! defined(IGNORE_PIN_PD08)
    {&pin_PD08, 1, PIN_PD08, PINMUX_PD08H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD09H_CAN1_TX) && ! defined(IGNORE_PIN_PD09)
    {&pin_PD09, 1, PIN_PD09, PINMUX_PD09H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD10H_CAN1_TX) && ! defined(IGNORE_PIN_PD10)
    {&pin_PD10, 1, PIN_PD10, PINMUX_PD10H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD11H_CAN1_TX) && ! defined(IGNORE_PIN_PD11)
    {&pin_PD11, 1, PIN_PD11, PINMUX_PD11H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD12H_CAN1_TX) && ! defined(IGNORE_PIN_PD12)
    {&pin_PD12, 1, PIN_PD12, PINMUX_PD12H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD13H_CAN1_TX) && ! defined(IGNORE_PIN_PD13)
    {&pin_PD13, 1, PIN_PD13, PINMUX_PD13H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD14H_CAN1_TX) && ! defined(IGNORE_PIN_PD14)
    {&pin_PD14, 1, PIN_PD14, PINMUX_PD14H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD15H_CAN1_TX) && ! defined(IGNORE_PIN_PD15)
    {&pin_PD15, 1, PIN_PD15, PINMUX_PD15H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD16H_CAN1_TX) && ! defined(IGNORE_PIN_PD16)
    {&pin_PD16, 1, PIN_PD16, PINMUX_PD16H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD17H_CAN1_TX) && ! defined(IGNORE_PIN_PD17)
    {&pin_PD17, 1, PIN_PD17, PINMUX_PD17H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD18H_CAN1_TX) && ! defined(IGNORE_PIN_PD18)
    {&pin_PD18, 1, PIN_PD18, PINMUX_PD18H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD19H_CAN1_TX) && ! defined(IGNORE_PIN_PD19)
    {&pin_PD19, 1, PIN_PD19, PINMUX_PD19H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD20H_CAN1_TX) && ! defined(IGNORE_PIN_PD20)
    {&pin_PD20, 1, PIN_PD20, PINMUX_PD20H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD21H_CAN1_TX) && ! defined(IGNORE_PIN_PD21)
    {&pin_PD21, 1, PIN_PD21, PINMUX_PD21H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD22H_CAN1_TX) && ! defined(IGNORE_PIN_PD22)
    {&pin_PD22, 1, PIN_PD22, PINMUX_PD22H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD23H_CAN1_TX) && ! defined(IGNORE_PIN_PD23)
    {&pin_PD23, 1, PIN_PD23, PINMUX_PD23H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD24H_CAN1_TX) && ! defined(IGNORE_PIN_PD24)
    {&pin_PD24, 1, PIN_PD24, PINMUX_PD24H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD25H_CAN1_TX) && ! defined(IGNORE_PIN_PD25)
    {&pin_PD25, 1, PIN_PD25, PINMUX_PD25H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD26H_CAN1_TX) && ! defined(IGNORE_PIN_PD26)
    {&pin_PD26, 1, PIN_PD26, PINMUX_PD26H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD27H_CAN1_TX) && ! defined(IGNORE_PIN_PD27)
    {&pin_PD27, 1, PIN_PD27, PINMUX_PD27H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD28H_CAN1_TX) && ! defined(IGNORE_PIN_PD28)
    {&pin_PD28, 1, PIN_PD28, PINMUX_PD28H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD29H_CAN1_TX) && ! defined(IGNORE_PIN_PD29)
    {&pin_PD29, 1, PIN_PD29, PINMUX_PD29H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD30H_CAN1_TX) && ! defined(IGNORE_PIN_PD30)
    {&pin_PD30, 1, PIN_PD30, PINMUX_PD30H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD31H_CAN1_TX) && ! defined(IGNORE_PIN_PD31)
    {&pin_PD31, 1, PIN_PD31, PINMUX_PD31H_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA00I_CAN1_TX) && ! defined(IGNORE_PIN_PA00)
    {&pin_PA00, 1, PIN_PA00, PINMUX_PA00I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA01I_CAN1_TX) && ! defined(IGNORE_PIN_PA01)
    {&pin_PA01, 1, PIN_PA01, PINMUX_PA01I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA02I_CAN1_TX) && ! defined(IGNORE_PIN_PA02)
    {&pin_PA02, 1, PIN_PA02, PINMUX_PA02I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA03I_CAN1_TX) && ! defined(IGNORE_PIN_PA03)
    {&pin_PA03, 1, PIN_PA03, PINMUX_PA03I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA04I_CAN1_TX) && ! defined(IGNORE_PIN_PA04)
    {&pin_PA04, 1, PIN_PA04, PINMUX_PA04I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA05I_CAN1_TX) && ! defined(IGNORE_PIN_PA05)
    {&pin_PA05, 1, PIN_PA05, PINMUX_PA05I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA06I_CAN1_TX) && ! defined(IGNORE_PIN_PA06)
    {&pin_PA06, 1, PIN_PA06, PINMUX_PA06I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA07I_CAN1_TX) && ! defined(IGNORE_PIN_PA07)
    {&pin_PA07, 1, PIN_PA07, PINMUX_PA07I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA08I_CAN1_TX) && ! defined(IGNORE_PIN_PA08)
    {&pin_PA08, 1, PIN_PA08, PINMUX_PA08I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA09I_CAN1_TX) && ! defined(IGNORE_PIN_PA09)
    {&pin_PA09, 1, PIN_PA09, PINMUX_PA09I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA10I_CAN1_TX) && ! defined(IGNORE_PIN_PA10)
    {&pin_PA10, 1, PIN_PA10, PINMUX_PA10I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA11I_CAN1_TX) && ! defined(IGNORE_PIN_PA11)
    {&pin_PA11, 1, PIN_PA11, PINMUX_PA11I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA12I_CAN1_TX) && ! defined(IGNORE_PIN_PA12)
    {&pin_PA12, 1, PIN_PA12, PINMUX_PA12I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA13I_CAN1_TX) && ! defined(IGNORE_PIN_PA13)
    {&pin_PA13, 1, PIN_PA13, PINMUX_PA13I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA14I_CAN1_TX) && ! defined(IGNORE_PIN_PA14)
    {&pin_PA14, 1, PIN_PA14, PINMUX_PA14I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA15I_CAN1_TX) && ! defined(IGNORE_PIN_PA15)
    {&pin_PA15, 1, PIN_PA15, PINMUX_PA15I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA16I_CAN1_TX) && ! defined(IGNORE_PIN_PA16)
    {&pin_PA16, 1, PIN_PA16, PINMUX_PA16I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA17I_CAN1_TX) && ! defined(IGNORE_PIN_PA17)
    {&pin_PA17, 1, PIN_PA17, PINMUX_PA17I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA18I_CAN1_TX) && ! defined(IGNORE_PIN_PA18)
    {&pin_PA18, 1, PIN_PA18, PINMUX_PA18I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA19I_CAN1_TX) && ! defined(IGNORE_PIN_PA19)
    {&pin_PA19, 1, PIN_PA19, PINMUX_PA19I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA20I_CAN1_TX) && ! defined(IGNORE_PIN_PA20)
    {&pin_PA20, 1, PIN_PA20, PINMUX_PA20I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA21I_CAN1_TX) && ! defined(IGNORE_PIN_PA21)
    {&pin_PA21, 1, PIN_PA21, PINMUX_PA21I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA22I_CAN1_TX) && ! defined(IGNORE_PIN_PA22)
    {&pin_PA22, 1, PIN_PA22, PINMUX_PA22I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA23I_CAN1_TX) && ! defined(IGNORE_PIN_PA23)
    {&pin_PA23, 1, PIN_PA23, PINMUX_PA23I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA24I_CAN1_TX) && ! defined(IGNORE_PIN_PA24)
    {&pin_PA24, 1, PIN_PA24, PINMUX_PA24I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA25I_CAN1_TX) && ! defined(IGNORE_PIN_PA25)
    {&pin_PA25, 1, PIN_PA25, PINMUX_PA25I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA26I_CAN1_TX) && ! defined(IGNORE_PIN_PA26)
    {&pin_PA26, 1, PIN_PA26, PINMUX_PA26I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA27I_CAN1_TX) && ! defined(IGNORE_PIN_PA27)
    {&pin_PA27, 1, PIN_PA27, PINMUX_PA27I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA28I_CAN1_TX) && ! defined(IGNORE_PIN_PA28)
    {&pin_PA28, 1, PIN_PA28, PINMUX_PA28I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA29I_CAN1_TX) && ! defined(IGNORE_PIN_PA29)
    {&pin_PA29, 1, PIN_PA29, PINMUX_PA29I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA30I_CAN1_TX) && ! defined(IGNORE_PIN_PA30)
    {&pin_PA30, 1, PIN_PA30, PINMUX_PA30I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PA31I_CAN1_TX) && ! defined(IGNORE_PIN_PA31)
    {&pin_PA31, 1, PIN_PA31, PINMUX_PA31I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB00I_CAN1_TX) && ! defined(IGNORE_PIN_PB00)
    {&pin_PB00, 1, PIN_PB00, PINMUX_PB00I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB01I_CAN1_TX) && ! defined(IGNORE_PIN_PB01)
    {&pin_PB01, 1, PIN_PB01, PINMUX_PB01I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB02I_CAN1_TX) && ! defined(IGNORE_PIN_PB02)
    {&pin_PB02, 1, PIN_PB02, PINMUX_PB02I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB03I_CAN1_TX) && ! defined(IGNORE_PIN_PB03)
    {&pin_PB03, 1, PIN_PB03, PINMUX_PB03I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB04I_CAN1_TX) && ! defined(IGNORE_PIN_PB04)
    {&pin_PB04, 1, PIN_PB04, PINMUX_PB04I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB05I_CAN1_TX) && ! defined(IGNORE_PIN_PB05)
    {&pin_PB05, 1, PIN_PB05, PINMUX_PB05I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB06I_CAN1_TX) && ! defined(IGNORE_PIN_PB06)
    {&pin_PB06, 1, PIN_PB06, PINMUX_PB06I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB07I_CAN1_TX) && ! defined(IGNORE_PIN_PB07)
    {&pin_PB07, 1, PIN_PB07, PINMUX_PB07I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB08I_CAN1_TX) && ! defined(IGNORE_PIN_PB08)
    {&pin_PB08, 1, PIN_PB08, PINMUX_PB08I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB09I_CAN1_TX) && ! defined(IGNORE_PIN_PB09)
    {&pin_PB09, 1, PIN_PB09, PINMUX_PB09I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB10I_CAN1_TX) && ! defined(IGNORE_PIN_PB10)
    {&pin_PB10, 1, PIN_PB10, PINMUX_PB10I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB11I_CAN1_TX) && ! defined(IGNORE_PIN_PB11)
    {&pin_PB11, 1, PIN_PB11, PINMUX_PB11I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB12I_CAN1_TX) && ! defined(IGNORE_PIN_PB12)
    {&pin_PB12, 1, PIN_PB12, PINMUX_PB12I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB13I_CAN1_TX) && ! defined(IGNORE_PIN_PB13)
    {&pin_PB13, 1, PIN_PB13, PINMUX_PB13I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB14I_CAN1_TX) && ! defined(IGNORE_PIN_PB14)
    {&pin_PB14, 1, PIN_PB14, PINMUX_PB14I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB15I_CAN1_TX) && ! defined(IGNORE_PIN_PB15)
    {&pin_PB15, 1, PIN_PB15, PINMUX_PB15I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB16I_CAN1_TX) && ! defined(IGNORE_PIN_PB16)
    {&pin_PB16, 1, PIN_PB16, PINMUX_PB16I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB17I_CAN1_TX) && ! defined(IGNORE_PIN_PB17)
    {&pin_PB17, 1, PIN_PB17, PINMUX_PB17I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB18I_CAN1_TX) && ! defined(IGNORE_PIN_PB18)
    {&pin_PB18, 1, PIN_PB18, PINMUX_PB18I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB19I_CAN1_TX) && ! defined(IGNORE_PIN_PB19)
    {&pin_PB19, 1, PIN_PB19, PINMUX_PB19I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB20I_CAN1_TX) && ! defined(IGNORE_PIN_PB20)
    {&pin_PB20, 1, PIN_PB20, PINMUX_PB20I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB21I_CAN1_TX) && ! defined(IGNORE_PIN_PB21)
    {&pin_PB21, 1, PIN_PB21, PINMUX_PB21I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB22I_CAN1_TX) && ! defined(IGNORE_PIN_PB22)
    {&pin_PB22, 1, PIN_PB22, PINMUX_PB22I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB23I_CAN1_TX) && ! defined(IGNORE_PIN_PB23)
    {&pin_PB23, 1, PIN_PB23, PINMUX_PB23I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB24I_CAN1_TX) && ! defined(IGNORE_PIN_PB24)
    {&pin_PB24, 1, PIN_PB24, PINMUX_PB24I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB25I_CAN1_TX) && ! defined(IGNORE_PIN_PB25)
    {&pin_PB25, 1, PIN_PB25, PINMUX_PB25I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB26I_CAN1_TX) && ! defined(IGNORE_PIN_PB26)
    {&pin_PB26, 1, PIN_PB26, PINMUX_PB26I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB27I_CAN1_TX) && ! defined(IGNORE_PIN_PB27)
    {&pin_PB27, 1, PIN_PB27, PINMUX_PB27I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB28I_CAN1_TX) && ! defined(IGNORE_PIN_PB28)
    {&pin_PB28, 1, PIN_PB28, PINMUX_PB28I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB29I_CAN1_TX) && ! defined(IGNORE_PIN_PB29)
    {&pin_PB29, 1, PIN_PB29, PINMUX_PB29I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB30I_CAN1_TX) && ! defined(IGNORE_PIN_PB30)
    {&pin_PB30, 1, PIN_PB30, PINMUX_PB30I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PB31I_CAN1_TX) && ! defined(IGNORE_PIN_PB31)
    {&pin_PB31, 1, PIN_PB31, PINMUX_PB31I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC00I_CAN1_TX) && ! defined(IGNORE_PIN_PC00)
    {&pin_PC00, 1, PIN_PC00, PINMUX_PC00I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC01I_CAN1_TX) && ! defined(IGNORE_PIN_PC01)
    {&pin_PC01, 1, PIN_PC01, PINMUX_PC01I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC02I_CAN1_TX) && ! defined(IGNORE_PIN_PC02)
    {&pin_PC02, 1, PIN_PC02, PINMUX_PC02I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC03I_CAN1_TX) && ! defined(IGNORE_PIN_PC03)
    {&pin_PC03, 1, PIN_PC03, PINMUX_PC03I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC04I_CAN1_TX) && ! defined(IGNORE_PIN_PC04)
    {&pin_PC04, 1, PIN_PC04, PINMUX_PC04I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC05I_CAN1_TX) && ! defined(IGNORE_PIN_PC05)
    {&pin_PC05, 1, PIN_PC05, PINMUX_PC05I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC06I_CAN1_TX) && ! defined(IGNORE_PIN_PC06)
    {&pin_PC06, 1, PIN_PC06, PINMUX_PC06I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC07I_CAN1_TX) && ! defined(IGNORE_PIN_PC07)
    {&pin_PC07, 1, PIN_PC07, PINMUX_PC07I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC08I_CAN1_TX) && ! defined(IGNORE_PIN_PC08)
    {&pin_PC08, 1, PIN_PC08, PINMUX_PC08I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC09I_CAN1_TX) && ! defined(IGNORE_PIN_PC09)
    {&pin_PC09, 1, PIN_PC09, PINMUX_PC09I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC10I_CAN1_TX) && ! defined(IGNORE_PIN_PC10)
    {&pin_PC10, 1, PIN_PC10, PINMUX_PC10I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC11I_CAN1_TX) && ! defined(IGNORE_PIN_PC11)
    {&pin_PC11, 1, PIN_PC11, PINMUX_PC11I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC12I_CAN1_TX) && ! defined(IGNORE_PIN_PC12)
    {&pin_PC12, 1, PIN_PC12, PINMUX_PC12I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC13I_CAN1_TX) && ! defined(IGNORE_PIN_PC13)
    {&pin_PC13, 1, PIN_PC13, PINMUX_PC13I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC14I_CAN1_TX) && ! defined(IGNORE_PIN_PC14)
    {&pin_PC14, 1, PIN_PC14, PINMUX_PC14I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC15I_CAN1_TX) && ! defined(IGNORE_PIN_PC15)
    {&pin_PC15, 1, PIN_PC15, PINMUX_PC15I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC16I_CAN1_TX) && ! defined(IGNORE_PIN_PC16)
    {&pin_PC16, 1, PIN_PC16, PINMUX_PC16I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC17I_CAN1_TX) && ! defined(IGNORE_PIN_PC17)
    {&pin_PC17, 1, PIN_PC17, PINMUX_PC17I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC18I_CAN1_TX) && ! defined(IGNORE_PIN_PC18)
    {&pin_PC18, 1, PIN_PC18, PINMUX_PC18I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC19I_CAN1_TX) && ! defined(IGNORE_PIN_PC19)
    {&pin_PC19, 1, PIN_PC19, PINMUX_PC19I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC20I_CAN1_TX) && ! defined(IGNORE_PIN_PC20)
    {&pin_PC20, 1, PIN_PC20, PINMUX_PC20I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC21I_CAN1_TX) && ! defined(IGNORE_PIN_PC21)
    {&pin_PC21, 1, PIN_PC21, PINMUX_PC21I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC22I_CAN1_TX) && ! defined(IGNORE_PIN_PC22)
    {&pin_PC22, 1, PIN_PC22, PINMUX_PC22I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC23I_CAN1_TX) && ! defined(IGNORE_PIN_PC23)
    {&pin_PC23, 1, PIN_PC23, PINMUX_PC23I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC24I_CAN1_TX) && ! defined(IGNORE_PIN_PC24)
    {&pin_PC24, 1, PIN_PC24, PINMUX_PC24I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC25I_CAN1_TX) && ! defined(IGNORE_PIN_PC25)
    {&pin_PC25, 1, PIN_PC25, PINMUX_PC25I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC26I_CAN1_TX) && ! defined(IGNORE_PIN_PC26)
    {&pin_PC26, 1, PIN_PC26, PINMUX_PC26I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC27I_CAN1_TX) && ! defined(IGNORE_PIN_PC27)
    {&pin_PC27, 1, PIN_PC27, PINMUX_PC27I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC28I_CAN1_TX) && ! defined(IGNORE_PIN_PC28)
    {&pin_PC28, 1, PIN_PC28, PINMUX_PC28I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC29I_CAN1_TX) && ! defined(IGNORE_PIN_PC29)
    {&pin_PC29, 1, PIN_PC29, PINMUX_PC29I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC30I_CAN1_TX) && ! defined(IGNORE_PIN_PC30)
    {&pin_PC30, 1, PIN_PC30, PINMUX_PC30I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PC31I_CAN1_TX) && ! defined(IGNORE_PIN_PC31)
    {&pin_PC31, 1, PIN_PC31, PINMUX_PC31I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD00I_CAN1_TX) && ! defined(IGNORE_PIN_PD00)
    {&pin_PD00, 1, PIN_PD00, PINMUX_PD00I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD01I_CAN1_TX) && ! defined(IGNORE_PIN_PD01)
    {&pin_PD01, 1, PIN_PD01, PINMUX_PD01I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD02I_CAN1_TX) && ! defined(IGNORE_PIN_PD02)
    {&pin_PD02, 1, PIN_PD02, PINMUX_PD02I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD03I_CAN1_TX) && ! defined(IGNORE_PIN_PD03)
    {&pin_PD03, 1, PIN_PD03, PINMUX_PD03I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD04I_CAN1_TX) && ! defined(IGNORE_PIN_PD04)
    {&pin_PD04, 1, PIN_PD04, PINMUX_PD04I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD05I_CAN1_TX) && ! defined(IGNORE_PIN_PD05)
    {&pin_PD05, 1, PIN_PD05, PINMUX_PD05I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD06I_CAN1_TX) && ! defined(IGNORE_PIN_PD06)
    {&pin_PD06, 1, PIN_PD06, PINMUX_PD06I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD07I_CAN1_TX) && ! defined(IGNORE_PIN_PD07)
    {&pin_PD07, 1, PIN_PD07, PINMUX_PD07I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD08I_CAN1_TX) && ! defined(IGNORE_PIN_PD08)
    {&pin_PD08, 1, PIN_PD08, PINMUX_PD08I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD09I_CAN1_TX) && ! defined(IGNORE_PIN_PD09)
    {&pin_PD09, 1, PIN_PD09, PINMUX_PD09I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD10I_CAN1_TX) && ! defined(IGNORE_PIN_PD10)
    {&pin_PD10, 1, PIN_PD10, PINMUX_PD10I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD11I_CAN1_TX) && ! defined(IGNORE_PIN_PD11)
    {&pin_PD11, 1, PIN_PD11, PINMUX_PD11I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD12I_CAN1_TX) && ! defined(IGNORE_PIN_PD12)
    {&pin_PD12, 1, PIN_PD12, PINMUX_PD12I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD13I_CAN1_TX) && ! defined(IGNORE_PIN_PD13)
    {&pin_PD13, 1, PIN_PD13, PINMUX_PD13I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD14I_CAN1_TX) && ! defined(IGNORE_PIN_PD14)
    {&pin_PD14, 1, PIN_PD14, PINMUX_PD14I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD15I_CAN1_TX) && ! defined(IGNORE_PIN_PD15)
    {&pin_PD15, 1, PIN_PD15, PINMUX_PD15I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD16I_CAN1_TX) && ! defined(IGNORE_PIN_PD16)
    {&pin_PD16, 1, PIN_PD16, PINMUX_PD16I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD17I_CAN1_TX) && ! defined(IGNORE_PIN_PD17)
    {&pin_PD17, 1, PIN_PD17, PINMUX_PD17I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD18I_CAN1_TX) && ! defined(IGNORE_PIN_PD18)
    {&pin_PD18, 1, PIN_PD18, PINMUX_PD18I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD19I_CAN1_TX) && ! defined(IGNORE_PIN_PD19)
    {&pin_PD19, 1, PIN_PD19, PINMUX_PD19I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD20I_CAN1_TX) && ! defined(IGNORE_PIN_PD20)
    {&pin_PD20, 1, PIN_PD20, PINMUX_PD20I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD21I_CAN1_TX) && ! defined(IGNORE_PIN_PD21)
    {&pin_PD21, 1, PIN_PD21, PINMUX_PD21I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD22I_CAN1_TX) && ! defined(IGNORE_PIN_PD22)
    {&pin_PD22, 1, PIN_PD22, PINMUX_PD22I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD23I_CAN1_TX) && ! defined(IGNORE_PIN_PD23)
    {&pin_PD23, 1, PIN_PD23, PINMUX_PD23I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD24I_CAN1_TX) && ! defined(IGNORE_PIN_PD24)
    {&pin_PD24, 1, PIN_PD24, PINMUX_PD24I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD25I_CAN1_TX) && ! defined(IGNORE_PIN_PD25)
    {&pin_PD25, 1, PIN_PD25, PINMUX_PD25I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD26I_CAN1_TX) && ! defined(IGNORE_PIN_PD26)
    {&pin_PD26, 1, PIN_PD26, PINMUX_PD26I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD27I_CAN1_TX) && ! defined(IGNORE_PIN_PD27)
    {&pin_PD27, 1, PIN_PD27, PINMUX_PD27I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD28I_CAN1_TX) && ! defined(IGNORE_PIN_PD28)
    {&pin_PD28, 1, PIN_PD28, PINMUX_PD28I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD29I_CAN1_TX) && ! defined(IGNORE_PIN_PD29)
    {&pin_PD29, 1, PIN_PD29, PINMUX_PD29I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD30I_CAN1_TX) && ! defined(IGNORE_PIN_PD30)
    {&pin_PD30, 1, PIN_PD30, PINMUX_PD30I_CAN1_TX & 0xffff},
#endif
#if defined(PINMUX_PD31I_CAN1_TX) && ! defined(IGNORE_PIN_PD31)
    {&pin_PD31, 1, PIN_PD31, PINMUX_PD31I_CAN1_TX & 0xffff},
#endif
{NULL, 0, 0}
};

