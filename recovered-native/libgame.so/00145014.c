/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145014  Symbol: reshapeProjection */

/* cocos2d::CCDirector::reshapeProjection(cocos2d::CCSize const&) */

undefined8 cocos2d::CCDirector::reshapeProjection(CCSize *param_1)

{
  CCSize in_r1;
  CCSize in_r2;
  CCSize in_r3;
  CCSize CVar1;
  undefined8 uVar2;
  CCSize local_18;
  CCSize local_14;
  
  local_18 = in_r2;
  local_14 = in_r3;
  CCEGLView::getSize();
  CVar1 = param_1[0x1d];
  param_1[0x19] = (CCSize)param_1;
  param_1[0x1a] = in_r1;
  __mulsf3(CVar1,param_1[0x19]);
  uVar2 = __mulsf3(CVar1,param_1[0x1a]);
  CCSize::CCSize((CCSize *)&local_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  param_1[0x1b] = local_18;
  param_1[0x1c] = local_14;
  setProjection((CCDirector *)param_1,param_1[0x18]);
  return CONCAT44(in_r1,param_1);
}


