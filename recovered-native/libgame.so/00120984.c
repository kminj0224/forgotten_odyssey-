/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00120984  Symbol: NameHD */

/* NameHD(char const*) */

int NameHD(char *param_1)

{
  CCDirector *this;
  undefined4 uVar1;
  int iVar2;
  undefined auStack_20 [4];
  undefined auStack_1c [4];
  int local_18;
  int local_14;
  undefined auStack_10 [4];
  undefined auStack_c [4];
  
  FUN_001eed40(auStack_1c,param_1,auStack_20);
  local_18 = *(int *)(DAT_00120a24 + 0x120998) + 0xc;
  local_14 = local_18;
  this = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar1 = cocos2d::CCDirector::getContentScaleFactor(this);
  iVar2 = __aeabi_fcmpeq(uVar1,0x40000000);
  if (iVar2 == 0) {
    FUN_001ee874(&local_18,auStack_1c);
  }
  else {
    FUN_001ee80c(auStack_10,auStack_1c);
    FUN_001ee590(auStack_10,DAT_00120a28 + 0x1209c2);
    FUN_001ee874(&local_18,auStack_10);
    FUN_001ed6b8(auStack_10);
  }
  FUN_001ee80c(auStack_c,&local_18);
  FUN_001ee590(auStack_c,DAT_00120a2c + 0x1209ec);
  FUN_001ee874(&local_14,auStack_c);
  FUN_001ed6b8(auStack_c);
  FUN_001edf58(auStack_1c);
  FUN_001edf58(&local_18);
  iVar2 = local_14;
  FUN_001ed6b8(&local_14);
  FUN_001ed6b8(&local_18);
  FUN_001ed6b8(auStack_1c);
  return iVar2;
}


