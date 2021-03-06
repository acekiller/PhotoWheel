# Change History

**Version 2.0b2**
   * [CHANGED] Updated the source code with code from the second edition of the book.
   * [CHANGED] Updated HockeySDK-iOS to version 2.5.5.

**Version 2.0b1**
   * [CHANGED] Updated HockeySDK-iOS to version 2.5.4b1.
   * [CHANGED] Replaced deprecated calls with iOS 6 equivalent.
   * [CHANGED] Removed iOS 5 support. PhotoWheel v2 is iOS 6 only.

**Version 1.3**

   * [NEW] Added HockeySDK and removed QuincyKit.
   * [NEW] Removed the PhotoWheel workspace and prototype project as they are no longer needed or used.
   * [CHANGED] Build run script updated to commit info.plist after updating the build number.
   * [NEW] Added user defined build settings to set the bundle id and bundle display name based on the build type.
   * [CHANGED] Removed run script that increments build number. This step has been moved to the external build script.
   * [NEW] Retina support.
   * [CHANGED] Replaced Default.png and Default-Landscape.png with .jpg formatted images to save storage space.
   * [FIXED] Fixed iCloud syncing issues.
   * [NEW] iCloud notifications are queued until after the persistent data store is created.
   
**Version 1.2.1**

   * [FIXED] Divide by zero error can occur during the spin gesture recognizer.
   * [FIXED] App crashes with error at _deleteExternalReferenceFromPermanentLocation. 

**Version 1.2**

   * [NEW] Added change history file.
   * [NEW] Added license and readme to the PhotoWheel workspace.
   * [CHANGED] Removed the PhotoWheelPrototype from the workspace.
   * [NEW] Added run script to the build phase that auto-increments the build number.
   * [CHANGED] Added additional information to the about screen.
   * [NEW] Added QuincyKit for crash reporting.
   * [NEW] Added -fno-objc-arc flag for QuincyKit.
   * [CHANGED] Moved the Flickr API Key to AppKeys.h.
   * [CHANGED] Removed the book print formating and anontation markers.
   * [FIXED] Fixed crash caused by not copying the completion block in ImageDownloader.

**Version 1.1**

   * Completed app as presented in the [book][1].

**Version 1.0**

   * Submitted to and approved by Apple. Pre-iOS 5.0 release.
   
   [1]: http://learnipadprogramming.com/
