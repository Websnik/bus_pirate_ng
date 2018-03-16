

// development test platform
#define BP_PLATFORM		"BPNG v1.0 feb 2018"

// SPI hardware (HW-SPI)
#define BP_SPI			SPI2
#define BP_SPI_CLK		RCC_SPI2
#define BP_SPI_MISO_PORT	GPIOB
#define BP_SPI_MOSI_PORT	GPIOB
#define BP_SPI_CS_PORT		GPIOB
#define BP_SPI_CLK_PORT		GPIOB
#define BP_SPI_MISO_PIN		GPIO14
#define BP_SPI_MOSI_PIN		GPIO15
#define BP_SPI_CS_PIN		GPIO12
#define BP_SPI_CLK_PIN		GPIO13

// AUX/PWM/freq counter
#define BP_AUX_PORT		GPIOB
#define BP_AUX_PIN		GPIO0

#define BP_PWM_CLOCK		RCC_TIM3
#define BP_PWM_PORT		GPIOB
#define BP_PWM_PIN		GPIO0
#define BP_PWM_TIMER		TIM3
#define BP_PWM_CHAN		TIM_OC3
#define BP_PWM_CHANCHAN		3

#define BP_FREQ_PORT		GPIOD
#define BP_FREQ_PIN		GPIO2
#define BP_FREQ_TIMER		TIM3
#define BP_FREQ_CLK		RCC_TIM3
#define BP_FREQ_NVIC		NVIC_TIM3_IRQ

// ADC's
#define BP_ADC			ADC1
#define BP_ADC_CLK		RCC_ADC1
#define BP_ADC_CHAN		9
#define BP_ADC_PORT		GPIOB
#define BP_ADC_PIN		GPIO1
#define BP_3V3_CHAN		11
#define BP_3V3_PORT		GPIOC
#define BP_3V3_PIN		GPIO1
#define BP_5V0_CHAN		12
#define BP_5V0_PORT		GPIOC
#define BP_5V0_PIN		GPIO2
#define BP_VPU_CHAN		14		// vpu fed into resistors
#define BP_VPU_PORT		GPIOC
#define BP_VPU_PIN		GPIO4
#define BP_VSUP_CHAN		10
#define BP_VSUP_PORT		GPIOC
#define BP_VSUP_PIN		GPIO0
#define BP_VEXT_CHAN		13		// voltage on Vpu pin
#define BP_VEXT_PORT		GPIOC
#define BP_VEXT_PIN		GPIO3


// debug USART
#define BP_DEBUG_TX_PORT	GPIOA
#define BP_DEBUG_TX_PIN		GPIO9
#define BP_DEBUG_USART		USART1
#define BP_DEBUG_USART_CLK	RCC_USART1

// regular USART (HW-USART)
#define BP_USART_TX_PORT	GPIOB
#define BP_USART_RX_PORT	GPIOB
#define BP_USART_TX_PIN		GPIO10
#define BP_USART_RX_PIN		GPIO11
#define BP_USART_CLK		RCC_USART3
#define BP_USART		USART3

// hw-i2c
#define BP_I2C			I2C1
#define BP_I2C_CLK		RCC_I2C1
#define BP_I2C_SDA_PORT		GPIOB
#define BP_I2C_CLK_PORT		GPIOB
#define BP_I2C_SDA_PIN		GPIO7
#define BP_I2C_CLK_PIN		GPIO6

// logic analyzer
#define BP_LA_BUFFSIZE		2048

#define BP_LA_SRAM_CLK_PORT	GPIOA
#define BP_LA_SRAM_CLK_PIN	GPIO8
#define BP_LA_SRAM_CS_PORT	GPIOC
#define BP_LA_SRAM_CS_PIN	GPIO13

#define BP_LA_LATCH_PORT	GPIOC
#define BP_LA_LATCH_PIN		GPIO7

#define BP_LA_CHAN1_PORT	GPIOA
#define BP_LA_CHAN1_PIN		GPIO0
#define BP_LA_CHAN2_PORT	GPIOA
#define BP_LA_CHAN2_PIN		GPIO1
#define BP_LA_CHAN3_PORT	GPIOA
#define BP_LA_CHAN3_PIN		GPIO2
#define BP_LA_CHAN4_PORT	GPIOA
#define BP_LA_CHAN4_PIN		GPIO3
#define BP_LA_CHAN5_PORT	GPIOA
#define BP_LA_CHAN5_PIN		GPIO4
#define BP_LA_CHAN6_PORT	GPIOA
#define BP_LA_CHAN6_PIN		GPIO5
#define BP_LA_CHAN7_PORT	GPIOA
#define BP_LA_CHAN7_PIN		GPIO6
#define BP_LA_CHAN8_PORT	GPIOA
#define BP_LA_CHAN8_PIN		GPIO7

