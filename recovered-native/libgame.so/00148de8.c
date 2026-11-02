/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148de8  Symbol: initWithString */

/* cocos2d::CCLabelTTF::initWithString(char const*, char const*, float) */

int __thiscall
cocos2d::CCLabelTTF::initWithString(CCLabelTTF *this,char *param_1,char *param_2,float param_3)

{
  int iVar1;
  CCDirector *this_00;
  undefined4 in_r3;
  undefined4 uVar2;
  void *pvVar3;
  undefined auStack_1c [8];
  
  iVar1 = CCSprite::init((CCSprite *)this);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(DAT_00148e68 + 0x148e0a);
    *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(DAT_00148e68 + 0x148e06);
    *(undefined4 *)(this + 0x1d0) = uVar2;
    pvVar3 = *(void **)(this + 0x1d8);
    if (pvVar3 != (void *)0x0) {
      FUN_001ed6b8(pvVar3);
      operator_delete(pvVar3);
      *(undefined4 *)(this + 0x1d8) = 0;
    }
    pvVar3 = operator_new(4);
    FUN_001eed40(pvVar3,param_2,auStack_1c);
    *(void **)(this + 0x1d8) = pvVar3;
    this_00 = (CCDirector *)CCDirector::sharedDirector();
    uVar2 = CCDirector::getContentScaleFactor(this_00);
    uVar2 = __mulsf3(in_r3,uVar2);
    *(undefined4 *)(this + 0x1dc) = uVar2;
    (**(code **)(*(int *)this + 0x11c))(this,param_1);
    iVar1 = 1;
  }
  return iVar1;
}


