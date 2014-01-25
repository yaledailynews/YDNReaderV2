//
//  YDNAppDelegate.h
//  YDNReaderV2
//
//  Created by Vincent Hu on 1/21/14.
//  Copyright (c) 2014 Yale Daily News. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YDNAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
