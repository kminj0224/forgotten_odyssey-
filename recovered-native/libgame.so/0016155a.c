/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016155a  Symbol: insertQuadFromIndex */

/* cocos2d::CCTextureAtlas::insertQuadFromIndex(unsigned int, unsigned int) */

void __thiscall
cocos2d::CCTextureAtlas::insertQuadFromIndex(CCTextureAtlas *this,uint param_1,uint param_2)

{
  int iVar1;
  uint local_84;
  uint local_80;
  undefined auStack_78 [100];
  
  if (param_1 != param_2) {
    if (param_2 < param_1) {
      local_84 = param_2 + 1;
      local_80 = param_2;
    }
    else {
      local_80 = param_1 + 1;
      local_84 = param_1;
    }
    iVar1 = *(int *)(this + 0x30);
    memcpy(auStack_78,(void *)(iVar1 + param_1 * 0x60),0x60);
    memmove((void *)(iVar1 + local_84 * 0x60),(void *)(iVar1 + local_80 * 0x60),
            (param_1 - param_2) * 0x60);
    memcpy((void *)(*(int *)(this + 0x30) + param_2 * 0x60),auStack_78,0x60);
    this[0x20] = (CCTextureAtlas)0x1;
  }
  return;
}


