//
//  ViewUpdateDelegate.h
//  Qmi
//
//  Created by Shaun Campbell on 2016-10-06.
//  Copyright © 2016 Philip Ha. All rights reserved.
//

/*
 I like how you used a delegate to notify the view controllers about a notification.
 However, there are better ways of achieving this. Remind me to do a quick breakout session if your intereseted in other ways of achieving this functionality.
 */

@protocol ViewUpdateDelegate <NSObject>

-(void) updateUsersView;

@end

