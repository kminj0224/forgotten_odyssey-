/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137672  Symbol: initWithTarget */

/* cocos2d::CCFollow::initWithTarget(cocos2d::CCNode*, cocos2d::CCRect const&) */

undefined4 __thiscall
cocos2d::CCFollow::initWithTarget(CCFollow *this,CCNode *param_1,CCRect *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CCRect CVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  CCObject::retain((CCObject *)param_1);
  *(CCNode **)(this + 0x20) = param_1;
  this[0x24] = (CCFollow)0x1;
  this[0x25] = (CCFollow)0x0;
  CCDirector::sharedDirector();
  uVar7 = CCDirector::getWinSize();
  CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  *(undefined4 *)(this + 0x30) = local_28;
  *(undefined4 *)(this + 0x34) = local_24;
  __mulsf3(*(undefined4 *)(this + 0x30),0x3f000000);
  uVar7 = __mulsf3(*(undefined4 *)(this + 0x34),0x3f000000);
  CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  *(undefined4 *)(this + 0x28) = local_20;
  *(undefined4 *)(this + 0x2c) = local_1c;
  uVar1 = __addsf3(*param_2,param_2[2]);
  iVar2 = __subsf3(uVar1,*(undefined4 *)(this + 0x30));
  iVar2 = iVar2 + -0x80000000;
  *(int *)(this + 0x38) = iVar2;
  CVar5 = *param_2;
  iVar4 = CVar5 + 0x80000000;
  *(int *)(this + 0x3c) = iVar4;
  iVar6 = param_2[1] + 0x80000000;
  *(int *)(this + 0x40) = iVar6;
  uVar1 = __addsf3(param_2[1],param_2[3]);
  iVar3 = __subsf3(uVar1,*(undefined4 *)(this + 0x34));
  *(int *)(this + 0x44) = iVar3 + -0x80000000;
  iVar4 = __aeabi_fcmplt(iVar4,iVar2);
  if (iVar4 != 0) {
    uVar1 = __subsf3(iVar2,CVar5);
    uVar1 = __mulsf3(uVar1,0x3f000000);
    *(undefined4 *)(this + 0x38) = uVar1;
    *(undefined4 *)(this + 0x3c) = uVar1;
  }
  iVar2 = __aeabi_fcmplt(iVar6,iVar3 + -0x80000000);
  if (iVar2 != 0) {
    uVar1 = __subsf3(iVar6,iVar3);
    uVar1 = __mulsf3(uVar1,0x3f000000);
    *(undefined4 *)(this + 0x44) = uVar1;
    *(undefined4 *)(this + 0x40) = uVar1;
  }
  iVar2 = __aeabi_fcmpeq(*(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x44));
  if ((iVar2 != 0) &&
     (iVar2 = __aeabi_fcmpeq(*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c)), iVar2 != 0)
     ) {
    this[0x25] = (CCFollow)0x1;
  }
  return 1;
}


