################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Graph/SpecialGraphs/10459TheTreeRoot/10459TheTreeRoot.cpp 

OBJS += \
./Graph/SpecialGraphs/10459TheTreeRoot/10459TheTreeRoot.o 

CPP_DEPS += \
./Graph/SpecialGraphs/10459TheTreeRoot/10459TheTreeRoot.d 


# Each subdirectory must supply rules for building sources it contributes
Graph/SpecialGraphs/10459TheTreeRoot/%.o: ../Graph/SpecialGraphs/10459TheTreeRoot/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


