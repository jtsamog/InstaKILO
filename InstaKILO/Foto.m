//
//  Foto.m
//  InstaKILO
//
//  Created by Endeavour2 on 7/12/17.
//  Copyright © 2017 SamOg. All rights reserved.
//

#import "Foto.h"

@implementation Foto

- (instancetype)initWithSubject:(NSString*)subject Location:(NSString*)location Image:(UIImage*)image {
  self = [super init];
  if (self) {
    _subject = subject;
    _location = location;
    _image = image;
  }
  return self;
}

@end
