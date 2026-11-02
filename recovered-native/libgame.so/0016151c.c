/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016151c  Symbol: insertQuad */

/* cocos2d::CCTextureAtlas::insertQuad(cocos2d::_ccV3F_C4B_T2F_Quad*, unsigned int) */

void __thiscall
cocos2d::CCTextureAtlas::insertQuad(CCTextureAtlas *this,_ccV3F_C4B_T2F_Quad *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x24);
  *(int *)(this + 0x24) = iVar1 + 1;
  iVar1 = iVar1 - param_2;
  if (iVar1 != 0) {
    memmove((void *)(*(int *)(this + 0x30) + (param_2 + 1) * 0x60),
            (void *)(*(int *)(this + 0x30) + param_2 * 0x60),iVar1 * 0x60);
  }
  memcpy((void *)(*(int *)(this + 0x30) + param_2 * 0x60),param_1,0x60);
  this[0x20] = (CCTextureAtlas)0x1;
  return;
}


