/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001673dc  Symbol: updateAtlasValues */

/* cocos2d::CCTileMapAtlas::updateAtlasValues() */

void __thiscall cocos2d::CCTileMapAtlas::updateAtlasValues(CCTileMapAtlas *this)

{
  int iVar1;
  char *__format;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined auStack_68 [4];
  char local_64;
  char local_63;
  char local_62;
  undefined auStack_60 [4];
  int local_5c;
  int local_58;
  undefined auStack_54 [4];
  uint local_50;
  undefined auStack_4c [4];
  uint local_48;
  pair apStack_44 [8];
  char acStack_3c [32];
  int local_1c;
  
  piVar2 = *(int **)(DAT_001674d4 + 0x1673e8);
  uVar5 = 0;
  __format = (char *)(DAT_001674d8 + 0x1673ee);
  local_1c = *piVar2;
  for (iVar6 = 0; iVar6 < *(short *)(*(int *)(this + 0x130) + 6); iVar6 = iVar6 + 1) {
    iVar4 = 0;
    while( true ) {
      iVar1 = *(int *)(this + 0x130);
      if (*(short *)(iVar1 + 8) <= iVar4) break;
      if ((int)uVar5 < *(int *)(this + 0x138)) {
        pcVar3 = (char *)(*(int *)(iVar1 + 0xc) + (iVar6 + iVar4 * *(short *)(iVar1 + 6)) * 3);
        local_64 = *pcVar3;
        local_63 = pcVar3[1];
        local_62 = pcVar3[2];
        if (local_64 != '\0') {
          local_5c = iVar6;
          local_58 = iVar4;
          updateAtlasValueAt(this,(_ccGridSize *)&local_5c,(_ccColor3B *)&local_64,uVar5);
          sprintf(acStack_3c,__format,iVar6);
          FUN_001eed40(auStack_60,acStack_3c,auStack_68);
          FUN_001ee590(auStack_60,DAT_001674dc + 0x167454);
          sprintf(acStack_3c,__format,iVar4);
          FUN_001ee590(auStack_60,acStack_3c);
          FUN_001ee80c(auStack_54,auStack_60);
          local_50 = uVar5;
          FUN_001ee80c(auStack_4c,auStack_54);
          local_48 = local_50;
          std::
          _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,int>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,int>>>
          ::_M_insert_unique(apStack_44);
          FUN_001ed6b8(auStack_4c);
          FUN_001ed6b8(auStack_54);
          uVar5 = uVar5 + 1;
          FUN_001ed6b8(auStack_60);
        }
      }
      iVar4 = iVar4 + 1;
    }
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


