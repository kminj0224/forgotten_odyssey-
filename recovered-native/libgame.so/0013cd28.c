/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013cd28  Symbol: startWithTarget */

/* cocos2d::CCTintBy::startWithTarget(cocos2d::CCNode*) */

void cocos2d::CCTintBy::startWithTarget(CCNode *param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  CCNode *in_r1;
  
  CCActionInterval::startWithTarget((CCActionInterval *)param_1,in_r1);
  if ((in_r1 != (CCNode *)0x0) &&
     (piVar3 = (int *)__dynamic_cast(in_r1,*(undefined4 *)(DAT_0013cd64 + 0x13cd40),
                                     *(undefined4 *)(DAT_0013cd68 + 0x13cd42),0xfffffffe),
     piVar3 != (int *)0x0)) {
    pbVar4 = (byte *)(**(code **)(*piVar3 + 4))();
    bVar1 = pbVar4[2];
    bVar2 = *pbVar4;
    *(ushort *)(param_1 + 0x32) = (ushort)pbVar4[1];
    *(ushort *)(param_1 + 0x34) = (ushort)bVar1;
    *(ushort *)(param_1 + 0x30) = (ushort)bVar2;
  }
  return;
}


