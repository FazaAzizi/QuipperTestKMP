#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ComposeAppCourseEntityCompanion, ComposeAppCourseEntity, ComposeAppRootNavigationConfiguration, ComposeAppRootNavigationChild, ComposeAppDecomposeChildStack<__covariant C, __covariant T>, ComposeAppDecomposeValue<__covariant T>, ComposeAppRootNavigationChildCourseDetail, ComposeAppRootNavigationChildCourseList, ComposeAppRootNavigationConfigurationCompanion, ComposeAppKotlinArray<T>, ComposeAppRootNavigationConfigurationCourseDetailCompanion, ComposeAppRootNavigationConfigurationCourseDetail, ComposeAppRootNavigationConfigurationCourseList, UIViewController, ComposeAppLifecycleLifecycleState, ComposeAppBack_handlerBackCallback, ComposeAppDecomposeChildCreated<__covariant C, __covariant T>, ComposeAppKotlinx_serialization_coreSerializersModule, ComposeAppKotlinx_serialization_coreSerialKind, ComposeAppKotlinNothing, ComposeAppKotlinEnumCompanion, ComposeAppKotlinEnum<E>, ComposeAppBack_handlerBackCallbackCompanion, ComposeAppBack_handlerBackEvent, ComposeAppDecomposeChild<__covariant C, __covariant T>, ComposeAppBack_handlerBackEventSwipeEdge;

