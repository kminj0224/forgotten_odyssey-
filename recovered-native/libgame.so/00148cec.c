/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148cec  Symbol: initWithString */

/* cocos2d::CCLabelTTF::initWithString(char const*, cocos2d::CCSize const&,
   cocos2d::CCTextAlignment, char const*, float) */

int __thiscall
cocos2d::CCLabelTTF::initWithString
          (CCLabelTTF *this,char *param_1,CCSize *param_2,CCTextAlignment param_3,char *param_4,
          float param_5)

{
  int iVar1;
  CCDirector *pCVar2;
  undefined4 uVar3;
  void *pvVar4;
  CCSize CVar5;
  undefined8 uVar6;
  undefined4 in_stack_00000004;
  undefined auStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = CCSprite::init((CCSprite *)this);
  if (iVar1 != 0) {
    CVar5 = *param_2;
    pCVar2 = (CCDirector *)CCDirector::sharedDirector();
    uVar3 = CCDirector::getContentScaleFactor(pCVar2);
    __mulsf3(CVar5,uVar3);
    CVar5 = param_2[1];
    pCVar2 = (CCDirector *)CCDirector::sharedDirector();
    uVar3 = CCDirector::getContentScaleFactor(pCVar2);
    uVar6 = __mulsf3(CVar5,uVar3);
    CCSize::CCSize((CCSize *)&local_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    *(undefined4 *)(this + 0x1cc) = local_20;
    *(undefined4 *)(this + 0x1d0) = local_1c;
    *(CCTextAlignment *)(this + 0x1d4) = param_3;
    pvVar4 = *(void **)(this + 0x1d8);
    if (pvVar4 != (void *)0x0) {
      FUN_001ed6b8(pvVar4);
      operator_delete(pvVar4);
      *(undefined4 *)(this + 0x1d8) = 0;
    }
    pvVar4 = operator_new(4);
    FUN_001eed40(pvVar4,param_4,auStack_24);
    *(void **)(this + 0x1d8) = pvVar4;
    pCVar2 = (CCDirector *)CCDirector::sharedDirector();
    uVar3 = CCDirector::getContentScaleFactor(pCVar2);
    uVar3 = __mulsf3(in_stack_00000004,uVar3);
    *(undefined4 *)(this + 0x1dc) = uVar3;
    (**(code **)(*(int *)this + 0x11c))(this,param_1);
    iVar1 = 1;
  }
  return iVar1;
}


