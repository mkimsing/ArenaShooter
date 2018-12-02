// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaShooterCharacter.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TB_Character.generated.h"


UCLASS(Blueprintable)
class ARENASHOOTER_API ATB_Character : public AArenaShooterCharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATB_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
