/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163cbc  Symbol: atlasIndexForNewZ */

/* cocos2d::CCTMXLayer::atlasIndexForNewZ(int) */

void __thiscall cocos2d::CCTMXLayer::atlasIndexForNewZ(CCTMXLayer *this,int param_1)

{
  int iVar1;
  
  for (iVar1 = 0;
      (iVar1 != **(int **)(this + 0x150) &&
      (*(int *)(iVar1 * 4 + (*(int **)(this + 0x150))[2]) <= param_1)); iVar1 = iVar1 + 1) {
  }
  return;
}


