/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014cfb4  Symbol: ccTouchEnded */

/* cocos2d::CCMenu::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) */

void cocos2d::CCMenu::ccTouchEnded(CCTouch *param_1,CCEvent *param_2)

{
  if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 0xfc))();
    (**(code **)(**(int **)(param_1 + 0x11c) + 0xf4))();
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  return;
}


