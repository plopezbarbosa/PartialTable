//
//  TableViewController.h
//  PartialTable
//
//  Created by Abizer Nasir on 07/07/2011.
//

#import <UIKit/UIKit.h>


@interface TableViewController : UITableViewController {
@private
    NSUInteger numberOfItemsToDisplay;
}

@property (nonatomic, copy) NSArray *items;

@end
