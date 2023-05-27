#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LagDetectionFunctionLibrary.generated.h"

UCLASS()
class PANTANDCLICK_API ULagDetectionFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Performance", meta = (DisplayName = "Detect Lag Spike", CompactNodeTitle = "LagSpike", Keywords = "lag performance spike freeze", WorldContext = "WorldContextObject"))
    static bool DetectLagSpike(UObject* WorldContextObject, float Threshold, float LastFrameTime);
};
