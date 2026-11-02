/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014770c  Symbol: parseCharacterDefinition */

/* cocos2d::CCBMFontConfiguration::parseCharacterDefinition(std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::_BMFontDef*) */

void __thiscall
cocos2d::CCBMFontConfiguration::parseCharacterDefinition
          (CCBMFontConfiguration *this,basic_string param_1,_BMFontDef *param_2)

{
  int iVar1;
  int iVar2;
  char *local_30;
  undefined auStack_2c [4];
  undefined auStack_28 [4];
  undefined auStack_24 [4];
  undefined auStack_20 [4];
  undefined auStack_1c [4];
  undefined auStack_18 [4];
  undefined auStack_14 [4];
  
  iVar1 = FUN_001ece40(param_1,DAT_0014790c + 0x14771a,0);
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(&local_30,param_1,iVar1,iVar2 - iVar1);
  sscanf(local_30,(char *)(DAT_00147910 + 0x147742),param_2);
  iVar1 = FUN_001ece40(param_1,DAT_00147914 + 0x14774e,0);
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(auStack_2c,param_1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_30,auStack_2c);
  FUN_001ed6b8(auStack_2c);
  sscanf(local_30,(char *)(DAT_00147918 + 0x147780),param_2 + 4);
  iVar1 = FUN_001ece40(param_1,DAT_0014791c + 0x14778c,0);
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(auStack_28,param_1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_30,auStack_28);
  FUN_001ed6b8(auStack_28);
  sscanf(local_30,(char *)(DAT_00147920 + 0x1477be),param_2 + 8);
  iVar1 = FUN_001ece40(param_1,DAT_00147924 + 0x1477cc,0);
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(auStack_24,param_1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_30,auStack_24);
  FUN_001ed6b8(auStack_24);
  sscanf(local_30,(char *)(DAT_00147928 + 0x1477fe),param_2 + 0xc);
  iVar1 = FUN_001ece40(param_1,DAT_0014792c + 0x14780c,0);
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(auStack_20,param_1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_30,auStack_20);
  FUN_001ed6b8(auStack_20);
  sscanf(local_30,(char *)(DAT_00147930 + 0x14783e),param_2 + 0x10);
  iVar1 = FUN_001ece40(param_1,DAT_00147934 + 0x14784c,0);
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(auStack_1c,param_1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_30,auStack_1c);
  FUN_001ed6b8(auStack_1c);
  sscanf(local_30,(char *)(DAT_00147938 + 0x14787e),param_2 + 0x14);
  iVar1 = FUN_001ece40(param_1,DAT_0014793c + 0x14788c,0);
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(auStack_18,param_1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_30,auStack_18);
  FUN_001ed6b8(auStack_18);
  sscanf(local_30,(char *)(DAT_00147940 + 0x1478be),param_2 + 0x18);
  iVar1 = FUN_001ece40(param_1,DAT_00147944 + 0x1478cc,0);
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(auStack_14,param_1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_30,auStack_14);
  FUN_001ed6b8(auStack_14);
  sscanf(local_30,(char *)(DAT_00147948 + 0x1478fe),param_2 + 0x1c);
  FUN_001ed6b8(&local_30);
  return;
}


