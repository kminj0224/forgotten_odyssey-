/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001558f4  Symbol: getWriteablePath */

/* cocos2d::CCFileUtils::getWriteablePath() */

undefined4 cocos2d::CCFileUtils::getWriteablePath(void)

{
  undefined4 in_r0;
  int iVar1;
  undefined4 uVar2;
  undefined auStack_14 [4];
  undefined auStack_10 [4];
  undefined auStack_c [4];
  
  FUN_001eed40(auStack_c,DAT_0015593c + 0x155900,auStack_14);
  iVar1 = getPackageNameJNI();
  if (iVar1 == 0) {
    FUN_001eed40(in_r0,DAT_00155944 + 0x15592e,auStack_10);
  }
  else {
    uVar2 = FUN_001ee590(auStack_c);
    FUN_001ee590(uVar2,DAT_00155940 + 0x155918);
    FUN_001ee80c(in_r0,auStack_c);
  }
  FUN_001ed6b8(auStack_c);
  return in_r0;
}


