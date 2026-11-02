/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147554  Symbol: parseImageFileName */

/* cocos2d::CCBMFontConfiguration::parseImageFileName(std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, char const*) */

undefined8 __thiscall
cocos2d::CCBMFontConfiguration::parseImageFileName
          (CCBMFontConfiguration *this,basic_string param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  CCBMFontConfiguration *local_20;
  basic_string bStack_1c;
  char *pcStack_18;
  
  local_20 = this;
  bStack_1c = param_1;
  pcStack_18 = param_2;
  iVar1 = FUN_001ece70(param_1,0x3d,0);
  iVar1 = iVar1 + 1;
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(&local_20,param_1,iVar1,iVar2 - iVar1);
  iVar1 = FUN_001ece70(param_1,0x22,0);
  iVar1 = iVar1 + 1;
  iVar2 = FUN_001ece70(param_1,0x22,iVar1);
  FUN_001eebe0(&bStack_1c,param_1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_20,&bStack_1c);
  FUN_001ed6b8(&bStack_1c);
  uVar3 = CCFileUtils::fullPathFromRelativeFile((char *)local_20,param_2);
  FUN_001ed9dc(this + 0x2c,uVar3);
  FUN_001ed6b8(&local_20);
  return CONCAT44(bStack_1c,local_20);
}


