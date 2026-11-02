/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134bc4  Symbol: getGlesVersion */

/* cocos2d::CCConfiguration::getGlesVersion() */

undefined8 cocos2d::CCConfiguration::getGlesVersion(void)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined auStack_c [4];
  
  uStack_10 = in_r0;
  uVar1 = glGetString(DAT_00134c18);
  FUN_001eed40(auStack_c,uVar1,&uStack_10);
  iVar2 = FUN_001ece40(auStack_c,DAT_00134c1c + 0x134be0,0);
  uVar1 = 1;
  if (iVar2 == -1) {
    iVar2 = FUN_001ece40(auStack_c,DAT_00134c20 + 0x134bf2,0);
    uVar1 = 2;
    if (iVar2 == -1) {
      iVar2 = FUN_001ece40(auStack_c,DAT_00134c24 + 0x134c04,0);
      uVar1 = 0;
      if (iVar2 != -1) {
        uVar1 = 3;
      }
    }
  }
  FUN_001ed6b8(auStack_c);
  return CONCAT44(uStack_10,uVar1);
}


