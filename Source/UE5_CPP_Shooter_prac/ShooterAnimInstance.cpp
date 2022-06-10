// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAnimInstance.h"

#include "GameFramework/CharacterMovementComponent.h"

void UShooterAnimInstance::NativeInitializeAnimation()
{
	// Super::NativeInitializeAnimation();
	
	ShooterCharacter = Cast<AShooterCharacter>(TryGetPawnOwner());
}

void UShooterAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if (ShooterCharacter==nullptr)
	{
		ShooterCharacter = Cast<AShooterCharacter>(TryGetPawnOwner());		
	}
	if (ShooterCharacter)
	{
		// get the character's speed
		FVector Velocity{ShooterCharacter->GetVelocity()};
		Velocity.Z = 0;
		Speed = Velocity.Size();

		// is in the air
		bIsInAir = ShooterCharacter->GetCharacterMovement()->IsFalling();

		// is accelerating
		if(ShooterCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f)
		{
			bIsAccelerating = true;
		} else
		{
			bIsAccelerating = false;
		}
	}
}
