/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001610f8  Symbol: initWithImage */

/* cocos2d::CCTexture2D::initWithImage(cocos2d::CCImage*) */

undefined4 __thiscall cocos2d::CCTexture2D::initWithImage(CCTexture2D *this,CCImage *param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1 == (CCImage *)0x0) {
    CCObject::release((CCObject *)this);
    uVar5 = 0;
  }
  else {
    iVar1 = CCConfiguration::sharedConfiguration();
    uVar2 = (***(code ***)param_1)(param_1);
    uVar3 = ccNextPOT(uVar2);
    uVar2 = (**(code **)(*(int *)param_1 + 4))(param_1);
    uVar4 = ccNextPOT(uVar2);
    if ((*(uint *)(iVar1 + 0x14) < uVar3) || (*(uint *)(iVar1 + 0x14) < uVar4)) {
      CCObject::release((CCObject *)this);
      uVar5 = 0;
    }
    else {
      uVar5 = initPremultipliedATextureWithImage(this,param_1,uVar3,uVar4);
    }
  }
  return uVar5;
}


