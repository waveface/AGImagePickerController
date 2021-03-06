//
//  AGViewController.h
//  AGImagePickerController Demo
//
//  Created by Artur Grigor on 2/16/12.
//  Copyright (c) 2012 Artur Grigor. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AGImagePickerController.h"

@interface AGViewController : UIViewController
{
    UIButton *openButton;
    NSMutableArray *selectedPhotos;
}

@property (unsafe_unretained, nonatomic, readonly) UIButton *openButton;
@property (nonatomic, strong) NSMutableArray *selectedPhotos;

@end
