//
//  WebPreferences.h
//  BZAgent
//
//  Created by Guy Podjarny on 11-09-19.
//

#ifndef BZAgent_WebPreferences_h
#define BZAgent_WebPreferences_h

/* Generated by RuntimeBrowser.
    Image: /Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
  */

@class NSMutableDictionary, NSString;

@interface WebPreferencesPrivate : NSObject  {
        NSMutableDictionary *values;
        NSString *identifier;
        NSString *IBCreatorID;
        BOOL autosaves;
        BOOL automaticallyDetectsCacheModel;
        unsigned int numWebViews;
};
@end


@interface WebPreferences : NSObject <NSCoding> {
        WebPreferencesPrivate *_private;
}

+ (id)standardPreferences;
+ (void)initialize;
+ (id)_IBCreatorID;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (unsigned long)_systemCFStringEncoding;

- (id)identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)arePlugInsEnabled;
- (int)defaultFixedFontSize;
- (id)defaultTextEncodingName;
- (BOOL)isJavaEnabled;
- (BOOL)isJavaScriptEnabled;
- (BOOL)javaScriptCanOpenWindowsAutomatically;
- (id)sansSerifFontFamily;
- (id)serifFontFamily;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (id)standardFontFamily;
- (void)setStandardFontFamily:(id)arg1;
- (id)fixedFontFamily;
- (void)setFixedFontFamily:(id)arg1;
- (void)setSerifFontFamily:(id)arg1;
- (void)setSansSerifFontFamily:(id)arg1;
- (id)cursiveFontFamily;
- (void)setCursiveFontFamily:(id)arg1;
- (id)fantasyFontFamily;
- (void)setFantasyFontFamily:(id)arg1;
- (int)defaultFontSize;
- (void)setDefaultFontSize:(int)arg1;
- (void)setDefaultFixedFontSize:(int)arg1;
- (int)minimumFontSize;
- (void)setMinimumFontSize:(int)arg1;
- (int)minimumLogicalFontSize;
- (void)setDefaultTextEncodingName:(id)arg1;
- (BOOL)userStyleSheetEnabled;
- (id)userStyleSheetLocation;
- (void)setUserStyleSheetLocation:(id)arg1;
- (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)arg1;
- (void)setPlugInsEnabled:(BOOL)arg1;
- (BOOL)allowsAnimatedImages;
- (void)setAllowsAnimatedImages:(BOOL)arg1;
- (BOOL)allowsAnimatedImageLooping;
- (void)setAllowsAnimatedImageLooping:(BOOL)arg1;
- (BOOL)loadsImagesAutomatically;
- (BOOL)autosaves;
- (void)setPrivateBrowsingEnabled:(BOOL)arg1;
- (BOOL)privateBrowsingEnabled;
- (void)setUsesPageCache:(BOOL)arg1;
- (unsigned int)cacheModel;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sendChangeNotification:(BOOL)arg2;
- (id)_valueForKey:(id)arg1;
- (id)_stringValueForKey:(id)arg1;
- (int)_integerValueForKey:(id)arg1;
- (float)_floatValueForKey:(id)arg1;
- (BOOL)_boolValueForKey:(id)arg1;
- (long long)_longLongValueForKey:(id)arg1;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (int)_unsignedShortValueForKey:(id)arg1;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (void)_setIntegerValue:(int)arg1 forKey:(id)arg2;
- (void)_setBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (void)_setLongLongValue:(long long)arg1 forKey:(id)arg2;
- (void)_setUnsignedShortValue:(int)arg1 forKey:(id)arg2;
- (void)setAutosaves:(BOOL)arg1;
- (void)setLoadsImagesAutomatically:(BOOL)arg1;
- (void)setJavaScriptEnabled:(BOOL)arg1;
- (void)setJavaEnabled:(BOOL)arg1;
- (void)setUserStyleSheetEnabled:(BOOL)arg1;
- (void)setMinimumLogicalFontSize:(int)arg1;
- (void)setCacheModel:(unsigned int)arg1;
- (BOOL)usesPageCache;
- (id)init;
- (void)dealloc;
- (id)_diskImageCacheSavedCacheDirectory;
- (void)willAddToWebView;
- (BOOL)storageTrackerEnabled;
- (BOOL)acceleratedDrawingEnabled;
- (BOOL)_forceFTPDirectoryListings;
- (BOOL)allowUniversalAccessFromFileURLs;
- (BOOL)localStorageEnabled;
- (BOOL)shrinksStandaloneImagesToFit;
- (BOOL)developerExtrasEnabled;
- (BOOL)applicationChromeModeEnabled;
- (BOOL)_standalone;
- (unsigned long)_maximumImageSize;
- (BOOL)webArchiveDebugModeEnabled;
- (BOOL)localFileContentSniffingEnabled;
- (BOOL)webGLEnabled;
- (BOOL)canvasUsesAcceleratedDrawing;
- (BOOL)showRepaintCounter;
- (BOOL)isFrameFlatteningEnabled;
- (BOOL)asynchronousSpellCheckingEnabled;
- (BOOL)memoryInfoEnabled;
- (float)_minimumZoomFontSize;
- (unsigned int)diskImageCacheMaximumCacheSize;
- (BOOL)webInspectorServerEnabled;
- (int)_NSURLMemoryCacheSize;
- (int)_NSURLDiskCacheSize;
- (BOOL)isDNSPrefetchingEnabled;
- (void)setDNSPrefetchingEnabled:(BOOL)arg1;
- (void)setDeveloperExtrasEnabled:(BOOL)arg1;
- (BOOL)authorAndUserStylesEnabled;
- (void)setAuthorAndUserStylesEnabled:(BOOL)arg1;
- (void)setApplicationChromeModeEnabled:(BOOL)arg1;
- (void)setWebArchiveDebugModeEnabled:(BOOL)arg1;
- (void)setLocalFileContentSniffingEnabled:(BOOL)arg1;
- (BOOL)offlineWebApplicationCacheEnabled;
- (BOOL)zoomsTextOnly;
- (void)setZoomsTextOnly:(BOOL)arg1;
- (BOOL)javaScriptCanAccessClipboard;
- (void)setJavaScriptCanAccessClipboard:(BOOL)arg1;
- (BOOL)isXSSAuditorEnabled;
- (void)setXSSAuditorEnabled:(BOOL)arg1;
- (BOOL)usesEncodingDetector;
- (void)setUsesEncodingDetector:(BOOL)arg1;
- (BOOL)isWebSecurityEnabled;
- (void)setWebSecurityEnabled:(BOOL)arg1;
- (void)setAllowUniversalAccessFromFileURLs:(BOOL)arg1;
- (BOOL)allowFileAccessFromFileURLs;
- (void)setAllowFileAccessFromFileURLs:(BOOL)arg1;
- (double)_backForwardCacheExpirationInterval;
- (void)_setStandalone:(BOOL)arg1;
- (void)_setTelephoneNumberParsingEnabled:(BOOL)arg1;
- (BOOL)_telephoneNumberParsingEnabled;
- (void)_setLayoutInterval:(int)arg1;
- (int)_layoutInterval;
- (void)_setMaxParseDuration:(float)arg1;
- (float)_maxParseDuration;
- (void)_setPageCacheSize:(int)arg1;
- (int)_pageCacheSize;
- (void)_setObjectCacheSize:(int)arg1;
- (int)_objectCacheSize;
- (void)_setNSURLMemoryCacheSize:(int)arg1;
- (void)_setNSURLDiskCacheSize:(int)arg1;
- (void)_setNSURLMaxRequestSize:(int)arg1;
- (int)_NSURLMaxRequestSize;
- (BOOL)_alwaysUseBaselineOfPrimaryFont;
- (BOOL)_allowMultiElementImplicitFormSubmission;
- (void)_setUseLegacyNumberInputFieldFormatting:(BOOL)arg1;
- (BOOL)_useLegacyNumberInputFieldFormatting;
- (void)_setAggressivePreloading:(BOOL)arg1;
- (BOOL)_aggressivePreloading;
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)arg1;
- (BOOL)_alwaysRequestGeolocationPermission;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)arg1;
- (BOOL)_alwaysUseAcceleratedOverflowScroll;
- (void)_setAllowCompositingLayerVisualDegradation:(BOOL)arg1;
- (BOOL)_allowCompositingLayerVisualDegradation;
- (long long)applicationCacheTotalQuota;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (long long)applicationCacheDefaultOriginQuota;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (int)editableLinkBehavior;
- (void)setEditableLinkBehavior:(int)arg1;
- (int)textDirectionSubmenuInclusionBehavior;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (BOOL)_useSiteSpecificSpoofing;
- (void)_setUseSiteSpecificSpoofing:(BOOL)arg1;
- (BOOL)databasesEnabled;
- (void)setStorageTrackerEnabled:(BOOL)arg1;
- (BOOL)experimentalNotificationsEnabled;
- (void)setExperimentalNotificationsEnabled:(BOOL)arg1;
- (void)_postPreferencesChangedAPINotification;
- (BOOL)isDOMPasteAllowed;
- (void)setDOMPasteAllowed:(BOOL)arg1;
- (id)_localStorageDatabasePath;
- (id)_ftpDirectoryTemplatePath;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (void)_setForceFTPDirectoryListings:(BOOL)arg1;
- (void)setAcceleratedDrawingEnabled:(BOOL)arg1;
- (void)setCanvasUsesAcceleratedDrawing:(BOOL)arg1;
- (BOOL)acceleratedCompositingEnabled;
- (void)setAcceleratedCompositingEnabled:(BOOL)arg1;
- (BOOL)showDebugBorders;
- (void)setShowDebugBorders:(BOOL)arg1;
- (void)setShowRepaintCounter:(BOOL)arg1;
- (BOOL)webAudioEnabled;
- (void)setWebAudioEnabled:(BOOL)arg1;
- (void)setWebGLEnabled:(BOOL)arg1;
- (BOOL)accelerated2dCanvasEnabled;
- (void)setAccelerated2dCanvasEnabled:(BOOL)arg1;
- (BOOL)diskImageCacheEnabled;
- (unsigned int)diskImageCacheMinimumImageSize;
- (void)setDiskImageCacheMinimumImageSize:(unsigned int)arg1;
- (void)setDiskImageCacheMaximumCacheSize:(unsigned int)arg1;
- (void)_setDiskImageCacheSavedCacheDirectory:(id)arg1;
- (void)setWebInspectorServerEnabled:(BOOL)arg1;
- (short)webInspectorServerPort;
- (void)setWebInspectorServerPort:(short)arg1;
- (unsigned int)pluginAllowedRunTime;
- (void)setPluginAllowedRunTime:(unsigned int)arg1;
- (void)setFrameFlatteningEnabled:(BOOL)arg1;
- (BOOL)isSpatialNavigationEnabled;
- (void)setSpatialNavigationEnabled:(BOOL)arg1;
- (BOOL)paginateDuringLayoutEnabled;
- (void)setPaginateDuringLayoutEnabled:(BOOL)arg1;
- (void)setMemoryInfoEnabled:(BOOL)arg1;
- (BOOL)hyperlinkAuditingEnabled;
- (void)setHyperlinkAuditingEnabled:(BOOL)arg1;
- (int)editingBehavior;
- (void)setEditingBehavior:(int)arg1;
- (BOOL)usePreHTML5ParserQuirks;
- (void)setUsePreHTML5ParserQuirks:(BOOL)arg1;
- (void)didRemoveFromWebView;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)setFullScreenEnabled:(BOOL)arg1;
- (BOOL)fullScreenEnabled;
- (void)setAsynchronousSpellCheckingEnabled:(BOOL)arg1;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)arg1;
- (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;
- (void)setAVFoundationEnabled:(BOOL)arg1;
- (BOOL)isAVFoundationEnabled;
- (void)_invalidateCachedPreferences;
- (BOOL)mediaPlaybackAllowsAirPlay;
- (BOOL)mediaPlaybackRequiresUserGesture;
- (BOOL)mediaPlaybackAllowsInline;
- (id)pictographFontFamily;
- (void)setPictographFontFamily:(id)arg1;
- (void)_postPreferencesChangedNotification;
- (void)setAutomaticallyDetectsCacheModel:(BOOL)arg1;
- (BOOL)automaticallyDetectsCacheModel;
- (void)setMediaPlaybackRequiresUserGesture:(BOOL)arg1;
- (void)setMediaPlaybackAllowsInline:(BOOL)arg1;
- (void)setShrinksStandaloneImagesToFit:(BOOL)arg1;
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)arg1;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (void)setDiskImageCacheEnabled:(BOOL)arg1;
- (void)setOfflineWebApplicationCacheEnabled:(BOOL)arg1;
- (void)setLocalStorageEnabled:(BOOL)arg1;
- (void)setDatabasesEnabled:(BOOL)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1;
- (void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)arg1;

@end


#endif
