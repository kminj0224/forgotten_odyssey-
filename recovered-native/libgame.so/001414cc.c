/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001414cc  Symbol: copyWithZone */

/* cocos2d::CCSplitRows::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCSplitRows::copyWithZone(CCSplitRows *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  float fVar2;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_00141514;
  }
  this_00 = (int *)operator_new(0x40);
  memset(this_00,0,0x40);
  CCTiledGrid3DAction::CCTiledGrid3DAction((CCTiledGrid3DAction *)this_00);
  *this_00 = *(int *)(DAT_00141534 + 0x1414fc) + 8;
  CCSize::CCSize((CCSize *)(this_00 + 0xe));
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_00141514:
  fVar2 = (float)CCGridAction::copyWithZone((CCGridAction *)this,param_1);
  initWithRows((int)this_00,fVar2);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