@protocol ComposeAppPlatform, ComposeAppKotlinx_serialization_coreKSerializer, ComposeAppLifecycleLifecycle, ComposeAppLifecycleLifecycleOwner, ComposeAppState_keeperStateKeeper, ComposeAppState_keeperStateKeeperOwner, ComposeAppInstance_keeperInstanceKeeper, ComposeAppInstance_keeperInstanceKeeperOwner, ComposeAppBack_handlerBackHandler, ComposeAppBack_handlerBackHandlerOwner, ComposeAppDecomposeComponentContext, ComposeAppCourseDetailRoute, ComposeAppCourseListRoute, ComposeAppKotlinx_serialization_coreEncoder, ComposeAppKotlinx_serialization_coreSerialDescriptor, ComposeAppKotlinx_serialization_coreSerializationStrategy, ComposeAppKotlinx_serialization_coreDecoder, ComposeAppKotlinx_serialization_coreDeserializationStrategy, ComposeAppLifecycleLifecycleCallbacks, ComposeAppRuntimeParcelable, ComposeAppKotlinKClass, ComposeAppInstance_keeperInstanceKeeperInstance, ComposeAppDecomposeCancellation, ComposeAppKotlinIterator, ComposeAppKotlinx_serialization_coreCompositeEncoder, ComposeAppKotlinAnnotation, ComposeAppKotlinx_serialization_coreCompositeDecoder, ComposeAppKotlinComparable, NSSecureCoding, ComposeAppKotlinKDeclarationContainer, ComposeAppKotlinKAnnotatedElement, ComposeAppKotlinKClassifier, ComposeAppKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface ComposeAppBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface ComposeAppBase (ComposeAppBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface ComposeAppMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface ComposeAppMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorComposeAppKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface ComposeAppNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface ComposeAppByte : ComposeAppNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface ComposeAppUByte : ComposeAppNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface ComposeAppShort : ComposeAppNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface ComposeAppUShort : ComposeAppNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface ComposeAppInt : ComposeAppNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface ComposeAppUInt : ComposeAppNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface ComposeAppLong : ComposeAppNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface ComposeAppULong : ComposeAppNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface ComposeAppFloat : ComposeAppNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface ComposeAppDouble : ComposeAppNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface ComposeAppBoolean : ComposeAppNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface ComposeAppGreeting : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol ComposeAppPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface ComposeAppIOSPlatform : ComposeAppBase <ComposeAppPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CourseEntity")))
@interface ComposeAppCourseEntity : ComposeAppBase
- (instancetype)initWithTitle:(NSString *)title presenterName:(NSString *)presenterName description:(NSString *)description thumbnailURL:(NSString *)thumbnailURL videoURL:(NSString *)videoURL videoDuration:(int64_t)videoDuration __attribute__((swift_name("init(title:presenterName:description:thumbnailURL:videoURL:videoDuration:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppCourseEntityCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppCourseEntity *)doCopyTitle:(NSString *)title presenterName:(NSString *)presenterName description:(NSString *)description thumbnailURL:(NSString *)thumbnailURL videoURL:(NSString *)videoURL videoDuration:(int64_t)videoDuration __attribute__((swift_name("doCopy(title:presenterName:description:thumbnailURL:videoURL:videoDuration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="presenter_name")
*/
@property (readonly) NSString *presenterName __attribute__((swift_name("presenterName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumbnail_url")
*/
@property (readonly) NSString *thumbnailURL __attribute__((swift_name("thumbnailURL")));
@property (readonly) NSString *title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_duration")
*/
@property (readonly) int64_t videoDuration __attribute__((swift_name("videoDuration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_url")
*/
@property (readonly) NSString *videoURL __attribute__((swift_name("videoURL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CourseEntity.Companion")))
@interface ComposeAppCourseEntityCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppCourseEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("LifecycleLifecycleOwner")))
@protocol ComposeAppLifecycleLifecycleOwner
@required
@property (readonly) id<ComposeAppLifecycleLifecycle> lifecycle __attribute__((swift_name("lifecycle")));
@end

__attribute__((swift_name("State_keeperStateKeeperOwner")))
@protocol ComposeAppState_keeperStateKeeperOwner
@required
@property (readonly) id<ComposeAppState_keeperStateKeeper> stateKeeper __attribute__((swift_name("stateKeeper")));
@end

__attribute__((swift_name("Instance_keeperInstanceKeeperOwner")))
@protocol ComposeAppInstance_keeperInstanceKeeperOwner
@required
@property (readonly) id<ComposeAppInstance_keeperInstanceKeeper> instanceKeeper __attribute__((swift_name("instanceKeeper")));
@end

__attribute__((swift_name("Back_handlerBackHandlerOwner")))
@protocol ComposeAppBack_handlerBackHandlerOwner
@required
@property (readonly) id<ComposeAppBack_handlerBackHandler> backHandler __attribute__((swift_name("backHandler")));
@end

__attribute__((swift_name("DecomposeComponentContext")))
@protocol ComposeAppDecomposeComponentContext <ComposeAppLifecycleLifecycleOwner, ComposeAppState_keeperStateKeeperOwner, ComposeAppInstance_keeperInstanceKeeperOwner, ComposeAppBack_handlerBackHandlerOwner>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootNavigation")))
@interface ComposeAppRootNavigation : ComposeAppBase <ComposeAppDecomposeComponentContext>
- (instancetype)initWithContext:(id<ComposeAppDecomposeComponentContext>)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<ComposeAppBack_handlerBackHandler> backHandler __attribute__((swift_name("backHandler")));
@property (readonly) ComposeAppDecomposeValue<ComposeAppDecomposeChildStack<ComposeAppRootNavigationConfiguration *, ComposeAppRootNavigationChild *> *> *childStack __attribute__((swift_name("childStack")));
@property (readonly) id<ComposeAppInstance_keeperInstanceKeeper> instanceKeeper __attribute__((swift_name("instanceKeeper")));
@property (readonly) id<ComposeAppLifecycleLifecycle> lifecycle __attribute__((swift_name("lifecycle")));
@property (readonly) id<ComposeAppState_keeperStateKeeper> stateKeeper __attribute__((swift_name("stateKeeper")));
@end

__attribute__((swift_name("RootNavigation.Child")))
@interface ComposeAppRootNavigationChild : ComposeAppBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootNavigation.ChildCourseDetail")))
@interface ComposeAppRootNavigationChildCourseDetail : ComposeAppRootNavigationChild
- (instancetype)initWithComponent:(id<ComposeAppCourseDetailRoute>)component data:(ComposeAppCourseEntity *)data __attribute__((swift_name("init(component:data:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppRootNavigationChildCourseDetail *)doCopyComponent:(id<ComposeAppCourseDetailRoute>)component data:(ComposeAppCourseEntity *)data __attribute__((swift_name("doCopy(component:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ComposeAppCourseDetailRoute> component __attribute__((swift_name("component")));
@property (readonly) ComposeAppCourseEntity *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootNavigation.ChildCourseList")))
@interface ComposeAppRootNavigationChildCourseList : ComposeAppRootNavigationChild
- (instancetype)initWithComponent:(id<ComposeAppCourseListRoute>)component __attribute__((swift_name("init(component:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppRootNavigationChildCourseList *)doCopyComponent:(id<ComposeAppCourseListRoute>)component __attribute__((swift_name("doCopy(component:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ComposeAppCourseListRoute> component __attribute__((swift_name("component")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("RootNavigation.Configuration")))
@interface ComposeAppRootNavigationConfiguration : ComposeAppBase
@property (class, readonly, getter=companion) ComposeAppRootNavigationConfigurationCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootNavigation.ConfigurationCompanion")))
@interface ComposeAppRootNavigationConfigurationCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppRootNavigationConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(ComposeAppKotlinArray<id<ComposeAppKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootNavigation.ConfigurationCourseDetail")))
@interface ComposeAppRootNavigationConfigurationCourseDetail : ComposeAppRootNavigationConfiguration
- (instancetype)initWithData:(ComposeAppCourseEntity *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppRootNavigationConfigurationCourseDetailCompanion *companion __attribute__((swift_name("companion")));
- (ComposeAppRootNavigationConfigurationCourseDetail *)doCopyData:(ComposeAppCourseEntity *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppCourseEntity *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootNavigation.ConfigurationCourseDetailCompanion")))
@interface ComposeAppRootNavigationConfigurationCourseDetailCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppRootNavigationConfigurationCourseDetailCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootNavigation.ConfigurationCourseList")))
@interface ComposeAppRootNavigationConfigurationCourseList : ComposeAppRootNavigationConfiguration
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)courseList __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppRootNavigationConfigurationCourseList *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<ComposeAppKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(ComposeAppKotlinArray<id<ComposeAppKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("CourseDetailRoute")))
@protocol ComposeAppCourseDetailRoute
@required
- (void)goToList __attribute__((swift_name("goToList()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CourseDetailNavigation")))
@interface ComposeAppCourseDetailNavigation : ComposeAppBase <ComposeAppCourseDetailRoute, ComposeAppDecomposeComponentContext>
- (instancetype)initWithContext:(id<ComposeAppDecomposeComponentContext>)context onClickBack:(void (^)(void))onClickBack __attribute__((swift_name("init(context:onClickBack:)"))) __attribute__((objc_designated_initializer));
- (void)goToList __attribute__((swift_name("goToList()")));
@property (readonly) id<ComposeAppBack_handlerBackHandler> backHandler __attribute__((swift_name("backHandler")));
@property (readonly) id<ComposeAppInstance_keeperInstanceKeeper> instanceKeeper __attribute__((swift_name("instanceKeeper")));
@property (readonly) id<ComposeAppLifecycleLifecycle> lifecycle __attribute__((swift_name("lifecycle")));
@property (readonly) id<ComposeAppState_keeperStateKeeper> stateKeeper __attribute__((swift_name("stateKeeper")));
@end

__attribute__((swift_name("CourseListRoute")))
@protocol ComposeAppCourseListRoute
@required
- (void)goToDetailData:(ComposeAppCourseEntity *)data __attribute__((swift_name("goToDetail(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CourseListNavigation")))
@interface ComposeAppCourseListNavigation : ComposeAppBase <ComposeAppCourseListRoute, ComposeAppDecomposeComponentContext>
- (instancetype)initWithContext:(id<ComposeAppDecomposeComponentContext>)context onClickData:(void (^)(ComposeAppCourseEntity *))onClickData __attribute__((swift_name("init(context:onClickData:)"))) __attribute__((objc_designated_initializer));
- (void)goToDetailData:(ComposeAppCourseEntity *)data __attribute__((swift_name("goToDetail(data:)")));
@property (readonly) id<ComposeAppBack_handlerBackHandler> backHandler __attribute__((swift_name("backHandler")));
@property (readonly) id<ComposeAppInstance_keeperInstanceKeeper> instanceKeeper __attribute__((swift_name("instanceKeeper")));
@property (readonly) id<ComposeAppLifecycleLifecycle> lifecycle __attribute__((swift_name("lifecycle")));
@property (readonly) id<ComposeAppState_keeperStateKeeper> stateKeeper __attribute__((swift_name("stateKeeper")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorKt")))
@interface ComposeAppColorKt : ComposeAppBase
+ (uint64_t)toColor:(NSString *)receiver __attribute__((swift_name("toColor(_:)")));
@property (class, readonly) uint64_t dark01 __attribute__((swift_name("dark01")));
@property (class, readonly) uint64_t dark02 __attribute__((swift_name("dark02")));
@property (class, readonly) uint64_t dark03 __attribute__((swift_name("dark03")));
@property (class, readonly) uint64_t dark04 __attribute__((swift_name("dark04")));
@property (class, readonly) uint64_t dark05 __attribute__((swift_name("dark05")));
@property (class, readonly) uint64_t dark06 __attribute__((swift_name("dark06")));
@property (class, readonly) uint64_t gray100 __attribute__((swift_name("gray100")));
@property (class, readonly) uint64_t gray200 __attribute__((swift_name("gray200")));
@property (class, readonly) uint64_t gray25 __attribute__((swift_name("gray25")));
@property (class, readonly) uint64_t gray300 __attribute__((swift_name("gray300")));
@property (class, readonly) uint64_t gray400 __attribute__((swift_name("gray400")));
@property (class, readonly) uint64_t gray50 __attribute__((swift_name("gray50")));
@property (class, readonly) uint64_t gray500 __attribute__((swift_name("gray500")));
@property (class, readonly) uint64_t gray600 __attribute__((swift_name("gray600")));
@property (class, readonly) uint64_t gray700 __attribute__((swift_name("gray700")));
@property (class, readonly) uint64_t grayCustom __attribute__((swift_name("grayCustom")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CourseEntityKt")))
@interface ComposeAppCourseEntityKt : ComposeAppBase
@property (class, readonly) NSArray<ComposeAppCourseEntity *> *dummyCourseList __attribute__((swift_name("dummyCourseList")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainViewControllerKt")))
@interface ComposeAppMainViewControllerKt : ComposeAppBase
+ (UIViewController *)MainViewController __attribute__((swift_name("MainViewController()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface ComposeAppPlatform_iosKt : ComposeAppBase
+ (id<ComposeAppPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol ComposeAppKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<ComposeAppKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<ComposeAppKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol ComposeAppKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<ComposeAppKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<ComposeAppKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol ComposeAppKotlinx_serialization_coreKSerializer <ComposeAppKotlinx_serialization_coreSerializationStrategy, ComposeAppKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("LifecycleLifecycle")))
@protocol ComposeAppLifecycleLifecycle
@required
- (void)subscribeCallbacks:(id<ComposeAppLifecycleLifecycleCallbacks>)callbacks __attribute__((swift_name("subscribe(callbacks:)")));
- (void)unsubscribeCallbacks:(id<ComposeAppLifecycleLifecycleCallbacks>)callbacks __attribute__((swift_name("unsubscribe(callbacks:)")));
@property (readonly) ComposeAppLifecycleLifecycleState *state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("State_keeperStateKeeper")))
@protocol ComposeAppState_keeperStateKeeper
@required
- (id<ComposeAppRuntimeParcelable> _Nullable)consumeKey:(NSString *)key clazz:(id<ComposeAppKotlinKClass>)clazz __attribute__((swift_name("consume(key:clazz:)"))) __attribute__((deprecated("Parcelize compiler plugin will not work with KMP and K2 compiler. Please use similar API based on kotlinx-serialization.")));
- (id _Nullable)consumeKey:(NSString *)key strategy:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)strategy __attribute__((swift_name("consume(key:strategy:)")));
- (BOOL)isRegisteredKey:(NSString *)key __attribute__((swift_name("isRegistered(key:)")));
- (void)registerKey:(NSString *)key supplier:(id<ComposeAppRuntimeParcelable> _Nullable (^)(void))supplier __attribute__((swift_name("register(key:supplier:)"))) __attribute__((deprecated("Parcelize compiler plugin will not work with KMP and K2 compiler. Please use similar API based on kotlinx-serialization.")));
- (void)registerKey:(NSString *)key strategy:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)strategy supplier:(id _Nullable (^)(void))supplier __attribute__((swift_name("register(key:strategy:supplier:)")));
- (void)unregisterKey:(NSString *)key __attribute__((swift_name("unregister(key:)")));
@end

__attribute__((swift_name("Instance_keeperInstanceKeeper")))
@protocol ComposeAppInstance_keeperInstanceKeeper
@required
- (id<ComposeAppInstance_keeperInstanceKeeperInstance> _Nullable)getKey:(id)key __attribute__((swift_name("get(key:)")));
- (void)putKey:(id)key instance:(id<ComposeAppInstance_keeperInstanceKeeperInstance>)instance __attribute__((swift_name("put(key:instance:)")));
- (id<ComposeAppInstance_keeperInstanceKeeperInstance> _Nullable)removeKey:(id)key __attribute__((swift_name("remove(key:)")));
@end

__attribute__((swift_name("Back_handlerBackHandler")))
@protocol ComposeAppBack_handlerBackHandler
@required
- (void)registerCallback:(ComposeAppBack_handlerBackCallback *)callback __attribute__((swift_name("register(callback:)")));
- (void)unregisterCallback:(ComposeAppBack_handlerBackCallback *)callback __attribute__((swift_name("unregister(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecomposeChildStack")))
@interface ComposeAppDecomposeChildStack<__covariant C, __covariant T> : ComposeAppBase
- (instancetype)initWithConfiguration:(C)configuration instance:(T)instance __attribute__((swift_name("init(configuration:instance:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithActive:(ComposeAppDecomposeChildCreated<C, T> *)active backStack:(NSArray<ComposeAppDecomposeChildCreated<C, T> *> *)backStack __attribute__((swift_name("init(active:backStack:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppDecomposeChildStack<C, T> *)doCopyActive:(ComposeAppDecomposeChildCreated<C, T> *)active backStack:(NSArray<ComposeAppDecomposeChildCreated<C, T> *> *)backStack __attribute__((swift_name("doCopy(active:backStack:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppDecomposeChildCreated<C, T> *active __attribute__((swift_name("active")));
@property (readonly) NSArray<ComposeAppDecomposeChildCreated<C, T> *> *backStack __attribute__((swift_name("backStack")));
@property (readonly) NSArray<ComposeAppDecomposeChildCreated<C, T> *> *items __attribute__((swift_name("items")));
@end

__attribute__((swift_name("DecomposeValue")))
@interface ComposeAppDecomposeValue<__covariant T> : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<ComposeAppDecomposeCancellation>)observeObserver:(void (^)(T))observer __attribute__((swift_name("observe(observer:)")));
- (void)subscribeObserver:(void (^)(T))observer __attribute__((swift_name("subscribe(observer:)"))) __attribute__((deprecated("Calling this method from Swift leaks the observer, because Kotlin wraps the function passed from Swift every time the method is called. Please use the new `observe` method which returns `Disposable`.")));
- (void)unsubscribeObserver:(void (^)(T))observer __attribute__((swift_name("unsubscribe(observer:)"))) __attribute__((deprecated("Calling this method from Swift doesn't have any effect, because Kotlin wraps the function passed from Swift every time the method is called. Please use the new `observe` method which returns `Disposable`.")));
@property (readonly) T value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface ComposeAppKotlinArray<T> : ComposeAppBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(ComposeAppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<ComposeAppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol ComposeAppKotlinx_serialization_coreEncoder
@required
- (id<ComposeAppKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<ComposeAppKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<ComposeAppKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol ComposeAppKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<ComposeAppKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<ComposeAppKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) ComposeAppKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol ComposeAppKotlinx_serialization_coreDecoder
@required
- (id<ComposeAppKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<ComposeAppKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (ComposeAppKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("LifecycleLifecycleCallbacks")))
@protocol ComposeAppLifecycleLifecycleCallbacks
@required
- (void)onCreate __attribute__((swift_name("onCreate()")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onPause __attribute__((swift_name("onPause()")));
- (void)onResume __attribute__((swift_name("onResume()")));
- (void)onStart __attribute__((swift_name("onStart()")));
- (void)onStop __attribute__((swift_name("onStop()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol ComposeAppKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface ComposeAppKotlinEnum<E> : ComposeAppBase <ComposeAppKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LifecycleLifecycleState")))
@interface ComposeAppLifecycleLifecycleState : ComposeAppKotlinEnum<ComposeAppLifecycleLifecycleState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppLifecycleLifecycleState *destroyed __attribute__((swift_name("destroyed")));
@property (class, readonly) ComposeAppLifecycleLifecycleState *initialized __attribute__((swift_name("initialized")));
@property (class, readonly) ComposeAppLifecycleLifecycleState *created __attribute__((swift_name("created")));
@property (class, readonly) ComposeAppLifecycleLifecycleState *started __attribute__((swift_name("started")));
@property (class, readonly) ComposeAppLifecycleLifecycleState *resumed __attribute__((swift_name("resumed")));
+ (ComposeAppKotlinArray<ComposeAppLifecycleLifecycleState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppLifecycleLifecycleState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("RuntimeParcelable")))
@protocol ComposeAppRuntimeParcelable
@required
- (id<NSSecureCoding>)coding __attribute__((swift_name("coding()")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol ComposeAppKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol ComposeAppKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol ComposeAppKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol ComposeAppKotlinKClass <ComposeAppKotlinKDeclarationContainer, ComposeAppKotlinKAnnotatedElement, ComposeAppKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Instance_keeperInstanceKeeperInstance")))
@protocol ComposeAppInstance_keeperInstanceKeeperInstance
@required
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
@end

__attribute__((swift_name("Back_handlerBackCallback")))
@interface ComposeAppBack_handlerBackCallback : ComposeAppBase
- (instancetype)initWithIsEnabled:(BOOL)isEnabled priority:(int32_t)priority __attribute__((swift_name("init(isEnabled:priority:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppBack_handlerBackCallbackCompanion *companion __attribute__((swift_name("companion")));
- (void)addEnabledChangedListenerListener:(void (^)(ComposeAppBoolean *))listener __attribute__((swift_name("addEnabledChangedListener(listener:)")));
- (void)onBack __attribute__((swift_name("onBack()")));
- (void)onBackCancelled __attribute__((swift_name("onBackCancelled()")));
- (void)onBackProgressedBackEvent:(ComposeAppBack_handlerBackEvent *)backEvent __attribute__((swift_name("onBackProgressed(backEvent:)")));
- (void)onBackStartedBackEvent:(ComposeAppBack_handlerBackEvent *)backEvent __attribute__((swift_name("onBackStarted(backEvent:)")));
- (void)removeEnabledChangedListenerListener:(void (^)(ComposeAppBoolean *))listener __attribute__((swift_name("removeEnabledChangedListener(listener:)")));
@property BOOL isEnabled __attribute__((swift_name("isEnabled")));
@property int32_t priority __attribute__((swift_name("priority")));
@end

__attribute__((swift_name("DecomposeChild")))
@interface ComposeAppDecomposeChild<__covariant C, __covariant T> : ComposeAppBase
@property (readonly) C configuration __attribute__((swift_name("configuration")));
@property (readonly) T _Nullable instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecomposeChildCreated")))
@interface ComposeAppDecomposeChildCreated<__covariant C, __covariant T> : ComposeAppDecomposeChild<C, T>
- (instancetype)initWithConfiguration:(C)configuration instance:(T)instance __attribute__((swift_name("init(configuration:instance:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppDecomposeChildCreated<C, T> *)doCopyConfiguration:(C)configuration instance:(T)instance __attribute__((swift_name("doCopy(configuration:instance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) C configuration __attribute__((swift_name("configuration")));
@property (readonly) T instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("DecomposeCancellation")))
@protocol ComposeAppDecomposeCancellation
@required
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol ComposeAppKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol ComposeAppKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<ComposeAppKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface ComposeAppKotlinx_serialization_coreSerializersModule : ComposeAppBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<ComposeAppKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ComposeAppKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<ComposeAppKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<ComposeAppKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ComposeAppKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ComposeAppKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<ComposeAppKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ComposeAppKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol ComposeAppKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface ComposeAppKotlinx_serialization_coreSerialKind : ComposeAppBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol ComposeAppKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<ComposeAppKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<ComposeAppKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) ComposeAppKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface ComposeAppKotlinNothing : ComposeAppBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface ComposeAppKotlinEnumCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Back_handlerBackCallback.Companion")))
@interface ComposeAppBack_handlerBackCallbackCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppBack_handlerBackCallbackCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t PRIORITY_DEFAULT __attribute__((swift_name("PRIORITY_DEFAULT")));
@property (readonly) int32_t PRIORITY_MAX __attribute__((swift_name("PRIORITY_MAX")));
@property (readonly) int32_t PRIORITY_MIN __attribute__((swift_name("PRIORITY_MIN")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Back_handlerBackEvent")))
@interface ComposeAppBack_handlerBackEvent : ComposeAppBase
- (instancetype)initWithProgress:(float)progress swipeEdge:(ComposeAppBack_handlerBackEventSwipeEdge *)swipeEdge touchX:(float)touchX touchY:(float)touchY __attribute__((swift_name("init(progress:swipeEdge:touchX:touchY:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float progress __attribute__((swift_name("progress")));
@property (readonly) ComposeAppBack_handlerBackEventSwipeEdge *swipeEdge __attribute__((swift_name("swipeEdge")));
@property (readonly) float touchX __attribute__((swift_name("touchX")));
@property (readonly) float touchY __attribute__((swift_name("touchY")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol ComposeAppKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<ComposeAppKotlinKClass>)kClass provider:(id<ComposeAppKotlinx_serialization_coreKSerializer> (^)(NSArray<id<ComposeAppKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<ComposeAppKotlinKClass>)kClass serializer:(id<ComposeAppKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<ComposeAppKotlinKClass>)baseClass actualClass:(id<ComposeAppKotlinKClass>)actualClass actualSerializer:(id<ComposeAppKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<ComposeAppKotlinKClass>)baseClass defaultDeserializerProvider:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<ComposeAppKotlinKClass>)baseClass defaultDeserializerProvider:(id<ComposeAppKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<ComposeAppKotlinKClass>)baseClass defaultSerializerProvider:(id<ComposeAppKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Back_handlerBackEvent.SwipeEdge")))
@interface ComposeAppBack_handlerBackEventSwipeEdge : ComposeAppKotlinEnum<ComposeAppBack_handlerBackEventSwipeEdge *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppBack_handlerBackEventSwipeEdge *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) ComposeAppBack_handlerBackEventSwipeEdge *left __attribute__((swift_name("left")));
@property (class, readonly) ComposeAppBack_handlerBackEventSwipeEdge *right __attribute__((swift_name("right")));
+ (ComposeAppKotlinArray<ComposeAppBack_handlerBackEventSwipeEdge *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppBack_handlerBackEventSwipeEdge *> *entries __attribute__((swift_name("entries")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
