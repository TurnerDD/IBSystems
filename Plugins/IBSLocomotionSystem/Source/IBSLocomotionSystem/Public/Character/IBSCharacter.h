// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularCharacter.h"
#include "IBSCharacter.generated.h"


class AActor;
class AController;
class AIBSPlayerController;
class APlayerState;
class FLifetimeProperty;
class IRepChangedPropertyTracker;
class UAbilitySystemComponent;
class UInputComponent;
class UObject;
struct FFrame;
struct FGameplayTag;
struct FGameplayTagContainer;

/**
 * 
 */
UCLASS()
class IBSLOCOMOTIONSYSTEM_API AIBSCharacter : public AModularCharacter
{
	GENERATED_BODY()
	
	UPROPERTY()
	uint8 AccelXYRadians = 0;	// Direction of XY accel component, quantized to represent [0, 2*pi]

	UPROPERTY()
	uint8 AccelXYMagnitude = 0;	//Accel rate of XY component, quantized to represent [0, MaxAcceleration]

	UPROPERTY()
	int8 AccelZ = 0;	// Raw Z accel rate component, quantized to represent [-MaxAcceleration, MaxAcceleration]
};
