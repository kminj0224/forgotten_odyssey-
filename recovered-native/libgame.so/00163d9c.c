/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163d9c  Symbol: calculateLayerOffset */

/* cocos2d::CCTMXLayer::calculateLayerOffset(cocos2d::CCPoint const&) */

CCPoint * cocos2d::CCTMXLayer::calculateLayerOffset(CCPoint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_r1;
  int *in_r2;
  CCPoint CVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  CCPoint local_28;
  CCPoint local_24;
  CCPoint local_20;
  CCPoint local_1c;
  
  CVar3 = *(CCPoint *)(DAT_00163e44 + 0x163db0);
  param_1[1] = *(CCPoint *)(DAT_00163e44 + 0x163db4);
  iVar4 = *(int *)(in_r1 + 0x128);
  *param_1 = CVar3;
  if (iVar4 == 0) {
    __mulsf3(*in_r2,*(undefined4 *)(in_r1 + 0x118));
    uVar6 = __mulsf3(in_r2[1] + -0x80000000,*(undefined4 *)(in_r1 + 0x11c));
    CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    *param_1 = local_28;
    local_1c = local_24;
  }
  else {
    if (iVar4 != 2) {
      return param_1;
    }
    uVar1 = __mulsf3(*(undefined4 *)(in_r1 + 0x118),0x3f000000);
    iVar5 = *in_r2;
    iVar4 = in_r2[1];
    uVar2 = __subsf3(iVar5,iVar4);
    __mulsf3(uVar1,uVar2);
    uVar1 = __mulsf3(*(undefined4 *)(in_r1 + 0x11c),0x3f000000);
    uVar2 = __subsf3(iVar5 + -0x80000000,iVar4);
    uVar6 = __mulsf3(uVar1,uVar2);
    CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    *param_1 = local_20;
  }
  param_1[1] = local_1c;
  return param_1;
}


