// Generated by Apple Swift version 4.0.2 (swiftlang-900.0.69.2 clang-900.0.38)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import LPInfra;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("LPAMS")

SWIFT_CLASS("_TtC5LPAMS22ConnectionStateManager")
@interface ConnectionStateManager : NSObject <GeneralManagerProtocol>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ConnectionStateManager * _Nonnull instance SWIFT_DEPRECATED_OBJC("Swift property 'ConnectionStateManager.instance' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");)
+ (ConnectionStateManager * _Nonnull)instance SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift property 'ConnectionStateManager.instance' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (void)clearManager;
@end


SWIFT_CLASS("_TtC5LPAMS24EngagementHistoryManager")
@interface EngagementHistoryManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol ConversationParamProtocol;
@class LPAuthenticationParams;
@protocol LPAMSFacadeDelegate;
@class LPBrandEntity;
@class LPConversationEntity;
@class LPMessageEntity;
@class NSError;
@class LPUser;
@class CSATModel;
enum SocketType : NSInteger;
@class LPFileEntity;
@class UIImage;
@class RequestSwiftURL;
@class LPFormEntity;
@class WKWebView;
@class Ring;
@class LPLinkPreviewEntity;

/// Full API to UMS protocol, Used is to control and send applicative events
SWIFT_CLASS("_TtC5LPAMS11LPAMSFacade")
@interface LPAMSFacade : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/// Initialize the AMS Facade delegate and the conversation handler
///
/// returns:
/// [bool] : true if all initializations are successful.
+ (BOOL)initializeAMS SWIFT_WARN_UNUSED_RESULT;
/// Perform connect to socket for conversationQuery
/// @param:
/// <ul>
///   <li>
///     optional ready completion which will be called after the socket is connected
///   </li>
/// </ul>
+ (void)connectToSocket:(id <ConversationParamProtocol> _Nonnull)conversationQuery readyCompletion:(void (^ _Nullable)(void))readyCompletion;
/// Perform reconnect to socket for conversationQuery:
/// <ul>
///   <li>
///     Remove the websocket handler
///   </li>
///   <li>
///     connect to socket
///     @param:
///   </li>
///   <li>
///     optional ready completion which will be called after the socket is connected
///   </li>
///   <li>
///     optional an LPAuthenticationParams object to determine the properties of an authenticated connection. LPAuthenticationParams supports Code Flow login or Implicit Flow login.
///   </li>
/// </ul>
+ (void)reconnectToSocket:(id <ConversationParamProtocol> _Nonnull)conversationQuery authenticationParams:(LPAuthenticationParams * _Nonnull)authenticationParams readyCompletion:(void (^ _Nullable)(void))readyCompletion;
/// Perform disconnect from socket for conversationQuery.
/// You can choose to disconnect the socket aftet delay of predefined time
/// \param conversationQuery conversationQuery where to socket belongs to
///
/// \param shouldUseDelay determines whether to keep socket open for delay
///
+ (void)disconnectSocket:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
/// Clear history of all closed conversations and their messages from the database.
/// This method is allowed only if there is no active/open conversation.
+ (BOOL)clearHistory:(id <ConversationParamProtocol> _Nonnull)conversationQuery SWIFT_WARN_UNUSED_RESULT;
/// Delete all conversations and their messages from the database, which older than X months.
/// The number of months allowed is defined in LPConfig with attribute: deleteClosedConversationOlderThanMonths
+ (void)deleteOldConversations;
/// Set AMSManagerDelegate implementor
+ (void)setDelegate:(id <LPAMSFacadeDelegate> _Nonnull)delegate;
/// Remove AMSManagerDelegate implementor
+ (void)removeDelegate:(id <LPAMSFacadeDelegate> _Nonnull)delegate;
/// Create new conversation instance
+ (LPConversationEntity * _Nonnull)createConversation:(LPBrandEntity * _Nonnull)brand SWIFT_WARN_UNUSED_RESULT;
/// Send message from a Message instance related to an owner conversation
+ (void)sendMessageInConversation:(LPConversationEntity * _Nonnull)conversation message:(LPMessageEntity * _Nonnull)message completion:(void (^ _Nonnull)(LPMessageEntity * _Nonnull))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// Send message from a text string related to an owner conversation
/// This method will create new Message instance in the database.
/// Messages might be masked depending on regex and masking from LPConfig
+ (void)sendMessageInConversation:(LPConversationEntity * _Nonnull)conversation text:(NSString * _Nonnull)text completion:(void (^ _Nonnull)(LPMessageEntity * _Nonnull))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// Resolve/End a conversation from the user side
+ (void)resolveConversation:(LPConversationEntity * _Nonnull)conversation;
+ (void)resolveConversationForConversationQuery:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
/// This methods returns the assigned agent of the active or the latest closed conversation, if exists.
+ (LPUser * _Nullable)getAssignedAgent:(id <ConversationParamProtocol> _Nonnull)conversationQuery SWIFT_WARN_UNUSED_RESULT;
/// Request to change the conversation urgency status to on/off
+ (BOOL)requestUrgentResponse:(LPConversationEntity * _Nonnull)conversation urgent:(BOOL)urgent SWIFT_WARN_UNUSED_RESULT;
+ (void)changeUrgentState:(id <ConversationParamProtocol> _Nonnull)conversationQuery isUrgent:(BOOL)isUrgent;
/// Retreive new messages from server for an owner converation
+ (void)retrieveNewMessagesForConversation:(LPConversationEntity * _Nonnull)conversation completion:(void (^ _Nullable)(NSArray<LPMessageEntity *> * _Nonnull))completion failure:(void (^ _Nullable)(NSError * _Nonnull))failure;
/// Submit CSAT to the server for an owner conversation
/// CSAT model is based on: rate of the csat, resolutionConfirmation toggle and wether csat is skipped or not
+ (void)sendCSAT:(LPConversationEntity * _Nonnull)conversation csat:(CSATModel * _Nonnull)csat;
/// Subscribe for exConversation notifications per for brandID
/// Use last updated time from the saved subscription times dictionary
/// Note: if there is an existing previous subscriptionID, unregister it before registering new one.
+ (void)subscribeConversationNotifications:(NSString * _Nonnull)brandID userID:(NSString * _Nonnull)userID socketType:(enum SocketType)socketType completion:(void (^ _Nullable)(NSString * _Nonnull))completion failure:(void (^ _Nullable)(NSError * _Nonnull))failure;
/// Unsubscribe from exConversation notifications per brandID for subscriptionID
+ (void)unsubscribeConversationNotifications:(NSString * _Nonnull)brandID subscriptionID:(NSString * _Nonnull)subscriptionID;
/// Subscribe to routing tasks notification in order to get new rings for Agent
/// \param brandID brandID to subscribe for
///
/// \param agentID agentID to get new rings for
///
/// \param completion completion with subscriptionID
///
/// \param failure failure
///
+ (void)subscribeRoutingTasks:(NSString * _Nonnull)brandID agentID:(NSString * _Nonnull)agentID completion:(void (^ _Nullable)(NSString * _Nonnull))completion failure:(void (^ _Nullable)(NSError * _Nonnull))failure;
/// This method determines wether a brandID is Ready.
/// Ready means that the brand is connected and conversation can be proccessed.
+ (BOOL)isBrandReady:(NSString * _Nonnull)brandID SWIFT_WARN_UNUSED_RESULT;
/// This method checks if the active conversation of a conversation query marked as Urgent.
/// Return value:
/// True - conversation is marked as Urgent.
/// False - conversation is not marked as Urgent.
+ (BOOL)isUrgent:(id <ConversationParamProtocol> _Nonnull)conversationQuery SWIFT_WARN_UNUSED_RESULT;
/// This method checks for an active(Open/Created) conversation according to conversation query.
/// Return value:
/// True - there is an active conversation.
/// False - there is no active conversation.
+ (BOOL)checkActiveConversation:(id <ConversationParamProtocol> _Nonnull)conversationQuery SWIFT_WARN_UNUSED_RESULT;
/// Determines whether history query messages already fecthced
+ (BOOL)didFetchHistoryQueryMessages SWIFT_WARN_UNUSED_RESULT;
/// Determines whether history query messages is now being fetched
+ (BOOL)isFetchingHistoryQueryMessages SWIFT_WARN_UNUSED_RESULT;
/// Determines the name of the assigned agent that should be presented in UI areas.
/// If assigned agent exists and has a nickname - return it. Otherwise, return nil.
/// If nil is returned, it should be handled according to UI area
+ (NSString * _Nullable)agentNameUIRepresentation:(LPConversationEntity * _Nullable)conversation SWIFT_WARN_UNUSED_RESULT;
/// Create resolved system message for conversation, according to resolving side
/// Timestamp - when agent resolved we take the timestamp from server, when consumer resolved we take now.
+ (LPMessageEntity * _Nullable)createResolveLocalMessage:(LPConversationEntity * _Nonnull)conversation endTime:(NSDate * _Nonnull)endTime SWIFT_WARN_UNUSED_RESULT;
/// Creates local system message for masked message according to the current masking type:
/// \param conversation conversation that the message will be added to
///
/// \param isRealTimeMasking should the system message text represent real time masking or client side masking
///
///
/// returns:
/// local masked message, nil if failed
+ (LPMessageEntity * _Nullable)createMessageMaskedLocalMessage:(LPConversationEntity * _Nonnull)conversation isRealTimeMasking:(BOOL)isRealTimeMasking SWIFT_WARN_UNUSED_RESULT;
/// Creates welcome local system message for conversation
+ (LPMessageEntity * _Nullable)createWelcomeLocalMessage:(LPConversationEntity * _Nonnull)conversation SWIFT_WARN_UNUSED_RESULT;
/// Get client properties to be sent to AMS using predefiend AMS parameters.
/// This method is used for sending information to AMS
+ (NSString * _Nonnull)clientPropertiesString SWIFT_WARN_UNUSED_RESULT;
/// Sends a new messge with file from gallery or camera
+ (void)uploadFileFromImageInfoWithImageInfo:(NSDictionary<NSString *, id> * _Nonnull)imageInfo caption:(NSString * _Nonnull)caption conversation:(LPConversationEntity * _Null_unspecified)conversation completion:(void (^ _Nonnull)(void))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// Uploading file that is saved on disk (mainly for failed messages)
+ (void)uploadFileFromDiskWithMessage:(LPMessageEntity * _Nonnull)message conversation:(LPConversationEntity * _Nonnull)conversation completion:(void (^ _Nonnull)(void))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// Downloads a file from Swift server and returns an image to show
+ (void)downloadFileWithConversation:(LPConversationEntity * _Nonnull)conversation file:(LPFileEntity * _Nonnull)file completion:(void (^ _Nonnull)(UIImage * _Nonnull))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// Requests the AMS for an upload url for swift server
+ (void)requestUploadURLWithConversation:(LPConversationEntity * _Nonnull)conversation fileSize:(double)fileSize fileExtention:(NSString * _Nonnull)fileExtention completion:(void (^ _Nonnull)(RequestSwiftURL * _Nonnull))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// Requests the AMS for a download url from swift server
+ (void)requestDownloadURLWithConversation:(LPConversationEntity * _Nonnull)conversation file:(LPFileEntity * _Nonnull)file completion:(void (^ _Nonnull)(RequestSwiftURL * _Nonnull))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// Searches for a link preview url in the message content. If the LinkPreview feature is disabled, will return nil
/// This method ignores email links!
/// \param messageContent message content to search URL from
///
///
/// returns:
/// If LinkPreview feature enabled and link exist - returns the first link URL, else returns nil.
+ (NSURL * _Nullable)linkPreviewUrlFrom:(NSString * _Nonnull)messageContent SWIFT_WARN_UNUSED_RESULT;
/// Prepare secure form URL which allows to open a form to read
/// This method generates read and write OTK from UMS and build URL to be used for PCI GW
/// \param form form object to get the url for
///
/// \param completion completion block when the form is ready - url and token are valid
///
/// \param failure failure block with error
///
+ (void)prepareSecureFormWithForm:(LPFormEntity * _Nonnull)form completion:(void (^ _Nonnull)(void))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// Determine whether a form has already been loaded in the webview before and can be re-used
/// \param form the form the check for
///
///
/// returns:
/// true if form has been loaded, else false
+ (BOOL)hasSecureFormAlreadyLoadedInWebViewWithForm:(LPFormEntity * _Nonnull)form SWIFT_WARN_UNUSED_RESULT;
/// Get shared instance of secure form web view which loaded with a form url
/// \param form form to be shown in the webview
///
///
/// returns:
/// an optional instance of the webview with the form loaded
+ (WKWebView * _Nullable)getPreparedSecureFormWebViewWithForm:(LPFormEntity * _Nonnull)form SWIFT_WARN_UNUSED_RESULT;
+ (void)acceptRing:(Ring * _Nonnull)ring agentToken:(NSString * _Nonnull)agentToken completion:(void (^ _Nonnull)(LPConversationEntity * _Nonnull))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
+ (void)backToQueue:(NSString * _Nonnull)userID conversation:(LPConversationEntity * _Nonnull)conversation completion:(void (^ _Nonnull)(void))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
+ (void)subscribeAgentState:(id <ConversationParamProtocol> _Nonnull)conversationQuery agentID:(NSString * _Nonnull)agentID;
+ (void)setAgentState:(id <ConversationParamProtocol> _Nonnull)conversationQuery agentID:(NSString * _Nonnull)agentID channels:(NSArray<NSString *> * _Nullable)channels availability:(NSString * _Nonnull)availability description:(NSString * _Nonnull)description;
+ (void)agentRequestConversation:(id <ConversationParamProtocol> _Nonnull)conversationQuery context:(NSDictionary<NSString *, NSString *> * _Nonnull)context ttrDefName:(NSString * _Nonnull)ttrDefName channelType:(NSString * _Nonnull)channelType consumerId:(NSString * _Nonnull)consumerId completion:(void (^ _Nonnull)(void))completion failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// Gets messages with linkPreviewState of “loading”
///
/// returns:
/// Optional array of messages
+ (NSArray<LPMessageEntity *> * _Nullable)getLoadingStructuredContentMessages SWIFT_WARN_UNUSED_RESULT;
/// Get the latest batch of unread messages
///
/// returns:
/// array of unread messages or nil
+ (NSArray<LPMessageEntity *> * _Nullable)getLatestUnreadMessages SWIFT_WARN_UNUSED_RESULT;
/// Gets custom items with image state of “downloading”
///
/// returns:
/// Optional array of custom items
+ (NSArray<LPLinkPreviewEntity *> * _Nullable)getLoadingStructuredContentCustomItems SWIFT_WARN_UNUSED_RESULT;
/// Determine if the brand has an active controller/bot in his conversations
/// \param brandID brandID owner of the controller
///
///
/// returns:
/// true if active else false
+ (BOOL)hasActiveController:(NSString * _Nonnull)brandID SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<NSString *> * _Nonnull)getAllConsumersID SWIFT_WARN_UNUSED_RESULT;
/// Clear all singleton managers with their properties from memory.
/// This method will release any data objects and data structures.
+ (void)clearManagers;
@end

