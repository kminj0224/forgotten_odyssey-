/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142018  Symbol: setContentSize */

/* cocos2d::CCNode::setContentSize(cocos2d::CCSize const&) */

undefined8 cocos2d::CCNode::setContentSize(CCSize *param_1)

{
  int iVar1;
  CCDirector *pCVar2;
  undefined4 uVar3;
  CCSize *in_r1;
  CCSize *in_r2;
  CCSize in_r3;
  CCSize *pCVar4;
  CCSize CVar5;
  undefined8 uVar6;
  CCSize *local_20;
  CCSize *local_1c;
  CCSize *local_18;
  CCSize local_14;
  
  local_20 = param_1;
  local_1c = in_r1;
  local_18 = in_r2;
  local_14 = in_r3;
  iVar1 = CCSize::CCSizeEqualToSize((CCSize *)in_r1,param_1 + 0x18,in_r2);
  if (iVar1 == 0) {
    param_1[0x18] = *in_r1;
    param_1[0x19] = in_r1[1];
    pCVar2 = (CCDirector *)CCDirector::sharedDirector();
    uVar3 = CCDirector::getContentScaleFactor(pCVar2);
    iVar1 = __aeabi_fcmpeq(uVar3,0x3f800000);
    if (iVar1 == 0) {
      CVar5 = *in_r1;
      pCVar2 = (CCDirector *)CCDirector::sharedDirector();
      uVar3 = CCDirector::getContentScaleFactor(pCVar2);
      __mulsf3(CVar5,uVar3);
      CVar5 = in_r1[1];
      pCVar2 = (CCDirector *)CCDirector::sharedDirector();
      uVar3 = CCDirector::getContentScaleFactor(pCVar2);
      uVar6 = __mulsf3(CVar5,uVar3);
      CCSize::CCSize((CCSize *)&local_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
      param_1[0x1a] = (CCSize)local_20;
      pCVar4 = local_1c;
    }
    else {
      param_1[0x1a] = param_1[0x18];
      pCVar4 = (CCSize *)param_1[0x19];
    }
    param_1[0x1b] = (CCSize)pCVar4;
    __mulsf3(param_1[0x1a],param_1[0x14]);
    uVar6 = __mulsf3(param_1[0x1b],param_1[0x15]);
    CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    param_1[0x16] = (CCSize)local_18;
    param_1[0x17] = local_14;
    *(undefined *)((int)param_1 + 0xf5) = 1;
    *(undefined *)(param_1 + 0x3d) = 1;
    *(undefined *)((int)param_1 + 0xf6) = 1;
  }
  return CONCAT44(local_1c,local_20);
}


