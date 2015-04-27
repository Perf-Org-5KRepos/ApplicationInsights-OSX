#import <Foundation/Foundation.h>
#import "MSAIApplicationInsights.h"

NS_ASSUME_NONNULL_BEGIN
#ifndef MSAI_Private_h
#define MSAI_Private_h

FOUNDATION_EXPORT NSString *const kMSAIName;
FOUNDATION_EXPORT NSString *const kMSAIIdentifier;
FOUNDATION_EXPORT NSString *const kMSAICrashSettings;
FOUNDATION_EXPORT NSString *const kMSAICrashAnalyzer;

#if MSAI_FEATURE_TELEMETRY

FOUNDATION_EXPORT NSString *const __unused kMSAITelemetryCachesSessions;
FOUNDATION_EXPORT NSString *const __unused kMSAITelemetryTempSessionData;
FOUNDATION_EXPORT NSString *const __unused kMSAITelemetryLastAppVersion;

#endif /* MSAI_FEATURE_METRICS */

FOUNDATION_EXPORT NSString *const kMSAIIntegrationflowTimestamp;

FOUNDATION_EXPORT NSString *const kMSAITelemetryPath;

#define MSAILog(fmt, ...) do { if([MSAIApplicationInsights sharedInstance].isDebugLogEnabled) { NSLog((@"[MSAI] %s/%d " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__); }} while(0)

#ifndef __IPHONE_8_0
#define __IPHONE_8_0     80000
#endif

#endif /* MSAI_Private_h */
NS_ASSUME_NONNULL_END
