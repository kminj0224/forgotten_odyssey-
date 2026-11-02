/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d7f0  Symbol: ccTouchBegan */

/* cocos2d::CCMenu::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) */

CCTouch cocos2d::CCMenu::ccTouchBegan(CCTouch *param_1,CCEvent *param_2)

{
  int iVar1;
  CCTouch CVar2;
  int *piVar3;
  
  CVar2 = (CCTouch)0x0;
  if ((*(int *)(param_1 + 0x118) == 0) && (CVar2 = param_1[0x4c], CVar2 != (CCTouch)0x0)) {
    for (piVar3 = *(int **)(param_1 + 0x74); piVar3 != (int *)0x0;
        piVar3 = (int *)(**(code **)(*piVar3 + 0x90))(piVar3)) {
      iVar1 = (**(code **)(*piVar3 + 0x68))(piVar3);
      if (iVar1 == 0) {
        return (CCTouch)0x0;
      }
    }
    piVar3 = (int *)itemForTouch((CCMenu *)param_1,(CCTouch *)param_2);
    *(int **)(param_1 + 0x11c) = piVar3;
    CVar2 = (CCTouch)0x0;
    if (piVar3 != (int *)0x0) {
      CVar2 = (CCTouch)0x1;
      *(undefined4 *)(param_1 + 0x118) = 1;
      (**(code **)(*piVar3 + 0xf8))();
    }
  }
  return CVar2;
}


