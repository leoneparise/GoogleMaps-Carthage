//
//  GoogleMapsM4B.h
//  GoogleMapsM4B
//
//  Created by Leone Parise Vieira da Silva on 29/09/16.
//  Copyright © 2016 com.google. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for GoogleMapsM4B.
FOUNDATION_EXPORT double GoogleMapsM4BVersionNumber;

//! Project version string for GoogleMapsM4B.
FOUNDATION_EXPORT const unsigned char GoogleMapsM4BVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GoogleMapsM4B/PublicHeader.h>

#if __has_feature(modules)
@import GoogleMaps;
#else
#import <GoogleMaps/GoogleMaps.h>
#endif
