/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00153428  Symbol: setTexture */

/* cocos2d::CCParticleSystem::setTexture(cocos2d::CCTexture2D*) */

void __thiscall cocos2d::CCParticleSystem::setTexture(CCParticleSystem *this,CCTexture2D *param_1)

{
  int iVar1;
  
  if (param_1 != (CCTexture2D *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x1e0) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x1e0));
  }
  *(CCTexture2D **)(this + 0x1e0) = param_1;
  if ((((param_1 != (CCTexture2D *)0x0) &&
       (iVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_1), iVar1 == 0)) &&
      (*(int *)(this + 0x1e4) == 1)) && (*(int *)(this + 0x1e8) == DAT_00153474)) {
    *(undefined4 *)(this + 0x1e4) = DAT_00153478;
    *(int *)(this + 0x1e8) = *(int *)(this + 0x1e8);
  }
  return;
}


