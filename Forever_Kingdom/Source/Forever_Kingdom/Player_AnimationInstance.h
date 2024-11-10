// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Player_AnimationInstance.generated.h"

/**
 * 
 */
UCLASS()
class FOREVER_KINGDOM_API UPlayer_AnimationInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimState")
	bool isAttacking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimState")
	bool isRunning;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimState", meta =(AllowPrivateAccess))
	bool isBlocking;
	
};
