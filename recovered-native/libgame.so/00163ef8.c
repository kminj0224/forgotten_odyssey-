/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163ef8  Symbol: positionForHexAt */

/* cocos2d::CCTMXLayer::positionForHexAt(cocos2d::CCPoint const&) */

undefined8 cocos2d::CCTMXLayer::positionForHexAt(CCPoint *param_1)

{
  uint uVar1;
  int in_r1;
  undefined4 *in_r2;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = *in_r2;
  uVar1 = __fixsfsi(uVar2);
  uVar1 = uVar1 & DAT_00163f78;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar3 = 0;
  if (uVar1 == 1) {
    uVar3 = __mulsf3(*(int *)(in_r1 + 0x11c) + -0x80000000,0x3f000000);
  }
  uVar2 = __mulsf3(uVar2,*(undefined4 *)(in_r1 + 0x118));
  uVar2 = __mulsf3(uVar2,DAT_00163f7c);
  __mulsf3(uVar2,0x3e800000);
  uVar2 = __subsf3(*(undefined4 *)(in_r1 + 0x114),in_r2[1]);
  uVar2 = __subsf3(uVar2,0x3f800000);
  uVar2 = __mulsf3(uVar2,*(undefined4 *)(in_r1 + 0x11c));
  uVar4 = __addsf3(uVar2,uVar3);
  CCPoint::CCPoint((CCPoint *)param_1,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  return CONCAT44(param_1,param_1);
}


