/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147620  Symbol: parseCommonArguments */

/* cocos2d::CCBMFontConfiguration::parseCommonArguments(std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >) */

undefined8 cocos2d::CCBMFontConfiguration::parseCommonArguments(basic_string param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_r1;
  char *local_20;
  undefined4 uStack_1c;
  undefined auStack_18 [4];
  undefined auStack_14 [4];
  
  local_20 = (char *)param_1;
  uStack_1c = in_r1;
  iVar1 = FUN_001ece40(in_r1,DAT_001476f8 + 0x14762e,0);
  iVar2 = FUN_001ece70(in_r1,0x20,iVar1);
  FUN_001eebe0(&local_20,in_r1,iVar1,iVar2 - iVar1);
  sscanf(local_20,(char *)(DAT_001476fc + 0x147654),param_1 + 0x18);
  iVar1 = FUN_001ece40(in_r1,DAT_00147700 + 0x147662,0);
  iVar1 = iVar1 + 7;
  iVar2 = FUN_001ece70(in_r1,0x20,iVar1);
  FUN_001eebe0(&uStack_1c,in_r1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_20,&uStack_1c);
  FUN_001ed6b8(&uStack_1c);
  iVar1 = FUN_001ece40(in_r1,DAT_00147704 + 0x147694,0);
  iVar1 = iVar1 + 7;
  iVar2 = FUN_001ece70(in_r1,0x20,iVar1);
  FUN_001eebe0(auStack_18,in_r1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_20,auStack_18);
  FUN_001ed6b8(auStack_18);
  iVar1 = FUN_001ece40(in_r1,DAT_00147708 + 0x1476c6,0);
  iVar1 = iVar1 + 6;
  iVar2 = FUN_001ece70(in_r1,0x20,iVar1);
  FUN_001eebe0(auStack_14,in_r1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_20,auStack_14);
  FUN_001ed6b8(auStack_14);
  FUN_001ed6b8(&local_20);
  return CONCAT44(uStack_1c,local_20);
}


