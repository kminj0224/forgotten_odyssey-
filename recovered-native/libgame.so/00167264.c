/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167264  Symbol: setTile */

/* cocos2d::CCTileMapAtlas::setTile(cocos2d::_ccColor3B const&, cocos2d::_ccGridSize const&) */

void __thiscall
cocos2d::CCTileMapAtlas::setTile(CCTileMapAtlas *this,_ccColor3B *param_1,_ccGridSize *param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined auStack_44 [4];
  undefined auStack_40 [4];
  char acStack_3c [32];
  int local_1c;
  
  iVar1 = DAT_0016730c;
  piVar3 = *(int **)(DAT_00167308 + 0x167270);
  local_1c = *piVar3;
  pcVar2 = (char *)(*(int *)(*(int *)(this + 0x130) + 0xc) +
                   (*(int *)(param_2 + 4) * (int)*(short *)(*(int *)(this + 0x130) + 6) +
                   *(int *)param_2) * 3);
  if (*pcVar2 != '\0') {
    *pcVar2 = *(char *)param_1;
    pcVar2[1] = *(char *)((int)param_1 + 1);
    pcVar2[2] = *(char *)((int)param_1 + 2);
    sprintf(acStack_3c,(char *)(iVar1 + 0x1672a8),*(undefined4 *)param_2);
    FUN_001eed40(auStack_40,acStack_3c,auStack_44);
    FUN_001ee590(auStack_40,DAT_00167310 + 0x1672c6);
    sprintf(acStack_3c,(char *)(iVar1 + 0x1672a8),*(undefined4 *)(param_2 + 4));
    FUN_001ee590(auStack_40,acStack_3c);
    iVar1 = std::
            _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,int>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,int>>>
            ::find(*(basic_string **)(this + 0x134));
    updateAtlasValueAt(this,param_2,param_1,*(uint *)(iVar1 + 0x14));
    FUN_001ed6b8(auStack_40);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


