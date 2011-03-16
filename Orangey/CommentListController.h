//
//  CommentListController.h
//  Orangey
//
//  Created by Grant Paul on 3/5/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "EntryListController.h"
#import "EntryActionsView.h"

@class HeaderContainerView;
@interface CommentListController : EntryListController <EntryActionsViewDelegate> {
    HeaderContainerView *headerContainerView;
    UIView *containerContainer;
    CGFloat suggestedHeaderHeight;
}

@end