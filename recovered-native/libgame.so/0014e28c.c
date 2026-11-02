/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e28c  Symbol: getColor */

/* cocos2d::CCMenuItemSprite::getColor() */

void cocos2d::CCMenuItemSprite::getColor(void)

{
  int in_r0;
  int *piVar1;
  
  piVar1 = *(int **)(in_r0 + 0x114);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)__dynamic_cast(piVar1,*(undefined4 *)(DAT_0014e2b4 + 0x14e2a0),
                                   *(undefined4 *)(DAT_0014e2b8 + 0x14e2a2),0xfffffffe);
  }
  (**(code **)(*piVar1 + 4))();
  return;
}


