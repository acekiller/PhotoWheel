//
//  PhotoAlbumViewController.h
//  PhotoWheel
//
//  Created by Kirby Turner on 8/13/11.
//  Copyright (c) 2011 White Peak Software Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PhotoBrowserViewController.h"
#import "SendEmailController.h"

@interface PhotosViewController : UIViewController <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, NSFetchedResultsControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PhotoBrowserViewControllerDelegate, SendEmailControllerDelegate>

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSManagedObjectID *objectID;
@property (nonatomic, weak) IBOutlet UIToolbar *toolbar;
@property (nonatomic, weak) IBOutlet UITextField *textField;
@property (nonatomic, weak) IBOutlet UIBarButtonItem *addButton;
@property (nonatomic, weak) IBOutlet UICollectionView *gridView;

- (void)reload;
- (IBAction)showActionMenu:(id)sender;
- (IBAction)addPhoto:(id)sender;
- (UIImage *)selectedImage;
- (CGRect)selectedCellFrame;

@end