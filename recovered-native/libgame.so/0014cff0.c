/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014cff0  Symbol: ccTouchCancelled */

/* cocos2d::CCMenu::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) */

void cocos2d::CCMenu::ccTouchCancelled(CCTouch *param_1,CCEvent *param_2)

{
  if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 0xfc))();
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  return;
}


