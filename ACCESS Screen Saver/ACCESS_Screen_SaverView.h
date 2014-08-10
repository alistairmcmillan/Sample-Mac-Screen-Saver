//
//  ACCESS_Screen_SaverView.h
//  ACCESS Screen Saver
//
//  Created by Alistair McMillan on 10/08/2014.
//  Copyright (c) 2014 Alistair McMillan. All rights reserved.
//

#import <ScreenSaver/ScreenSaver.h>

@interface ACCESS_Screen_SaverView : ScreenSaverView {
    float communicationOpacity;
    float excelOpacity;
    float innovationOpacity;
    float trustOpacity;
    BOOL increasingCommunicationOpacity;
    BOOL increasingExcelOpacity;
    BOOL increasingInnovationOpacity;
    BOOL increasingTrustOpacity;
}

@end
