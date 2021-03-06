//
//  SlidersStackViewController.m
//  GuitarDsp
//
//  Created by Maciej Chmielewski on 15.03.2017.
//
//

#import "SlidersStackViewController.h"

@interface SlidersStackViewController ()

@end

@implementation SlidersStackViewController

+ (SlidersStackViewController *)withSliders:(NSArray<Slider *> *)sliders {
    SlidersStackViewController *me = [[NSStoryboard storyboardWithName:@"SlidersStack" bundle:nil] instantiateInitialController];
    me.view;
    me.slidersView.sliders = sliders;
    return me;
}

- (void)setDismiss:(void (^)(void))dismiss {
    _dismiss = dismiss;
    self.slidersView.dismiss = _dismiss;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.frame = [NSScreen mainScreen].frame;
    self.slidersView.dismiss = self.dismiss;
}

@end
