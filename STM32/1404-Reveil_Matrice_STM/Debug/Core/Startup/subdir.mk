################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32f042k6tx.s 

OBJS += \
./Core/Startup/startup_stm32f042k6tx.o 

S_DEPS += \
./Core/Startup/startup_stm32f042k6tx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/%.o: ../Core/Startup/%.s Core/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m0 -g3 -DDEBUG -c -I"C:/Users/alyvasseur/Education Vaud/ETML_FLO-22-24_Teams - Vasseur/MicroControleur/affichage reveil/STM32/1404-Reveil_Matrice_STM/Core/Library" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

clean: clean-Core-2f-Startup

clean-Core-2f-Startup:
	-$(RM) ./Core/Startup/startup_stm32f042k6tx.d ./Core/Startup/startup_stm32f042k6tx.o

.PHONY: clean-Core-2f-Startup

