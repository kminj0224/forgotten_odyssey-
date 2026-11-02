/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144c98  Symbol: getWinSize */

/* cocos2d::CCDirector::getWinSize() */

void cocos2d::CCDirector::getWinSize(void)

{
  undefined4 *in_r0;
  int in_r1;
  undefined4 uVar1;
  
  *in_r0 = *(undefined4 *)(in_r1 + 100);
  in_r0[1] = *(undefined4 *)(in_r1 + 0x68);
  if (*(int *)(in_r1 + 0x84) - 2U < 2) {
    uVar1 = in_r0[1];
    in_r0[1] = *in_r0;
    *in_r0 = uVar1;
  }
  return;
}


