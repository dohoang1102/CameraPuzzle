//
//  NewPuzzleController.h
//  PhotoPuzzle
//
//  Created by Gustav Lindbergh on 2011-07-13.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Puzzle;
@class PuzzleController;

@protocol AllPuzzlesDelegate;

@interface NewPuzzleController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITextFieldDelegate>
{
    id<AllPuzzlesDelegate> delegate;
    IBOutlet UIButton *photoButton;
    IBOutlet UIImageView *imageView;
    IBOutlet UISlider *piecesSlider;
    IBOutlet UILabel *piecesLabel;
    IBOutlet UIButton *saveButton;
    IBOutlet UILabel *instructionLabel;
    IBOutlet UITextField *nameTextField;
    
    Puzzle *newPuzzle;
    PuzzleController *puzzleController;
    UIImage *puzzleImage;
    
}

@property (nonatomic, assign) Puzzle *newPuzzle;
@property (nonatomic, assign) UIImage *puzzleImage;
@property (nonatomic, retain) IBOutlet UISlider *piecesSlider;
@property (nonatomic, retain) IBOutlet UILabel *piecesLabel;
@property (nonatomic, assign) id<AllPuzzlesDelegate> delegate;

- (IBAction) sliderValueChanged:(id)sender;
- (IBAction) savePuzzle;
- (UIImage *)resizeImage:(UIImage *)image;

@end
