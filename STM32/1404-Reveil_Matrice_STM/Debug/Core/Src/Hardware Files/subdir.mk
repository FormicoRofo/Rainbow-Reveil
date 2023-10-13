################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Hardware\ Files/stm32f0xx_hal_msp.c \
../Core/Src/Hardware\ Files/stm32f0xx_it.c \
../Core/Src/Hardware\ Files/syscalls.c \
../Core/Src/Hardware\ Files/sysmem.c \
../Core/Src/Hardware\ Files/system_stm32f0xx.c 

OBJS += \
./Core/Src/Hardware\ Files/stm32f0xx_hal_msp.o \
./Core/Src/Hardware\ Files/stm32f0xx_it.o \
./Core/Src/Hardware\ Files/syscalls.o \
./Core/Src/Hardware\ Files/sysmem.o \
./Core/Src/Hardware\ Files/system_stm32f0xx.o 

C_DEPS += \
./Core/Src/Hardware\ Files/stm32f0xx_hal_msp.d \
./Core/Src/Hardware\ Files/stm32f0xx_it.d \
./Core/Src/Hardware\ Files/syscalls.d \
./Core/Src/Hardware\ Files/sysmem.d \
./Core/Src/Hardware\ Files/system_stm32f0xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Hardware\ Files/stm32f0xx_hal_msp.o: ../Core/Src/Hardware\ Files/stm32f0xx_hal_msp.c Core/Src/Hardware\ Files/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F042x6 -c -I../Core/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Core/Src/Hardware Files/stm32f0xx_hal_msp.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Core/Src/Hardware\ Files/stm32f0xx_it.o: ../Core/Src/Hardware\ Files/stm32f0xx_it.c Core/Src/Hardware\ Files/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F042x6 -c -I../Core/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Core/Src/Hardware Files/stm32f0xx_it.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Core/Src/Hardware\ Files/syscalls.o: ../Core/Src/Hardware\ Files/syscalls.c Core/Src/Hardware\ Files/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F042x6 -c -I../Core/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Core/Src/Hardware Files/syscalls.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Core/Src/Hardware\ Files/sysmem.o: ../Core/Src/Hardware\ Files/sysmem.c Core/Src/Hardware\ Files/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F042x6 -c -I../Core/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Core/Src/Hardware Files/sysmem.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Core/Src/Hardware\ Files/system_stm32f0xx.o: ../Core/Src/Hardware\ Files/system_stm32f0xx.c Core/Src/Hardware\ Files/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F042x6 -c -I../Core/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Core/Src/Hardware Files/system_stm32f0xx.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Hardware-20-Files

clean-Core-2f-Src-2f-Hardware-20-Files:
	-$(RM) ./Core/Src/Hardware\ Files/stm32f0xx_hal_msp.cyclo ./Core/Src/Hardware\ Files/stm32f0xx_hal_msp.d ./Core/Src/Hardware\ Files/stm32f0xx_hal_msp.o ./Core/Src/Hardware\ Files/stm32f0xx_hal_msp.su ./Core/Src/Hardware\ Files/stm32f0xx_it.cyclo ./Core/Src/Hardware\ Files/stm32f0xx_it.d ./Core/Src/Hardware\ Files/stm32f0xx_it.o ./Core/Src/Hardware\ Files/stm32f0xx_it.su ./Core/Src/Hardware\ Files/syscalls.cyclo ./Core/Src/Hardware\ Files/syscalls.d ./Core/Src/Hardware\ Files/syscalls.o ./Core/Src/Hardware\ Files/syscalls.su ./Core/Src/Hardware\ Files/sysmem.cyclo ./Core/Src/Hardware\ Files/sysmem.d ./Core/Src/Hardware\ Files/sysmem.o ./Core/Src/Hardware\ Files/sysmem.su ./Core/Src/Hardware\ Files/system_stm32f0xx.cyclo ./Core/Src/Hardware\ Files/system_stm32f0xx.d ./Core/Src/Hardware\ Files/system_stm32f0xx.o ./Core/Src/Hardware\ Files/system_stm32f0xx.su

.PHONY: clean-Core-2f-Src-2f-Hardware-20-Files