@class TTRModel;
@class LPUserEntity;

/// UMS protocol delegate to receive events about the lifecycle of conversaion, messages, CSAT etc.
SWIFT_PROTOCOL("_TtP5LPAMS19LPAMSFacadeDelegate_")
@protocol LPAMSFacadeDelegate
@optional
- (void)conversationDidResolve:(LPConversationEntity * _Nonnull)conversation isAgentSide:(BOOL)isAgentSide endTime:(NSDate * _Nullable)endTime;
- (void)conversationWasSentToQueueRemotely:(LPConversationEntity * _Nonnull)conversation;
- (void)retrieveHistoryQueryMessagesDidProgressWithConversationQuery:(id <ConversationParamProtocol> _Nonnull)conversationQuery completed:(float)completed total:(float)total;
- (void)retrieveHistoryQueryMessagesStateDidChangeWithConversationQuery:(id <ConversationParamProtocol> _Nonnull)conversationQuery isFinished:(BOOL)isFinished fetchedConversationCount:(NSInteger)fetchedConversationCount fetchedMessages:(NSArray<LPMessageEntity *> * _Nullable)fetchedMessages;
- (void)didSendMessages:(LPConversationEntity * _Nonnull)conversation messages:(NSArray<LPMessageEntity *> * _Nonnull)messages;
- (void)willReceiveMessages;
- (void)didReceiveMessages:(LPConversationEntity * _Nonnull)conversation messages:(NSArray<LPMessageEntity *> * _Nonnull)messages;
- (void)resolveConvesationDidFail:(LPConversationEntity * _Nonnull)conversation error:(NSError * _Nonnull)error;
- (void)resolveConvesationRequestDidFinish:(LPConversationEntity * _Nonnull)conversation;
- (void)newConversationCreated:(LPConversationEntity * _Nonnull)conversation;
- (void)urgentRequestDidFinish:(LPConversationEntity * _Nonnull)conversation;
- (void)urgentRequestDidFail:(LPConversationEntity * _Nonnull)conversation error:(NSError * _Nonnull)error;
- (void)chatStateDidChange:(LPConversationEntity * _Nonnull)conversation state:(NSString * _Nonnull)state userID:(NSString * _Nonnull)userID;
- (void)messagesStatusDidChange:(LPConversationEntity * _Nonnull)conversation messages:(NSArray<LPMessageEntity *> * _Nonnull)messages;
- (void)conversationInitializedOnAMS:(LPConversationEntity * _Nonnull)conversation;
- (void)didReceiveTTRUpdate:(LPConversationEntity * _Nonnull)conversation ttr:(TTRModel * _Nonnull)ttr;
- (void)didUpdateUserProfile:(LPConversationEntity * _Nonnull)conversation userID:(NSString * _Nonnull)userID;
- (void)csatScoreSubmissionDidFinish:(LPConversationEntity * _Nonnull)conversation csat:(CSATModel * _Nonnull)csat;
- (void)csatScoreSubmissionDidFail:(LPConversationEntity * _Nonnull)conversation error:(NSError * _Nonnull)error;
- (BOOL)isConversationVisible SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)brandAccountID SWIFT_WARN_UNUSED_RESULT;
- (void)sdkFeatureToggledWithFeature:(enum LPMessagingSDKFeature)feature toggle:(BOOL)toggle;
- (id <ConversationParamProtocol> _Nullable)getCurrentConversationQuery SWIFT_WARN_UNUSED_RESULT;
- (void)didReceiveRingUpdate:(NSString * _Nonnull)conversationID ring:(Ring * _Nonnull)ring;
- (void)didAcceptRingWithConversation:(LPConversationEntity * _Nonnull)conversation;
- (void)agentStateDidChange:(LPUserEntity * _Nonnull)agent state:(NSString * _Nonnull)state;
@end

/// Used to set the socket type as consumer aor brand. The URI for opening the socket is different between the two.
/// <ul>
///   <li>
///     Consumer: End user is a consumer.
///   </li>
///   <li>
///     Agent: End user is LiveEngage agent.
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, SocketType) {
  SocketTypeConsumer = 0,
  SocketTypeAgent = 1,
};

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
