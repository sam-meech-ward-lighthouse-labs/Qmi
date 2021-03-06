//
//  User.h
//  Qmi
//
//  Created by Tevin Maker on 2016-10-03.
//  Copyright © 2016 Philip Ha. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Parse/Parse.h>

@interface User : PFUser

@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSString * phoneNumber;
@property (nonatomic) BOOL isCustomer;

+(User *)userCustomerWithName:(NSString *)name andPhoneNumber:(NSString *)phoneNumber;
+(User *)userRestaurantWithName:(NSString *)name andPhoneNumber:(NSString *)phoneNumber;


@end
