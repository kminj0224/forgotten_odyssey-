/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015da80  Symbol: setBoolForKey */

/* cocos2d::CCUserDefault::setBoolForKey(char const*, bool) */

void __thiscall
cocos2d::CCUserDefault::setBoolForKey(CCUserDefault *this,char *param_1,bool param_2)

{
  undefined *puVar1;
  undefined auStack_20 [4];
  undefined auStack_1c [4];
  undefined auStack_18 [4];
  undefined auStack_14 [8];
  
  if (param_2) {
    FUN_001eed40(auStack_18,DAT_0015dac8 + 0x15da96,auStack_20);
    setStringForKey((char *)this,(basic_string *)param_1);
    puVar1 = auStack_18;
  }
  else {
    FUN_001eed40(auStack_14,DAT_0015dacc + 0x15dab0,auStack_1c);
    setStringForKey((char *)this,(basic_string *)param_1);
    puVar1 = auStack_14;
  }
  FUN_001ed6b8(puVar1);
  return;
}


