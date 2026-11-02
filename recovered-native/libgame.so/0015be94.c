/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015be94  Symbol: init */

/* cocos2d::CCSpriteFrameCache::init() */

undefined4 __thiscall cocos2d::CCSpriteFrameCache::init(CCSpriteFrameCache *this)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)operator_new(0x34);
  CCObject::CCObject((CCObject *)piVar1);
  piVar2 = piVar1 + 6;
  *piVar1 = *(int *)(DAT_0015bf08 + 0x15beae) + 8;
  memset(piVar2,0,0x10);
  piVar1[10] = 0;
  piVar1[0xc] = 0;
  piVar1[8] = (int)piVar2;
  piVar1[9] = (int)piVar2;
  *(CCObject *)(piVar1 + 0xb) = (CCObject)0x0;
  *(int **)(this + 0x14) = piVar1;
  piVar1 = (int *)operator_new(0x34);
  CCObject::CCObject((CCObject *)piVar1);
  piVar2 = piVar1 + 6;
  *piVar1 = *(int *)(DAT_0015bf0c + 0x15bee4) + 8;
  memset(piVar2,0,0x10);
  piVar1[10] = 0;
  piVar1[0xc] = 0;
  piVar1[8] = (int)piVar2;
  piVar1[9] = (int)piVar2;
  *(CCObject *)(piVar1 + 0xb) = (CCObject)0x0;
  *(int **)(this + 0x18) = piVar1;
  return 1;
}


