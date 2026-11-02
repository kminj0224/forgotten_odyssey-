/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001614f6  Symbol: updateQuad */

/* cocos2d::CCTextureAtlas::updateQuad(cocos2d::_ccV3F_C4B_T2F_Quad*, unsigned int) */

void __thiscall
cocos2d::CCTextureAtlas::updateQuad(CCTextureAtlas *this,_ccV3F_C4B_T2F_Quad *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + 1;
  if (param_2 + 1 < *(uint *)(this + 0x24)) {
    uVar1 = *(uint *)(this + 0x24);
  }
  *(uint *)(this + 0x24) = uVar1;
  memcpy((void *)(*(int *)(this + 0x30) + param_2 * 0x60),param_1,0x60);
  this[0x20] = (CCTextureAtlas)0x1;
  return;
}


