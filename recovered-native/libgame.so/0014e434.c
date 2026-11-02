/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e434  Symbol: getColor */

/* cocos2d::CCMenuItemLabel::getColor() */

void cocos2d::CCMenuItemLabel::getColor(void)

{
  int in_r0;
  int *piVar1;
  
  piVar1 = *(int **)(in_r0 + 0x118);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)__dynamic_cast(piVar1,*(undefined4 *)(DAT_0014e45c + 0x14e448),
                                   *(undefined4 *)(DAT_0014e460 + 0x14e44a),0xfffffffe);
  }
  (**(code **)(*piVar1 + 4))();
  return;
}


