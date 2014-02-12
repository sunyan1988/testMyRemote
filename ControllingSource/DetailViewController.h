//
//  DetailViewController.h
//  ControllingSource
//
//  Created by EC-IMAC on 14-2-12.
//  Copyright (c) 2014年 EC-Byron. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
