//
//  Header.h
//  ProjectTest1
//
//  Created by a on 15/12/14.
//  Copyright © 2015年 a. All rights reserved.
//

#ifndef Header_h
#define Header_h

#ifdef DEBUG
#define debugLog(...) fprintf(stderr,"%s\n", [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#define debugMethod() NSLog(@"%s", __func__)
#else
#define debugLog(...)
#define debugMethod()
#endif

#define RGBA(r,g,b,a)         [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define RGB(r,g,b)            [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]
#define HEXCOLOR(c)           [UIColor colorWithRed:((c>>24)&0xFF)/255.0 green:((c>>16)&0xFF)/255.0 blue:((c>>8)&0xFF)/255.0 alpha:((c)&0xFF)/255.0]
#define BoldSystemFont(size)  [UIFont boldSystemFontOfSize:size]
#define systemFont(size)      [UIFont systemFontOfSize:size]
// 屏幕高度
#define SCREEN_HEIGHT         [[UIScreen mainScreen] bounds].size.height

// 屏幕宽度
#define SCREEN_WIDTH          [[UIScreen mainScreen] bounds].size.width

// 图片路径
#define GetBundleImage(bundlename,filename) [bundlename stringByAppendingPathComponent:filename]

#define GetUserDefaults(key)  [[NSUserDefaults standardUserDefaults] objectForKey:key]

#define SystemUrl

#define placeholderImageName  @"logo(1)"
#define EMPTY_STRING        @""
#define isNull(x)             (!x || [x isKindOfClass:[NSNull class]])
#define toInt(x)              (isNull(x) ? 0 : [x intValue])
#define isEmptyString(x)      (isNull(x) || [x isEqual:@""] || [x isEqual:@"(null)"])

/**
 **屏幕
 */
#define  kScreenHeight [[UIScreen mainScreen] bounds].size.height
#define  kScreenWidth  [[UIScreen mainScreen] bounds].size.width
#define  kScreenTabBarNavigationWidth  kScreenHeight

#define  kWindow  [[UIApplication sharedApplication] keyWindow]

#define IOS_7      [[[UIDevice currentDevice] systemVersion] floatValue] < 8.0
#define IS_IOS7    ((([[[UIDevice currentDevice] systemVersion] floatValue] < 8.0)&&([[[UIDevice currentDevice] systemVersion] floatValue] > 6.0 ))? (YES):(NO))

/**
 **手机
 */
#define IS_IPHONE4 ([UIScreen mainScreen].bounds.size.height == 480.0f)
#define IS_IPHONE5 ([UIScreen mainScreen].bounds.size.height == 568.0f)
#define IS_IPHONE6 ([UIScreen mainScreen].bounds.size.height == 667.0f)//375w
#define IS_IPHONE6_PLUS ([UIScreen mainScreen].bounds.size.height == 736.0f)//414w
#define SCALE_169 kScreenWidth * 9 / 16.0

/**
 **子线程
 */
#define BACK(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)
/**
 **主线程
 */
#define MAIN(block) dispatch_async(dispatch_get_main_queue(),block)
/**
 **默认保存
 */
#define kMR_Save_Object_OnCurrentThread [[NSManagedObjectContext MR_contextForCurrentThread] MR_saveOnlySelfAndWait]

/**
 ** weak
 */
#define WS(weakSelf) __weak __typeof(&*self)weakSelf = self;

#endif /* Header_h */
