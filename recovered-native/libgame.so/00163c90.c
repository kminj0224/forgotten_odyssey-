/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163c90  Symbol: atlasIndexForExistantZ */

/* cocos2d::CCTMXLayer::atlasIndexForExistantZ(unsigned int) */

uint __thiscall cocos2d::CCTMXLayer::atlasIndexForExistantZ(CCTMXLayer *this,uint param_1)

{
  void *pvVar1;
  uint local_c;
  
  local_c = param_1;
  pvVar1 = bsearch(&local_c,(void *)(*(size_t **)(this + 0x150))[2],**(size_t **)(this + 0x150),4,
                   (__compar_fn_t)(DAT_00163cb8 + 0x163ca6));
  return (uint)((int)pvVar1 - *(int *)(*(int *)(this + 0x150) + 8)) >> 2;
}


