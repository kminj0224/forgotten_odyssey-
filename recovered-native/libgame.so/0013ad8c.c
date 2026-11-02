/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ad8c  Symbol: actionWithDuration */

/* cocos2d::CCFlipX3D::actionWithDuration(float) */

undefined8 cocos2d::CCFlipX3D::actionWithDuration(float param_1)

{
  int *this;
  int iVar1;
  float fVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  fVar2 = (float)CCGrid3DAction::CCGrid3DAction((CCGrid3DAction *)this);
  *this = *(int *)(DAT_0013add8 + 0x13adb0) + 8;
  local_18 = 1;
  local_14 = 1;
  iVar1 = initWithSize((CCFlipX3D *)this,(_ccGridSize *)&local_18,fVar2);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return CONCAT44(local_18,this);
}


