/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d0dc  Symbol: onExit */

/* cocos2d::CCMenu::onExit() */

void __thiscall cocos2d::CCMenu::onExit(CCMenu *this)

{
  if (*(int *)(this + 0x118) == 1) {
    (**(code **)(**(int **)(this + 0x11c) + 0xfc))();
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
  }
  CCLayer::onExit((CCLayer *)this);
  return;
}


