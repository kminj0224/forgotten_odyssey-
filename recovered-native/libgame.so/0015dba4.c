/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015dba4  Symbol: CCUserDefault */

/* cocos2d::CCUserDefault::CCUserDefault() */

CCUserDefault * __thiscall cocos2d::CCUserDefault::CCUserDefault(CCUserDefault *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)getXMLFilePath();
  uVar2 = FUN_00188aa8(*puVar1,DAT_0015dbc4 + 0x15dbb6,1);
  *(undefined4 *)(DAT_0015dbc8 + 0x15dbbe) = uVar2;
  return this;
}


