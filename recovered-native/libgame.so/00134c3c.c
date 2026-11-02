/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134c3c  Symbol: init */

/* cocos2d::CCConfiguration::init() */

undefined4 __thiscall cocos2d::CCConfiguration::init(CCConfiguration *this)

{
  CCConfiguration CVar1;
  undefined4 uVar2;
  undefined auStack_28 [4];
  undefined auStack_24 [4];
  undefined auStack_20 [4];
  undefined auStack_1c [4];
  basic_string bStack_18;
  basic_string bStack_14;
  basic_string bStack_10;
  basic_string bStack_c;
  
  uVar2 = glGetString(DAT_00134cd4);
  *(undefined4 *)(this + 0x2c) = uVar2;
  glGetIntegerv(DAT_00134cd8,this + 0x14);
  glGetIntegerv(DAT_00134cdc,this + 0x18);
  FUN_001eed40(&bStack_18,DAT_00134ce0 + 0x134c68,auStack_28);
  CVar1 = (CCConfiguration)checkForGLExtension(this,&bStack_18);
  this[0x1c] = CVar1;
  FUN_001ed6b8(&bStack_18);
  FUN_001eed40(&bStack_14,DAT_00134ce4 + 0x134c84,auStack_24);
  CVar1 = (CCConfiguration)checkForGLExtension(this,&bStack_14);
  this[0x1d] = CVar1;
  FUN_001ed6b8(&bStack_14);
  FUN_001eed40(&bStack_10,DAT_00134ce8 + 0x134ca0,auStack_20);
  CVar1 = (CCConfiguration)checkForGLExtension(this,&bStack_10);
  this[0x1e] = CVar1;
  FUN_001ed6b8(&bStack_10);
  FUN_001eed40(&bStack_c,DAT_00134cec + 0x134cbc,auStack_1c);
  CVar1 = (CCConfiguration)checkForGLExtension(this,&bStack_c);
  this[0x1f] = CVar1;
  FUN_001ed6b8(&bStack_c);
  return 1;
}


