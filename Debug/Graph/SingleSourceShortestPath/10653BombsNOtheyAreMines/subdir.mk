################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Graph/SingleSourceShortestPath/10653BombsNOtheyAreMines/10653BombsNOtheyAreMines.cpp 

OBJS += \
./Graph/SingleSourceShortestPath/10653BombsNOtheyAreMines/10653BombsNOtheyAreMines.o 

CPP_DEPS += \
./Graph/SingleSourceShortestPath/10653BombsNOtheyAreMines/10653BombsNOtheyAreMines.d 


# Each subdirectory must supply rules for building sources it contributes
Graph/SingleSourceShortestPath/10653BombsNOtheyAreMines/%.o: ../Graph/SingleSourceShortestPath/10653BombsNOtheyAreMines/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


