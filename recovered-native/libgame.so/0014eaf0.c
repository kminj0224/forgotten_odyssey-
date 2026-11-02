/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014eaf0  Symbol: rect */

/* cocos2d::CCMenuItem::rect() */

CCRect * cocos2d::CCMenuItem::rect(void)

{
  CCRect *in_r0;
  undefined4 uVar1;
  int in_r1;
  undefined4 uVar2;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  uVar2 = *(undefined4 *)(in_r1 + 100);
  uVar1 = __mulsf3(*(undefined4 *)(in_r1 + 0x60),*(undefined4 *)(in_r1 + 0x50));
  __subsf3(*(undefined4 *)(in_r1 + 0x28),uVar1);
  uVar1 = __mulsf3(uVar2,*(undefined4 *)(in_r1 + 0x54));
  uVar3 = __subsf3(*(undefined4 *)(in_r1 + 0x2c),uVar1);
  CCRect::CCRect(in_r0,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2,extraout_s3);
  return in_r0;
}


