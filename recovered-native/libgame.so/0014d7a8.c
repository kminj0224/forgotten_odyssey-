/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d7a8  Symbol: ccTouchMoved */

/* cocos2d::CCMenu::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) */

void cocos2d::CCMenu::ccTouchMoved(CCTouch *param_1,CCEvent *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)itemForTouch((CCMenu *)param_1,(CCTouch *)param_2);
  piVar2 = *(int **)(param_1 + 0x11c);
  if (piVar1 != piVar2) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xfc))();
    }
    *(int **)(param_1 + 0x11c) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xf8))(piVar1);
    }
  }
  return;
}


