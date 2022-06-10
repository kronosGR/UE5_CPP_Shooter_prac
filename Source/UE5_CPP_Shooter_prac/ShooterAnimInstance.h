// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShooterCharacter.h"
#include "Animation/AnimInstance.h"
#include "ShooterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE5_CPP_SHOOTER_PRAC_API UShooterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	// begin play
	virtual void NativeInitializeAnimation() override;
	
	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTime);

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Movement, meta=(AllowPrivateAccess="true"))
	AShooterCharacter* ShooterCharacter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Movement, meta=(AllowPrivateAccess="true"))
	float Speed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Movement, meta=(AllowPrivateAccess="true"))
	bool bIsInAir;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Movement, meta=(AllowPrivateAccess="true"))
	bool bIsAccelerating;
};