#if(0)

#define BP_SRAM1_MOSI_PORT BP_LA_CHAN1_PORT
#define BP_SRAM1_MOSI_PIN BP_LA_CHAN1_PIN
#define BP_SRAM1_MISO_PORT BP_LA_CHAN2_PORT
#define BP_SRAM1_MISO_PIN BP_LA_CHAN2_PIN

#define BP_SRAM1_SIO0_PORT BP_LA_CHAN1_PORT
#define BP_SRAM1_SIO0_PIN BP_LA_CHAN1_PIN
#define BP_SRAM1_SIO1_PORT BP_LA_CHAN2_PORT
#define BP_SRAM1_SIO1_PIN BP_LA_CHAN2_PIN
#define BP_SRAM1_SIO2_PORT BP_LA_CHAN3_PORT
#define BP_SRAM1_SIO2_PIN BP_LA_CHAN3_PIN
#define BP_SRAM1_SIO3_PORT BP_LA_CHAN4_PORT
#define BP_SRAM1_SIO3_PIN BP_LA_CHAN4_PIN

#define BP_SRAM2_MOSI_PORT BP_LA_CHAN5_PORT
#define BP_SRAM2_MOSI_PIN BP_LA_CHAN5_PIN
#define BP_SRAM2_MISO_PORT BP_LA_CHAN6_PORT
#define BP_SRAM2_MISO_PIN BP_LA_CHAN6_PIN

#define BP_SRAM2_SIO0_PORT BP_LA_CHAN5_PORT
#define BP_SRAM2_SIO0_PIN BP_LA_CHAN5_PIN
#define BP_SRAM2_SIO1_PORT BP_LA_CHAN6_PORT
#define BP_SRAM2_SIO1_PIN BP_LA_CHAN6_PIN
#define BP_SRAM2_SIO2_PORT BP_LA_CHAN7_PORT
#define BP_SRAM2_SIO2_PIN BP_LA_CHAN7_PIN
#define BP_SRAM2_SIO3_PORT BP_LA_CHAN8_PORT
#define BP_SRAM2_SIO3_PIN BP_LA_CHAN8_PIN
#endif

#define BP_LA_TIM_CLOCK		RCC_TIM1
#define BP_LA_TIMER		TIM1
#define BP_LA_TIM_CHAN		TIM_OC1
#define BP_LA_TIM_NVIC		NVIC_TIM1_CC_IRQ

// SW 3wire (SW3W)
#define BP_SW3W_MISO_PORT	GPIOB
#define BP_SW3W_MOSI_PORT	GPIOB
#define BP_SW3W_CS_PORT		GPIOB
#define BP_SW3W_CLK_PORT	GPIOB
#define BP_SW3W_MISO_PIN	GPIO14
#define BP_SW3W_MOSI_PIN	GPIO15
#define BP_SW3W_CS_PIN		GPIO12
#define BP_SW3W_CLK_PIN		GPIO13

// SW 2WIRE (SW2W)
#define BP_SW2W_SDA_PORT	GPIOB
#define BP_SW2W_CLK_PORT	GPIOB
#define BP_SW2W_SDA_PIN		GPIO7
#define BP_SW2W_CLK_PIN		GPIO6

// voltage regulators and pullupvoltages
#define BP_PSUEN_PORT		GPIOB
#define BP_PSUEN_PIN		GPIO9
#define BP_VPUEN_PORT		GPIOC
#define BP_VPUEN_PIN		GPIO6
#define BP_VPU33EN_PORT		GPIOC		// TODO more descriptive name
#define BP_VPU33EN_PIN		GPIO14		// TODO more descriptive name
#define BP_VPU50EN_PORT		GPIOC		// TODO more descriptive name
#define BP_VPU50EN_PIN		GPIO15		// TODO more descriptive name

// LED
#define BP_USB_LED_PORT		GPIOC
#define BP_USB_LED_PIN		GPIO9
#define BP_MODE_LED_PORT	GPIOC
#define BP_MODE_LED_PIN		GPIO8

// USB PULLUP
//#define BP_CONTROLS_PU	
//#define BP_USB_PULLUP_PORT	GPIOC
//#define BP_USB_PULLUP_PIN	GPIO10



