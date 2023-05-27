#include "LagDetectionFunctionLibrary.h"
#include "Engine/World.h"
#include "LagDetectionFunctionLibrary.h"

bool ULagDetectionFunctionLibrary::DetectLagSpike(UObject* WorldContextObject, float Threshold, float LastFrameTime)
{
    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    if (!World) return false;

    // Calculate frame time difference
    float FrameTimeDifference = (World->GetTimeSeconds() - LastFrameTime) * 1000.0f;

    // Check if the difference exceeds the threshold
    return FrameTimeDifference > Threshold;
}
