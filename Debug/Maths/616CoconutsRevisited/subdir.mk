################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Maths/616CoconutsRevisited/616CoconutsRevisited.cpp 

OBJS += \
./Maths/616CoconutsRevisited/616CoconutsRevisited.o 

CPP_DEPS += \
./Maths/616CoconutsRevisited/616CoconutsRevisited.d 


# Each subdirectory must supply rules for building sources it contributes
Maths/616CoconutsRevisited/%.o: ../Maths/616CoconutsRevisited/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


