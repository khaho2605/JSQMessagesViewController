//
//  Created by Jesse Squires
//  http://www.hexedbits.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSMessagesViewController
//
//
//  The MIT License
//  Copyright (c) 2014 Jesse Squires
//  http://opensource.org/licenses/MIT
//

#import <UIKit/UIKit.h>

/**
 *  `JSQMessagesLabel` is a subclass of `UILabel` that adds support for a `textInsets` property,
 *  which is similar to the `textContainerInset` property of `UITextView`.
 */
@interface JSQMessagesLabel : UILabel

/**
 *  The inset of the text layout area within the label's content area. The default value is `UIEdgeInsetsZero`.
 *
 *  @discussion This property provides text margins for the text laid out in the label.
 */
@property (assign, nonatomic) UIEdgeInsets textInsets;

@end
