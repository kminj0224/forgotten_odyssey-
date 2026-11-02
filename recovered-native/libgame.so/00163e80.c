/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163e80  Symbol: positionForIsoAt */

/* cocos2d::CCTMXLayer::positionForIsoAt(cocos2d::CCPoint const&) */

undefined8 cocos2d::CCTMXLayer::positionForIsoAt(CCPoint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_r1;
  undefined4 *in_r2;
  undefined4 in_r3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar4 = *in_r2;
  uVar5 = in_r2[1];
  uVar1 = __mulsf3(*(undefined4 *)(in_r1 + 0x118),0x3f000000,in_r2,in_r3,param_1);
  uVar2 = __addsf3(uVar4,*(undefined4 *)(in_r1 + 0x110));
  uVar2 = __subsf3(uVar2,uVar5);
  uVar2 = __subsf3(uVar2,0x3f800000);
  uVar1 = __mulsf3(uVar1,uVar2);
  uVar2 = __mulsf3(*(undefined4 *)(in_r1 + 0x11c),0x3f000000);
  uVar3 = __addsf3(*(undefined4 *)(in_r1 + 0x114));
  uVar3 = __subsf3(uVar3,uVar4);
  uVar3 = __subsf3(uVar3,uVar5);
  uVar3 = __subsf3(uVar3,0x40000000);
  uVar6 = __mulsf3(uVar2,uVar3);
  CCPoint::CCPoint((CCPoint *)param_1,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  return CONCAT44(uVar1,param_1);
}


