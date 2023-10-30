################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Library/Src/canvas.c \
../Core/Library/Src/color.c \
../Core/Library/Src/image_data.c \
../Core/Library/Src/ws2812.c 

OBJS += \
./Core/Library/Src/canvas.o \
./Core/Library/Src/color.o \
./Core/Library/Src/image_data.o \
./Core/Library/Src/ws2812.o 

C_DEPS += \
./Core/Library/Src/canvas.d \
./Core/Library/Src/color.d \
./Core/Library/Src/image_data.d \
./Core/Library/Src/ws2812.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Library/Src/%.o Core/Library/Src/%.su Core/Library/Src/%.cyclo: ../Core/Library/Src/%.c Core/Library/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F042x6 -c -I"C:/Users/alyvasseur/Education Vaud/ETML_FLO-22-24_Teams - Vasseur/MicroControleur/Rainbow-Reveil/STM32/1404-Reveil_Matrice_STM/Core/Library/Inc" -I"C:/Users/alyvasseur/Education Vaud/ETML_FLO-22-24_Teams - Vasseur/MicroControleur/Rainbow-Reveil/STM32/1404-Reveil_Matrice_STM/Core/Inc" -I"C:/Users/alyvasseur/Education Vaud/ETML_FLO-22-24_Teams - Vasseur/MicroControleur/Rainbow-Reveil/STM32/1404-Reveil_Matrice_STM/Drivers/STM32F0xx_HAL_Driver/Inc" -I"C:/Users/alyvasseur/Education Vaud/ETML_FLO-22-24_Teams - Vasseur/MicroControleur/Rainbow-Reveil/STM32/1404-Reveil_Matrice_STM/Drivers/STM32F0xx_HAL_Driver/Inc/Legacy" -I"C:/Users/alyvasseur/Education Vaud/ETML_FLO-22-24_Teams - Vasseur/MicroControleur/Rainbow-Reveil/STM32/1404-Reveil_Matrice_STM/Drivers/CMSIS/Include" -I"C:/Users/alyvasseur/Education Vaud/ETML_FLO-22-24_Teams - Vasseur/MicroControleur/Rainbow-Reveil/STM32/1404-Reveil_Matrice_STM/Drivers/CMSIS/Device/ST/STM32F0xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Library-2f-Src

clean-Core-2f-Library-2f-Src:
	-$(RM) ./Core/Library/Src/canvas.cyclo ./Core/Library/Src/canvas.d ./Core/Library/Src/canvas.o ./Core/Library/Src/canvas.su ./Core/Library/Src/color.cyclo ./Core/Library/Src/color.d ./Core/Library/Src/color.o ./Core/Library/Src/color.su ./Core/Library/Src/image_data.cyclo ./Core/Library/Src/image_data.d ./Core/Library/Src/image_data.o ./Core/Library/Src/image_data.su ./Core/Library/Src/ws2812.cyclo ./Core/Library/Src/ws2812.d ./Core/Library/Src/ws2812.o ./Core/Library/Src/ws2812.su

.PHONY: clean-Core-2f-Library-2f-Src

