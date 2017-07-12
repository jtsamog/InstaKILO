//
//  Foto.h
//  InstaKILO
//
//  Created by Endeavour2 on 7/12/17.
//  Copyright © 2017 SamOg. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@interface Foto : NSObject
@property (strong, nonatomic) UIImage *image;
@property (strong, nonatomic) NSString *subject;
@property (strong, nonatomic) NSString *location;


- (instancetype)initWithSubject:(NSString*)subject Location:(NSString*)location Image:(UIImage*)image;

@end
