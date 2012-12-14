//
//  SplashLayer.h
//  BrainQuiz
//
//  Created by zhou Yangbo on 11-8-13.
//  Copyright 2011 GODPAPER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "MainMenuLayer.h"
#import "XMLParseProxy.h"

@interface SplashLayer : CCLayer  {
	XMLParseProxy *parser;
}

+(CCScene *) scene;

@end
