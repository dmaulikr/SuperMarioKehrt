//
//  GameViewController.h
//  KerhMan
//
//  Created by Frederik Riedel on 04/11/2016.
//  Copyright © 2016 Frogg GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SpriteKit/SpriteKit.h>
#import <GameplayKit/GameplayKit.h>
#import "MapScene.h"
#import "GameScene.h"
#import "KerhMan-Swift.h"

@import SceneKit;
@import CoreMotion;


typedef enum {
    DrivingDirectionForward,
    DrivingDirectionLeft,
    DrivingDirectionRight
} DrivingDirection;


@interface GameViewController : UIViewController<UIAccelerometerDelegate,KehrmaschineDelegate>

@property (strong, nonatomic) IBOutlet SKView *skview;
@property (strong, nonatomic) IBOutlet SCNView *sceneKitView;
@property (strong, nonatomic) IBOutlet UIImageView *gameCharacter;
@property MapScene* mapScene;
@property double vehicleSteeringAngel;
@property double vehicleSpeed;
@property NSString* driverName;
@property DrivingDirection lastDrivingDirection;
@property (strong, nonatomic) IBOutlet UIImageView *ampelmaennchen;
@property CMMotionManager* motionManager;
@property GameScene* gameScene;
@property (strong, nonatomic) IBOutlet UIView *colorView;
@property (strong, nonatomic) IBOutlet UILabel *wallWarningLabel;


@end
