/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001454e2  Symbol: mainLoop */

/* cocos2d::CCDisplayLinkDirector::mainLoop() */

void __thiscall cocos2d::CCDisplayLinkDirector::mainLoop(CCDisplayLinkDirector *this)

{
  CCPoolManager *this_00;
  
  if (this[0x11] == (CCDisplayLinkDirector)0x0) {
    if (this[0x8a] == (CCDisplayLinkDirector)0x0) {
      CCDirector::drawScene((CCDirector *)this);
      this_00 = (CCPoolManager *)CCPoolManager::getInstance();
      CCPoolManager::pop(this_00);
    }
  }
  else {
    CCDirector::purgeDirector((CCDirector *)this);
    this[0x11] = (CCDisplayLinkDirector)0x0;
  }
  return;
}


