/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001340b8  Symbol: onExit */

/* New_Game_Event::onExit() */

void __thiscall New_Game_Event::onExit(New_Game_Event *this)

{
  int iVar1;
  
  iVar1 = cocos2d::CCScheduler::sharedScheduler();
  *(undefined4 *)(iVar1 + 0x14) = 0x3f800000;
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


