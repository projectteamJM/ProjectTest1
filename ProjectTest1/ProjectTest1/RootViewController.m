//
//  RootViewController.m
//  ProjectTest1
//
//  Created by 蒋潇涵 on 15/12/13.
//  Copyright © 2015年 a. All rights reserved.
//

#import "RootViewController.h"
#import "RootTitleView.h"
#import "RootViewTitleCell.h"
@interface RootViewController ()<UICollectionViewDataSource,UICollectionViewDataSource>
@property (weak, nonatomic) IBOutlet RootTitleView *rootTitleView;


@end

@implementation RootViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.

    
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    return 5;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    RootViewTitleCell *cell = (RootViewTitleCell *)[collectionView dequeueReusableCellWithReuseIdentifier:@"RootViewTitleCell1" forIndexPath:indexPath];
    return cell;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
