//
//  PAPPhotoTimelineViewController.h
//  Anypic
//
//  Created by Héctor Ramos on 5/3/12.
//  Copyright (c) 2013 Parse. All rights reserved.
//

#import "PAPPhotoHeaderView.h"

@interface PAPPhotoTimelineViewController : UITableViewController<PAPPhotoHeaderViewDelegate>
{NSArray *arr;
}
@property(nonatomic,strong)NSMutableArray *grpIdArray;

- (PAPPhotoHeaderView *)dequeueReusableSectionHeaderView;
@property (nonatomic, strong) UISegmentedControl *segmentControl;

@end
