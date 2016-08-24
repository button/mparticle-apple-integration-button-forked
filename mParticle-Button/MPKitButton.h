//
//  MPKitButton.h
//
//  Copyright 2016 Button, Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "MPKitExecStatus.h"
#import "MPKitProtocol.h"

/// A key into the linkInfo passed the -checkForDeferredDeepLinkWithCompletionHandler: handler.
extern NSString * _Nonnull const BTNDeferredDeepLinkURLKey;

#pragma mark - MPIButton
@interface MPIButton : NSObject

/// Returns the Button referrer token if present (i.e. btn_ref).
@property (nonatomic, copy, readonly, nullable) NSString *referrerToken;

@end


#pragma mark - MPKitButton
@interface MPKitButton : NSObject <MPKitProtocol>

@property (nonatomic, strong, nonnull) NSDictionary *configuration;
@property (nonatomic, unsafe_unretained, readonly) BOOL started;

@end